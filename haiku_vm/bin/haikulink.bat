@echo off
rem The base for haikulink was nxjlink from leJOS

set CLASSESDIR=%TEMP%\haikuvm

set PATH=%PATH%;%~p0..\hardware\tools\avr\utils\bin;%~p0..\hardware\tools\avr\bin
if "%OS%" == "Windows_NT" goto :winnt

:win98
	echo Windows 9x/ME is no longer supported.
	echo Please upgrade to Windows 2000 or later.
	goto :eof

:append_jar
	set "TMP_CP=%TMP_CP%;%TMP_JAR%"
	goto :eof

:build_classpath
	if not exist "%~2" (
		echo Internal error. The following directory does not exist:
		echo   "%~2"
		exit /B 1
	)

	set "TMP_CP="
	for /R "%~2" %%i in (*.jar) do (
		set "TMP_JAR=%%i"
		call :append_jar
	)
	set "%~1=%TMP_CP:~1%"
	goto :eof

:search_path
	set "%~1=%~f$PATH:2"
	goto :eof

:find_make
	call :search_path MAKE make.exe
	if "%MAKE%" == "" (
		echo make.exe was not found in the default search path.
		echo Install a WINAVR.
		exit /B 1
	)
	goto :eof

:find_java_and_javac
	call :search_path JAVA java.exe
	call :search_path JAVAC javac.exe
	if "%JAVA%" == "" (
		echo java.exe was not found in the default search path.
		echo Install a JDK and set the variable LEJOS_NXT_JAVA_HOME
		echo to the root directory of the JDK.
		exit /B 1
	) else if "%JAVAC%" == "" (
		echo javac.exe was not found in the default search path.
		echo Consider setting the variable LEJOS_NXT_JAVA_HOME to
		echo the root directory of a JDK. Otherwise,
		echo some tools might not work.
	)
	goto :eof

:set_java_and_javac
	set "JAVA=%~2\bin\java.exe"
	set "JAVAC=%~2\bin\javac.exe"
	if not exist "%JAVA%" (
		echo The variable %~1 does not point to the root directory of
		echo a JRE or JDK. The following executable does not exist:
		echo   "%JAVA%"
		exit /B 1
	) else if not exist "%JAVAC%" (
		echo The variable %~1 seems to point to the root directory of
		echo a JRE. It should point to the root directory of a JDK.
		echo Otherwise, some tools might not work.
	)
	goto :eof

:winnt
	setlocal
	set "NXJ_COMMAND=%~n0"
	set "NXJ_HOME=%~dp0\.."

	call :build_classpath NXJ_CP_PC "%%NXJ_HOME%%\lib\pc"
	call :build_classpath NXJ_CP_NXT "%%NXJ_HOME%%\lib\nxt"

	if not "%LEJOS_NXT_JAVA_HOME%" == "" (
		call :set_java_and_javac LEJOS_NXT_JAVA_HOME "%%LEJOS_NXT_JAVA_HOME%%"
	) else if not "%JAVA_HOME%" == "" (
		call :set_java_and_javac JAVA_HOME "%%JAVA_HOME%%"
	) else (
		call :find_java_and_javac
	)

	set error=0
    echo #
    echo #
    echo #
    echo #############################################################
    echo # generating c files
    echo #############################################################
    echo "%JAVA%" "-Dhaikuvm.home=%NXJ_HOME%" "-DCOMMAND_NAME=%NXJ_COMMAND%" -classpath "%NXJ_CP_PC%" haikuvm.pc.tools.HaikuVM --bootclasspath "%CLASSESDIR%;%NXJ_CP_NXT%" %*
    "%JAVA%" "-Dhaikuvm.home=%NXJ_HOME%" "-DCOMMAND_NAME=%NXJ_COMMAND%" -classpath "%NXJ_CP_PC%" haikuvm.pc.tools.HaikuVM --bootclasspath "%CLASSESDIR%;%NXJ_CP_NXT%" %*
	set error=%errorlevel%
    if errorlevel 1 goto :error

    echo #############################################################
    echo # Done with generating c files
    echo #############################################################
	call :find_make
    cd target\cross
    "%MAKE%" clean
    "%MAKE%" all
	set error=%errorlevel%
    if errorlevel 1 goto :error2
    goto :eof
:error
    echo #############################################################
    echo # error while generating c files
    echo #############################################################
    goto :error_exit
:error2
    echo #############################################################
    echo # error while cross compiling
    echo #############################################################
:error_exit
exit %error%
:eof
