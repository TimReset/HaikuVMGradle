################################################################################
# Automatically-generated file. Do not edit!
################################################################################





# Add inputs and outputs from these tool invocations to the build variables
C_SRCS += \
../../HaikuVM/examples/HaikuVM/HaikuVMUsingArduinoIDE.cpp \

OBJS += \
./HaikuVM/examples/HaikuVM/HaikuVMUsingArduinoIDE.o \

C_DEPS += \
./HaikuVM/examples/HaikuVM/HaikuVMUsingArduinoIDE.d \

SUBDIRS += \
./HaikuVM/examples/HaikuVM


# Each subdirectory must supply rules for building sources it contributes
./HaikuVM/examples/HaikuVM/%.o:	../../HaikuVM/examples/HaikuVM/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: C Compiler'
	$(HAIKU_CC)  $(HAIKU_CC_OPT)
	@echo 'Finished building: $<'
	@echo ' '

./HaikuVM/examples/HaikuVM/%.o: ../../HaikuVM/examples/HaikuVM/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: C++ Compiler'
	$(HAIKU_CXX)  $(HAIKU_CXX_OPT)
	@echo 'Finished building: $<'
	@echo ' '




# Add inputs and outputs from these tool invocations to the build variables
C_SRCS += \
../../HaikuVM/utility/haikuConfig.c \
../../HaikuVM/utility/haikuJava.c \
../../HaikuVM/utility/haikuJNI.c \
../../HaikuVM/utility/NativeCFunctions.cpp \

OBJS += \
./HaikuVM/utility/haikuConfig.o \
./HaikuVM/utility/haikuJava.o \
./HaikuVM/utility/haikuJNI.o \
./HaikuVM/utility/NativeCFunctions.o \

C_DEPS += \
./HaikuVM/utility/haikuConfig.d \
./HaikuVM/utility/haikuJava.d \
./HaikuVM/utility/haikuJNI.d \
./HaikuVM/utility/NativeCFunctions.d \

SUBDIRS += \
./HaikuVM/utility


# Each subdirectory must supply rules for building sources it contributes
./HaikuVM/utility/%.o:	../../HaikuVM/utility/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: C Compiler'
	$(HAIKU_CC)  $(HAIKU_CC_OPT)
	@echo 'Finished building: $<'
	@echo ' '

./HaikuVM/utility/%.o: ../../HaikuVM/utility/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: C++ Compiler'
	$(HAIKU_CXX)  $(HAIKU_CXX_OPT)
	@echo 'Finished building: $<'
	@echo ' '




# Add inputs and outputs from these tool invocations to the build variables
C_SRCS += \
../../HaikuVM/HaikuAppMain.c \
../../HaikuVM/haikuJ2C.c \
../../HaikuVM/haikuJavaNatives.c \
../../HaikuVM/halfprecision.c \
../../HaikuVM/heap.c \
../../HaikuVM/JVM.c \
../../HaikuVM/romspace.c \
../../HaikuVM/simpleOS.c \

OBJS += \
./HaikuVM/HaikuAppMain.o \
./HaikuVM/haikuJ2C.o \
./HaikuVM/haikuJavaNatives.o \
./HaikuVM/halfprecision.o \
./HaikuVM/heap.o \
./HaikuVM/JVM.o \
./HaikuVM/romspace.o \
./HaikuVM/simpleOS.o \

C_DEPS += \
./HaikuVM/HaikuAppMain.d \
./HaikuVM/haikuJ2C.d \
./HaikuVM/haikuJavaNatives.d \
./HaikuVM/halfprecision.d \
./HaikuVM/heap.d \
./HaikuVM/JVM.d \
./HaikuVM/romspace.d \
./HaikuVM/simpleOS.d \

SUBDIRS += \
./HaikuVM


# Each subdirectory must supply rules for building sources it contributes
./HaikuVM/%.o:	../../HaikuVM/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: C Compiler'
	$(HAIKU_CC)  $(HAIKU_CC_OPT)
	@echo 'Finished building: $<'
	@echo ' '

./HaikuVM/%.o: ../../HaikuVM/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: C++ Compiler'
	$(HAIKU_CXX)  $(HAIKU_CXX_OPT)
	@echo 'Finished building: $<'
	@echo ' '




# Add inputs and outputs from these tool invocations to the build variables
C_SRCS += \
../../tutorials/ArduinoUsingCLIB.cpp \
../../tutorials/interruptTimer2.c \
../../tutorials/JNIenhanced.c \
../../tutorials/JNINativeLIBC.cpp \
../../tutorials/JNIsimple.c \
../../tutorials/JNI_FieldAccess.c \
../../tutorials/NativeCVariableClass.cpp \
../../tutorials/NativeCVariableEnhanced.c \
../../tutorials/NativeCVariableSimple.c \
../../tutorials/ProcessingCLIB.cpp \

OBJS += \
./tutorials/ArduinoUsingCLIB.o \
./tutorials/interruptTimer2.o \
./tutorials/JNIenhanced.o \
./tutorials/JNINativeLIBC.o \
./tutorials/JNIsimple.o \
./tutorials/JNI_FieldAccess.o \
./tutorials/NativeCVariableClass.o \
./tutorials/NativeCVariableEnhanced.o \
./tutorials/NativeCVariableSimple.o \
./tutorials/ProcessingCLIB.o \

C_DEPS += \
./tutorials/ArduinoUsingCLIB.d \
./tutorials/interruptTimer2.d \
./tutorials/JNIenhanced.d \
./tutorials/JNINativeLIBC.d \
./tutorials/JNIsimple.d \
./tutorials/JNI_FieldAccess.d \
./tutorials/NativeCVariableClass.d \
./tutorials/NativeCVariableEnhanced.d \
./tutorials/NativeCVariableSimple.d \
./tutorials/ProcessingCLIB.d \

SUBDIRS += \
./tutorials


# Each subdirectory must supply rules for building sources it contributes
./tutorials/%.o:	../../tutorials/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: C Compiler'
	$(HAIKU_CC)  $(HAIKU_CC_OPT)
	@echo 'Finished building: $<'
	@echo ' '

./tutorials/%.o: ../../tutorials/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: C++ Compiler'
	$(HAIKU_CXX)  $(HAIKU_CXX_OPT)
	@echo 'Finished building: $<'
	@echo ' '
