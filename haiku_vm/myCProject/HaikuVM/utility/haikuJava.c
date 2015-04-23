//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\avr\lib\arduino\HaikuMicroKernelEx.c
//
/*
reason #1: root call with haiku.avr.lib.arduino.HaikuMicroKernelEx

public class haiku.avr.lib.arduino.HaikuMicroKernelEx extends haiku.vm.MicroKernel
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/haiku/avr/lib/arduino/HaikuMicroKernelEx.class
compiled from		HaikuMicroKernelEx.java
compiler version	51.0
access flags		33
constant pool		79 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(HaikuMicroKernelEx.java)
	InnerClass:static haiku.avr.lib.arduino.HaikuMicroKernelEx$2("<not a member>", "<anonymous>")
	InnerClass:static haiku.avr.lib.arduino.HaikuMicroKernelEx$1("<not a member>", "<anonymous>")

3 methods:
	public void <init>()
	public static void init()
	public static void main(String[] arg0)

*/


#include "haikuConfig.h"
#include "haikuJava.h"



/**
public static void init()
Code(max_stack = 4, max_locals = 0, code_length = 34)
*/
#undef  JMETHOD
#define JMETHOD haiku_avr_lib_arduino_HaikuMicroKernelEx_init_V
const           haiku_avr_lib_arduino_HaikuMicroKernelEx_init_V_t JMETHOD PROGMEM ={
0+(2)+4,    0,    0,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_NEW,              ADR(java_io_PrintStream__class),                  // 0:    new		<java.io.PrintStream> (2)
OP_DUP,                                                                // 3:    dup
OP_NEW,              ADR(haiku_avr_lib_arduino_HaikuMicroKernelEx_1__class), 
                                                                       // 4:    new		<haiku.avr.lib.arduino.HaikuMicroKernelEx$1> (3)
OP_DUP,                                                                // 7:    dup
OP_INVOKESHORT_haiku_avr_lib_arduino_HaikuMicroKernelEx_1__init__V,    // 8:    invokespecial	haiku.avr.lib.arduino.HaikuMicroKernelEx$1.<init> ()V (4)
OP_INVOKESHORT_java_io_PrintStream__init__Ljava_io_OutputStream_V,     // 11:   invokespecial	java.io.PrintStream.<init> (Ljava/io/OutputStream;)V (5)
OP_PUTSTATIC_L,      SADR(java_lang_System_out),                       // 14:   putstatic		java.lang.System.out Ljava/io/PrintStream; (6)
OP_GETSTATIC_L,      SADR(java_lang_System_out),                       // 17:   getstatic		java.lang.System.out Ljava/io/PrintStream; (6)
OP_PUTSTATIC_L,      SADR(java_lang_System_err),                       // 20:   putstatic		java.lang.System.err Ljava/io/PrintStream; (7)
OP_NEW,              ADR(haiku_avr_lib_arduino_HaikuMicroKernelEx_2__class), 
                                                                       // 23:   new		<haiku.avr.lib.arduino.HaikuMicroKernelEx$2> (8)
OP_DUP,                                                                // 26:   dup
OP_INVOKESHORT_haiku_avr_lib_arduino_HaikuMicroKernelEx_2__init__V,    // 27:   invokespecial	haiku.avr.lib.arduino.HaikuMicroKernelEx$2.<init> ()V (9)
OP_PUTSTATIC_L,      SADR(java_lang_System_in),                        // 30:   putstatic		java.lang.System.in Ljava/io/InputStream; (10)
OP_RETURN,                                                             // 33:   return
};

/**
public static void main(String[] arg0)
Code(max_stack = 2, max_locals = 2, code_length = 39)
*/
#undef  JMETHOD
#define JMETHOD main_YLjava_lang_String
const           main_YLjava_lang_String_t JMETHOD PROGMEM ={
2+(2)+2,    1,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_INVOKESHORT_haiku_avr_lib_arduino_ArduinoLib_init_V,                // 0:    invokestatic	haiku.avr.lib.arduino.ArduinoLib.init ()V (11)
OP_INVOKESHORT_haiku_vm_MicroKernel_clinitHaikuMagic_V,                // 3:    invokestatic	haiku.avr.lib.arduino.HaikuMicroKernelEx.clinitHaikuMagic ()V (12)
OP_INVOKESHORT_haiku_avr_lib_arduino_HaikuMicroKernelEx_init_V,        // 6:    invokestatic	haiku.avr.lib.arduino.HaikuMicroKernelEx.init ()V (13)
OP_ICONST_0,                                                           // 9:    iconst_0
OP_ICONST_0,                                                           // 10:   iconst_0
OP_ALOAD_0,                                                            // 14:   aload_0
OP_INVOKESHORT_ru_timreset_Test_main_YLjava_lang_String_V,             // 15:   invokestatic	haiku.vm.HaikuMagic.main ([Ljava/lang/String;)V (15)
OP_GOTO,             TARGET(32),                                       // 18:   goto		#32
OP_ASTORE_1,                                                           // 21:   astore_1
OP_GETSTATIC_L,      SADR(java_lang_System_out),                       // 22:   getstatic		java.lang.System.out Ljava/io/PrintStream; (6)
OP_ALOAD_1,                                                            // 25:   aload_1
OP_INVOKEVIRTUAL,    B(0), LB(MSG_toString___Ljava_lang_String),       // 26:   invokevirtual	java.lang.Throwable.toString ()Ljava/lang/String; (17)
OP_INVOKEVIRTUAL,    B(1), LB(MSG_println__Ljava_lang_String__V),      // 29:   invokevirtual	java.io.PrintStream.println (Ljava/lang/String;)V (18)
OP_INVOKESHORT_java_lang_Thread_currentThread_Ljava_lang_Thread,       // 32:   invokestatic	java.lang.Thread.currentThread ()Ljava/lang/Thread; (19)
OP_INVOKEVIRTUAL,    B(0), LB(MSG_stop___V),                           // 35:   invokevirtual	java.lang.Thread.stop ()V (20)
OP_RETURN,                                                             // 38:   return
};

const class_t haiku_avr_lib_arduino_HaikuMicroKernelEx__class PROGMEM = {
	& haiku_vm_MicroKernel__class,
	SIZEOF_haiku_avr_lib_arduino_HaikuMicroKernelEx,
	0,
    // {{}} VC 5
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\io\PrintStream.c
//
/*
reason #10: ru.timreset.Test: public static void main(String[] arg0); type bytecode getstatic

public class java.io.PrintStream extends java.lang.Object
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/java/io/PrintStream.class
compiled from		PrintStream.java
compiler version	51.0
access flags		33
constant pool		94 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(PrintStream.java)

1 fields:
	private java.io.OutputStream out

22 methods:
	public void <init>(String arg1)
	public void <init>(java.io.OutputStream arg1)
	private transient void jprintf(String arg1, Object[] arg2)
	public transient java.io.PrintStream printf(String arg1, Object[] arg2)
	public void print(String arg1)
	public void println(String arg1)
	public void print(Object arg1)
	public void println(Object arg1)
	public void println()
	public void flush()
	public void print(char arg1)
	public void println(char arg1)
	public void print(int arg1)
	public void println(int arg1)
	public void print(long arg1)
	public void println(long arg1)
	public void print(float arg1)
	public void println(float arg1)
	public void print(double arg1)
	public void println(double arg1)
	public void print(boolean arg1)
	public void println(boolean arg1)

*/



/**
public void <init>(java.io.OutputStream arg1)
Code(max_stack = 2, max_locals = 2, code_length = 10)
*/
#undef  JMETHOD
#define JMETHOD java_io_PrintStream__init__Ljava_io_OutputStream_V
const           java_io_PrintStream__init__Ljava_io_OutputStream_V_t JMETHOD PROGMEM ={
2+(2)+2,    0,    2,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_INVOKESHORT_java_lang_Object__init__V,                              // 1:    invokespecial	java.lang.Object.<init> ()V (1)
OP_ALOAD_0,                                                            // 4:    aload_0
OP_ALOAD_1,                                                            // 5:    aload_1
OP_PUTFIELD_L,       FIDX(java_io_PrintStream, out),                   // 6:    putfield		java.io.PrintStream.out Ljava/io/OutputStream; (2)
OP_RETURN,                                                             // 9:    return
};

/**
public void print(String arg1)
Code(max_stack = 3, max_locals = 3, code_length = 39)
*/
#undef  JMETHOD
#define JMETHOD java_io_PrintStream_print_Ljava_lang_String_V
const           java_io_PrintStream_print_Ljava_lang_String_V_t JMETHOD PROGMEM ={
3+(2)+3,    1,    2,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_1,                                                            // 0:    aload_1
OP_IFNONNULL,        TARGET(13),                                       // 1:    ifnonnull		#13
OP_ALOAD_0,                                                            // 4:    aload_0
OP_LDC_S,            CADR(Const0000),                                  // 5:    ldc		"null" (10)
OP_INVOKEVIRTUAL,    B(1), LB(MSG_print__Ljava_lang_String__V),        // 7:    invokevirtual	java.io.PrintStream.print (Ljava/lang/String;)V (7)
OP_GOTO,             TARGET(38),                                       // 10:   goto		#38
OP_ICONST_0,                                                           // 13:   iconst_0
OP_ISTORE_2,                                                           // 14:   istore_2
OP_ILOAD_2,                                                            // 15:   iload_2
OP_ALOAD_1,                                                            // 16:   aload_1
OP_INVOKEVIRTUAL,    B(0), LB(MSG_length___I),                         // 17:   invokevirtual	java.lang.String.length ()I (3)
OP_IF_ICMPGE,        TARGET(38),                                       // 20:   if_icmpge		#38
OP_ALOAD_0,                                                            // 23:   aload_0
OP_ALOAD_1,                                                            // 24:   aload_1
OP_ILOAD_2,                                                            // 25:   iload_2
OP_INVOKEVIRTUAL,    B(1), LB(MSG_charAt__I_C),                        // 26:   invokevirtual	java.lang.String.charAt (I)C (4)
OP_INVOKEVIRTUAL,    B(1), LB(MSG_print__C_V),                         // 29:   invokevirtual	java.io.PrintStream.print (C)V (5)
OP_IINC1, B(2),                                                        // 32:   iinc		%2	1
OP_GOTO,             TARGET(15),                                       // 35:   goto		#15
OP_RETURN,                                                             // 38:   return
};

/**
public void println(String arg1)
Code(max_stack = 2, max_locals = 2, code_length = 12)
*/
#undef  JMETHOD
#define JMETHOD java_io_PrintStream_println_Ljava_lang_String_V
const           java_io_PrintStream_println_Ljava_lang_String_V_t JMETHOD PROGMEM ={
2+(2)+2,    0,    2,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_ALOAD_1,                                                            // 1:    aload_1
OP_INVOKEVIRTUAL,    B(1), LB(MSG_print__Ljava_lang_String__V),        // 2:    invokevirtual	java.io.PrintStream.print (Ljava/lang/String;)V (7)
OP_ALOAD_0,                                                            // 5:    aload_0
OP_BIPUSH,           B(10),                                            // 6:    bipush		10
OP_INVOKEVIRTUAL,    B(1), LB(MSG_print__C_V),                         // 8:    invokevirtual	java.io.PrintStream.print (C)V (5)
OP_RETURN,                                                             // 11:   return
};

/**
public void print(char arg1)
Code(max_stack = 2, max_locals = 3, code_length = 28)
*/
#undef  JMETHOD
#define JMETHOD java_io_PrintStream_print_CV
const           java_io_PrintStream_print_CV_t JMETHOD PROGMEM ={
3+(2)+2,    1,    2,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ILOAD_1,                                                            // 0:    iload_1
OP_BIPUSH,           B(10),                                            // 1:    bipush		10
OP_IF_ICMPNE,        TARGET(15),                                       // 3:    if_icmpne		#15
OP_ALOAD_0,                                                            // 6:    aload_0
OP_GETFIELD_L,       FIDX(java_io_PrintStream, out),                   // 7:    getfield		java.io.PrintStream.out Ljava/io/OutputStream; (2)
OP_BIPUSH,           B(13),                                            // 10:   bipush		13
OP_INVOKEVIRTUAL,    B(1), LB(MSG_write__I_V),                         // 12:   invokevirtual	java.io.OutputStream.write (I)V (13)
OP_ALOAD_0,                                                            // 15:   aload_0
OP_GETFIELD_L,       FIDX(java_io_PrintStream, out),                   // 16:   getfield		java.io.PrintStream.out Ljava/io/OutputStream; (2)
OP_ILOAD_1,                                                            // 19:   iload_1
OP_INVOKEVIRTUAL,    B(1), LB(MSG_write__I_V),                         // 20:   invokevirtual	java.io.OutputStream.write (I)V (13)
OP_GOTO,             TARGET(27),                                       // 23:   goto		#27
OP_ASTORE_2,                                                           // 26:   astore_2
OP_RETURN,                                                             // 27:   return
};

const class_t java_io_PrintStream__class PROGMEM = {
	& java_lang_Object__class,
	SIZEOF_java_io_PrintStream,
	3,
    {
		{MSG_print__C_V, (ByteCode *)(&java_io_PrintStream_print_CV)},
		{MSG_print__Ljava_lang_String__V, (ByteCode *)(&java_io_PrintStream_print_Ljava_lang_String_V)},
		{MSG_println__Ljava_lang_String__V, (ByteCode *)(&java_io_PrintStream_println_Ljava_lang_String_V)},
	}
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\Yarrays\YC.c
//

const class_t YC__class PROGMEM = {
    & java_lang_Object__class,
    0,
    0,
    // {{}} VC 5
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\lang\String.c
//
/*
reason #13: root call

public class java.lang.String extends java.lang.Object
implements		java.lang.CharSequence, java.lang.Comparable
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/java/lang/String.class
compiled from		String.java
compiler version	51.0
access flags		33
constant pool		138 entries
ACC_SUPER flag		true

Attribute(s):
	Signature(Ljava/lang/Object;Ljava/lang/CharSequence;Ljava/lang/Comparable<Ljava/lang/String;>;)
	SourceFile(String.java)

1 fields:
	final char[] characters

31 methods:
	public void <init>()
	private void <init>(int arg1)
	public void <init>(char[] arg1)
	public void <init>(char arg1)
	public void <init>(String arg1)
	public void <init>(char[] arg1, int arg2, int arg3)
	public int length()
	public char charAt(int arg1)
	public static String valueOf(Object arg0)
	public static String valueOf(boolean arg0)
	public static String valueOf(char arg0)
	public static String valueOf(float arg0)
	public static String valueOf(double arg0)
	public String toString()
	public static String valueOf(long arg0)
	public static String valueOf(int arg0)
	static String valueOf(int arg0, int arg1)
	public boolean equals(Object arg1)
	public int hashCode()
	public int indexOf(int arg1)
	public int indexOf(int arg1, int arg2)
	public int indexOf(String arg1)
	public int indexOf(String arg1, int arg2)
	public String substring(int arg1, int arg2)
	public String substring(int arg1)
	static int lastIndexOf(char[] arg0, int arg1, int arg2, char[] arg3, int arg4, int arg5, int arg6)
	static int indexOf(char[] arg0, int arg1, int arg2, char[] arg3, int arg4, int arg5, int arg6)
	public CharSequence subSequence(int arg1, int arg2)
	public int compareTo(String arg1)
	public String trim()
	public volatile synthetic int compareTo(Object arg1)

*/



/**
public void <init>(char[] arg1)
Code(max_stack = 4, max_locals = 3, code_length = 36)
*/
#undef  JMETHOD
#define JMETHOD java_lang_String__init__YCV
const           java_lang_String__init__YCV_t JMETHOD PROGMEM ={
3+(2)+4,    1,    2,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_INVOKESHORT_java_lang_Object__init__V,                              // 1:    invokespecial	java.lang.Object.<init> ()V (1)
OP_ALOAD_0,                                                            // 4:    aload_0
OP_ALOAD_1,                                                            // 5:    aload_1
OP_ARRAYLENGTH,                                                        // 6:    arraylength
OP_NEWARRAY,         B(2),                                             // 7:    newarray		<char>
OP_PUTFIELD_L,       FIDX(java_lang_String, characters),               // 9:    putfield		java.lang.String.characters [C (2)
OP_ICONST_0,                                                           // 12:   iconst_0
OP_ISTORE_2,                                                           // 13:   istore_2
OP_ILOAD_2,                                                            // 14:   iload_2
OP_ALOAD_1,                                                            // 15:   aload_1
OP_ARRAYLENGTH,                                                        // 16:   arraylength
OP_IF_ICMPGE,        TARGET(35),                                       // 17:   if_icmpge		#35
OP_ALOAD_0,                                                            // 20:   aload_0
OP_GETFIELD_L,       FIDX(java_lang_String, characters),               // 21:   getfield		java.lang.String.characters [C (2)
OP_ILOAD_2,                                                            // 24:   iload_2
OP_ALOAD_1,                                                            // 25:   aload_1
OP_ILOAD_2,                                                            // 26:   iload_2
OP_CALOAD,                                                             // 27:   caload
OP_CASTORE,                                                            // 28:   castore
OP_IINC1, B(2),                                                        // 29:   iinc		%2	1
OP_GOTO,             TARGET(14),                                       // 32:   goto		#14
OP_RETURN,                                                             // 35:   return
};

/**
public void <init>(char arg1)
Code(max_stack = 5, max_locals = 2, code_length = 16)
*/
#undef  JMETHOD
#define JMETHOD java_lang_String__init__CV
const           java_lang_String__init__CV_t JMETHOD PROGMEM ={
2+(2)+5,    0,    2,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_INVOKESHORT_java_lang_Object__init__V,                              // 1:    invokespecial	java.lang.Object.<init> ()V (1)
OP_ALOAD_0,                                                            // 4:    aload_0
OP_ICONST_1,                                                           // 5:    iconst_1
OP_NEWARRAY,         B(2),                                             // 6:    newarray		<char>
OP_DUP,                                                                // 8:    dup
OP_ICONST_0,                                                           // 9:    iconst_0
OP_ILOAD_1,                                                            // 10:   iload_1
OP_CASTORE,                                                            // 11:   castore
OP_PUTFIELD_L,       FIDX(java_lang_String, characters),               // 12:   putfield		java.lang.String.characters [C (2)
OP_RETURN,                                                             // 15:   return
};

/**
public int length()
Code(max_stack = 1, max_locals = 1, code_length = 6)
*/
#undef  JMETHOD
#define JMETHOD java_lang_String_length_I
const           java_lang_String_length_I_t JMETHOD PROGMEM ={
1+(2)+1,    0,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_GETFIELD_L,       FIDX(java_lang_String, characters),               // 1:    getfield		java.lang.String.characters [C (2)
OP_ARRAYLENGTH,                                                        // 4:    arraylength
OP_IRETURN,                                                            // 5:    ireturn
};

/**
public char charAt(int arg1)
Code(max_stack = 2, max_locals = 2, code_length = 7)
*/
#undef  JMETHOD
#define JMETHOD java_lang_String_charAt_IC
const           java_lang_String_charAt_IC_t JMETHOD PROGMEM ={
2+(2)+2,    0,    2,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_GETFIELD_L,       FIDX(java_lang_String, characters),               // 1:    getfield		java.lang.String.characters [C (2)
OP_ILOAD_1,                                                            // 4:    iload_1
OP_CALOAD,                                                             // 5:    caload
OP_IRETURN,                                                            // 6:    ireturn
};

/**
public String toString()
Code(max_stack = 1, max_locals = 1, code_length = 2)
*/
#undef  JMETHOD
#define JMETHOD java_lang_String_toString_Ljava_lang_String
const           java_lang_String_toString_Ljava_lang_String_t JMETHOD PROGMEM ={
1+(2)+1,    0,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_ARETURN,                                                            // 1:    areturn
};

/**
public static String valueOf(int arg0)
Code(max_stack = 4, max_locals = 3, code_length = 73)
*/
#undef  JMETHOD
#define JMETHOD java_lang_String_valueOf_ILjava_lang_String
const           java_lang_String_valueOf_ILjava_lang_String_t JMETHOD PROGMEM ={
3+(2)+4,    2,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_LDC_S,            CADR(Const0001),                                  // 0:    ldc		"" (18)
OP_ASTORE_1,                                                           // 2:    astore_1
OP_ILOAD_0,                                                            // 3:    iload_0
OP_ISTORE_2,                                                           // 4:    istore_2
OP_ILOAD_0,                                                            // 5:    iload_0
OP_IFLE,             TARGET(12),                                       // 6:    ifle		#12
OP_ILOAD_0,                                                            // 9:    iload_0
OP_INEG,                                                               // 10:   ineg
OP_ISTORE_0,                                                           // 11:   istore_0
OP_NEW,              ADR(java_lang_StringBuilder__class),              // 12:   new		<java.lang.StringBuilder> (22)
OP_DUP,                                                                // 15:   dup
OP_INVOKESHORT_java_lang_StringBuilder__init__V,                       // 16:   invokespecial	java.lang.StringBuilder.<init> ()V (23)
OP_BIPUSH,           B(48),                                            // 19:   bipush		48
OP_ILOAD_0,                                                            // 21:   iload_0
OP_BIPUSH,           B(10),                                            // 22:   bipush		10
OP_IREM,                                                               // 24:   irem
OP_ISUB,                                                               // 25:   isub
OP_I2C,                                                                // 26:   i2c
OP_INVOKEVIRTUAL,    B(1), LB(MSG_append__C_Ljava_lang_StringBuilder), 
                                                                       // 27:   invokevirtual	java.lang.StringBuilder.append (C)Ljava/lang/StringBuilder; (30)
OP_ALOAD_1,                                                            // 30:   aload_1
OP_INVOKEVIRTUAL,    B(1), LB(MSG_append__Ljava_lang_String__Ljava_lang_StringBuilder), 
                                                                       // 31:   invokevirtual	java.lang.StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder; (24)
OP_INVOKEVIRTUAL,    B(0), LB(MSG_toString___Ljava_lang_String),       // 34:   invokevirtual	java.lang.StringBuilder.toString ()Ljava/lang/String; (26)
OP_ASTORE_1,                                                           // 37:   astore_1
OP_ILOAD_0,                                                            // 38:   iload_0
OP_BIPUSH,           B(10),                                            // 39:   bipush		10
OP_IDIV,                                                               // 41:   idiv
OP_ISTORE_0,                                                           // 42:   istore_0
OP_ILOAD_0,                                                            // 43:   iload_0
OP_IFNE,             TARGET(12),                                       // 44:   ifne		#12
OP_ILOAD_2,                                                            // 47:   iload_2
OP_IFGE,             TARGET(71),                                       // 48:   ifge		#71
OP_NEW,              ADR(java_lang_StringBuilder__class),              // 51:   new		<java.lang.StringBuilder> (22)
OP_DUP,                                                                // 54:   dup
OP_INVOKESHORT_java_lang_StringBuilder__init__V,                       // 55:   invokespecial	java.lang.StringBuilder.<init> ()V (23)
OP_LDC_S,            CADR(Const0002),                                  // 58:   ldc		"-" (19)
OP_INVOKEVIRTUAL,    B(1), LB(MSG_append__Ljava_lang_String__Ljava_lang_StringBuilder), 
                                                                       // 60:   invokevirtual	java.lang.StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder; (24)
OP_ALOAD_1,                                                            // 63:   aload_1
OP_INVOKEVIRTUAL,    B(1), LB(MSG_append__Ljava_lang_String__Ljava_lang_StringBuilder), 
                                                                       // 64:   invokevirtual	java.lang.StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder; (24)
OP_INVOKEVIRTUAL,    B(0), LB(MSG_toString___Ljava_lang_String),       // 67:   invokevirtual	java.lang.StringBuilder.toString ()Ljava/lang/String; (26)
OP_ARETURN,                                                            // 70:   areturn
OP_ALOAD_1,                                                            // 71:   aload_1
OP_ARETURN,                                                            // 72:   areturn
};

const class_t java_lang_String__class PROGMEM = {
	& java_lang_Object__class,
	SIZEOF_java_lang_String,
	3,
    {
		{MSG_charAt__I_C, (ByteCode *)(&java_lang_String_charAt_IC)},
		{MSG_length___I, (ByteCode *)(&java_lang_String_length_I)},
		{MSG_toString___Ljava_lang_String, (ByteCode *)(&java_lang_String_toString_Ljava_lang_String)},
	}
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\lang\StringBuilder.c
//
/*
reason #18: java.lang.Object: public String toString(); 1 bytecode invokespecial

public class java.lang.StringBuilder extends java.lang.Object
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/java/lang/StringBuilder.class
compiled from		StringBuilder.java
compiler version	51.0
access flags		33
constant pool		66 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(StringBuilder.java)

1 fields:
	private char[] chars

11 methods:
	public void <init>(String arg1)
	public void <init>()
	public String toString()
	public StringBuilder append(String arg1)
	public StringBuilder append(Object arg1)
	public StringBuilder append(char arg1)
	public StringBuilder append(int arg1)
	public StringBuilder append(long arg1)
	public StringBuilder append(float arg1)
	public StringBuilder append(double arg1)
	public StringBuilder append(boolean arg1)

*/



/**
public void <init>()
Code(max_stack = 2, max_locals = 1, code_length = 12)
*/
#undef  JMETHOD
#define JMETHOD java_lang_StringBuilder__init__V
const           java_lang_StringBuilder__init__V_t JMETHOD PROGMEM ={
1+(2)+2,    0,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_INVOKESHORT_java_lang_Object__init__V,                              // 1:    invokespecial	java.lang.Object.<init> ()V (3)
OP_ALOAD_0,                                                            // 4:    aload_0
OP_ICONST_0,                                                           // 5:    iconst_0
OP_NEWARRAY,         B(2),                                             // 6:    newarray		<char>
OP_PUTFIELD_L,       FIDX(java_lang_StringBuilder, chars),             // 8:    putfield		java.lang.StringBuilder.chars [C (4)
OP_RETURN,                                                             // 11:   return
};

/**
public String toString()
Code(max_stack = 3, max_locals = 1, code_length = 12)
*/
#undef  JMETHOD
#define JMETHOD java_lang_StringBuilder_toString_Ljava_lang_String
const           java_lang_StringBuilder_toString_Ljava_lang_String_t JMETHOD PROGMEM ={
1+(2)+3,    0,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_NEW,              ADR(java_lang_String__class),                     // 0:    new		<java.lang.String> (5)
OP_DUP,                                                                // 3:    dup
OP_ALOAD_0,                                                            // 4:    aload_0
OP_GETFIELD_L,       FIDX(java_lang_StringBuilder, chars),             // 5:    getfield		java.lang.StringBuilder.chars [C (4)
OP_INVOKESHORT_java_lang_String__init__YCV,                            // 8:    invokespecial	java.lang.String.<init> ([C)V (6)
OP_ARETURN,                                                            // 11:   areturn
};

/**
public StringBuilder append(String arg1)
Code(max_stack = 4, max_locals = 5, code_length = 69)
*/
#undef  JMETHOD
#define JMETHOD java_lang_StringBuilder_append_Ljava_lang_String_Ljava_lang_StringBuilder
const           java_lang_StringBuilder_append_Ljava_lang_String_Ljava_lang_StringBuilder_t JMETHOD PROGMEM ={
5+(2)+4,    3,    2,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_GETFIELD_L,       FIDX(java_lang_StringBuilder, chars),             // 1:    getfield		java.lang.StringBuilder.chars [C (4)
OP_ARRAYLENGTH,                                                        // 4:    arraylength
OP_ALOAD_1,                                                            // 5:    aload_1
OP_GETFIELD_L,       FIDX(java_lang_String, characters),               // 6:    getfield		java.lang.String.characters [C (7)
OP_ARRAYLENGTH,                                                        // 9:    arraylength
OP_IADD,                                                               // 10:   iadd
OP_NEWARRAY,         B(2),                                             // 11:   newarray		<char>
OP_ASTORE_2,                                                           // 13:   astore_2
OP_ICONST_0,                                                           // 14:   iconst_0
OP_ISTORE_3,                                                           // 15:   istore_3
OP_ICONST_0,                                                           // 16:   iconst_0
OP_ISTORE,           B(4),                                             // 17:   istore		%4
OP_ILOAD_3,                                                            // 19:   iload_3
OP_ALOAD_2,                                                            // 20:   aload_2
OP_ARRAYLENGTH,                                                        // 21:   arraylength
OP_IF_ICMPGE,        TARGET(62),                                       // 22:   if_icmpge		#62
OP_ALOAD_2,                                                            // 25:   aload_2
OP_ILOAD_3,                                                            // 26:   iload_3
OP_ILOAD_3,                                                            // 27:   iload_3
OP_ALOAD_0,                                                            // 28:   aload_0
OP_GETFIELD_L,       FIDX(java_lang_StringBuilder, chars),             // 29:   getfield		java.lang.StringBuilder.chars [C (4)
OP_ARRAYLENGTH,                                                        // 32:   arraylength
OP_IF_ICMPGE,        TARGET(45),                                       // 33:   if_icmpge		#45
OP_ALOAD_0,                                                            // 36:   aload_0
OP_GETFIELD_L,       FIDX(java_lang_StringBuilder, chars),             // 37:   getfield		java.lang.StringBuilder.chars [C (4)
OP_ILOAD_3,                                                            // 40:   iload_3
OP_CALOAD,                                                             // 41:   caload
OP_GOTO,             TARGET(55),                                       // 42:   goto		#55
OP_ALOAD_1,                                                            // 45:   aload_1
OP_GETFIELD_L,       FIDX(java_lang_String, characters),               // 46:   getfield		java.lang.String.characters [C (7)
OP_ILOAD,            B(4),                                             // 49:   iload		%4
OP_IINC1, B(4),                                                        // 51:   iinc		%4	1
OP_CALOAD,                                                             // 54:   caload
OP_CASTORE,                                                            // 55:   castore
OP_IINC1, B(3),                                                        // 56:   iinc		%3	1
OP_GOTO,             TARGET(19),                                       // 59:   goto		#19
OP_ALOAD_0,                                                            // 62:   aload_0
OP_ALOAD_2,                                                            // 63:   aload_2
OP_PUTFIELD_L,       FIDX(java_lang_StringBuilder, chars),             // 64:   putfield		java.lang.StringBuilder.chars [C (4)
OP_ALOAD_0,                                                            // 67:   aload_0
OP_ARETURN,                                                            // 68:   areturn
};

/**
public StringBuilder append(char arg1)
Code(max_stack = 4, max_locals = 2, code_length = 13)
*/
#undef  JMETHOD
#define JMETHOD java_lang_StringBuilder_append_CLjava_lang_StringBuilder
const           java_lang_StringBuilder_append_CLjava_lang_StringBuilder_t JMETHOD PROGMEM ={
2+(2)+4,    0,    2,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_NEW,              ADR(java_lang_String__class),                     // 1:    new		<java.lang.String> (5)
OP_DUP,                                                                // 4:    dup
OP_ILOAD_1,                                                            // 5:    iload_1
OP_INVOKESHORT_java_lang_String__init__CV,                             // 6:    invokespecial	java.lang.String.<init> (C)V (9)
OP_INVOKEVIRTUAL,    B(1), LB(MSG_append__Ljava_lang_String__Ljava_lang_StringBuilder), 
                                                                       // 9:    invokevirtual	java.lang.StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder; (2)
OP_ARETURN,                                                            // 12:   areturn
};

/**
public StringBuilder append(int arg1)
Code(max_stack = 2, max_locals = 2, code_length = 9)
*/
#undef  JMETHOD
#define JMETHOD java_lang_StringBuilder_append_ILjava_lang_StringBuilder
const           java_lang_StringBuilder_append_ILjava_lang_StringBuilder_t JMETHOD PROGMEM ={
2+(2)+2,    0,    2,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_ILOAD_1,                                                            // 1:    iload_1
OP_INVOKESHORT_java_lang_String_valueOf_ILjava_lang_String,            // 2:    invokestatic	java.lang.String.valueOf (I)Ljava/lang/String; (10)
OP_INVOKEVIRTUAL,    B(1), LB(MSG_append__Ljava_lang_String__Ljava_lang_StringBuilder), 
                                                                       // 5:    invokevirtual	java.lang.StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder; (2)
OP_ARETURN,                                                            // 8:    areturn
};

const class_t java_lang_StringBuilder__class PROGMEM = {
	& java_lang_Object__class,
	SIZEOF_java_lang_StringBuilder,
	4,
    {
		{MSG_append__C_Ljava_lang_StringBuilder, (ByteCode *)(&java_lang_StringBuilder_append_CLjava_lang_StringBuilder)},
		{MSG_append__I_Ljava_lang_StringBuilder, (ByteCode *)(&java_lang_StringBuilder_append_ILjava_lang_StringBuilder)},
		{MSG_append__Ljava_lang_String__Ljava_lang_StringBuilder, (ByteCode *)(&java_lang_StringBuilder_append_Ljava_lang_String_Ljava_lang_StringBuilder)},
		{MSG_toString___Ljava_lang_String, (ByteCode *)(&java_lang_StringBuilder_toString_Ljava_lang_String)},
	}
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\lang\Object.c
//
/*
reason #4: haiku.avr.AVRDefines: superclass closure

public class java.lang.Object extends java.lang.Object
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/java/lang/Object.class
compiled from		Object.java
compiler version	51.0
access flags		33
constant pool		78 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(Object.java)

12 methods:
	public void <init>()
	public String toString()
	public boolean equals(Object arg1)
	public final void wait(long arg1)
		throws java.lang.InterruptedException
	public final void wait(long arg1, int arg3)
		throws java.lang.InterruptedException
	public final void wait()
		throws java.lang.InterruptedException
	protected native Object clone()
		throws java.lang.CloneNotSupportedException
	protected void finalize()
	public int hashCode()
	public Class getClass() [Signature(()Ljava/lang/Class<*>;)]
	public void notifyAll()
	public void notify()

*/



/**
public void <init>()
Code(max_stack = 0, max_locals = 1, code_length = 1)
*/
#undef  JMETHOD
#define JMETHOD java_lang_Object__init__V
const           java_lang_Object__init__V_t JMETHOD PROGMEM ={
1+(2)+0,    0,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_RETURN,                                                             // 0:    return
};

/**
public String toString()
Code(max_stack = 2, max_locals = 2, code_length = 25)
*/
#undef  JMETHOD
#define JMETHOD java_lang_Object_toString_Ljava_lang_String
const           java_lang_Object_toString_Ljava_lang_String_t JMETHOD PROGMEM ={
2+(2)+2,    1,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_INVOKESHORT_java_lang_System_identityHashCode_Ljava_lang_Object_I,  // 1:    invokestatic	java.lang.System.identityHashCode (Ljava/lang/Object;)I (1)
OP_ISTORE_1,                                                           // 4:    istore_1
OP_NEW,              ADR(java_lang_StringBuilder__class),              // 5:    new		<java.lang.StringBuilder> (2)
OP_DUP,                                                                // 8:    dup
OP_INVOKESHORT_java_lang_StringBuilder__init__V,                       // 9:    invokespecial	java.lang.StringBuilder.<init> ()V (3)
OP_LDC_S,            CADR(Const0003),                                  // 12:   ldc		"Object@" (4)
OP_INVOKEVIRTUAL,    B(1), LB(MSG_append__Ljava_lang_String__Ljava_lang_StringBuilder), 
                                                                       // 14:   invokevirtual	java.lang.StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder; (5)
OP_ILOAD_1,                                                            // 17:   iload_1
OP_INVOKEVIRTUAL,    B(1), LB(MSG_append__I_Ljava_lang_StringBuilder), 
                                                                       // 18:   invokevirtual	java.lang.StringBuilder.append (I)Ljava/lang/StringBuilder; (6)
OP_INVOKEVIRTUAL,    B(0), LB(MSG_toString___Ljava_lang_String),       // 21:   invokevirtual	java.lang.StringBuilder.toString ()Ljava/lang/String; (7)
OP_ARETURN,                                                            // 24:   areturn
};

const class_t java_lang_Object__class PROGMEM = {
	NULL,
	SIZEOF_java_lang_Object,
	1,
    {
		{MSG_toString___Ljava_lang_String, (ByteCode *)(&java_lang_Object_toString_Ljava_lang_String)},
	}
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\lang\System.c
//
/*
reason #9: ru.timreset.Test: public static void main(String[] arg0); bytecode getstatic

public class java.lang.System extends java.lang.Object
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/java/lang/System.class
compiled from		System.java
compiler version	51.0
access flags		33
constant pool		41 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(System.java)

3 fields:
	public static java.io.PrintStream out
	public static java.io.PrintStream err
	public static java.io.InputStream in

10 methods:
	public void <init>()
	public static native long currentTimeMillis()
	public static String getProperty(String arg0)
	public static String getProperty(String arg0, String arg1)
	public static int identityHashCode(Object arg0)
	private static native int getDataAddress(Object arg0)
	public static native void gc()
	private static java.io.PrintStream nullPrintStream()
	public static native void arraycopy(Object arg0, int arg1, Object arg2, int arg3, int arg4)
	public static void loadLibrary(String arg0)

*/



/**
public static int identityHashCode(Object arg0)
Code(max_stack = 1, max_locals = 1, code_length = 5)
*/
#undef  JMETHOD
#define JMETHOD java_lang_System_identityHashCode_Ljava_lang_Object_I
const           java_lang_System_identityHashCode_Ljava_lang_Object_I_t JMETHOD PROGMEM ={
1+(2)+1,    0,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_INVOKESHORT_java_lang_System_getDataAddress_Ljava_lang_Object_I,    // 1:    invokestatic	java.lang.System.getDataAddress (Ljava/lang/Object;)I (2)
OP_IRETURN,                                                            // 4:    ireturn
};

/**
private static native int getDataAddress(Object arg0)
*/
#ifndef native_java_lang_System_getDataAddress_Ljava_lang_Object_I
const NativCode java_lang_System_getDataAddress_Ljava_lang_Object_I PROGMEM ={0xff, &native_java_lang_System_getDataAddress_Ljava_lang_Object_I};
#endif

const class_t java_lang_System__class PROGMEM = {
	& java_lang_Object__class,
	SIZEOF_java_lang_System,
	0,
    // {{}} VC 5
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\lang\Thread.c
//
/*
reason #12: haiku.avr.lib.arduino.HaikuMicroKernelEx: public static void main(String[] arg0); 1 bytecode invokestatic

public class java.lang.Thread extends java.lang.Object
implements		java.lang.Runnable
filename		Thread.java
compiled from		Thread.java
compiler version	51.0
access flags		33
constant pool		141 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(Thread.java)

19 fields:
	private static final int IDLE = 0
	private static final int YIELD = 2
	private static final int WAITING = 6
	private static final int STOPPED = 8
	public static final int MAX_PRIORITY = 10
	public static final int NORM_PRIORITY = 5
	public static final int MIN_PRIORITY = 1
	private static volatile Thread currentThread
	private volatile Runnable target
	private volatile Thread next
	private volatile int state
	private volatile Object programcounter
	private volatile Object stackpointer
	private volatile Object stackframe
	private volatile Object stack
	private volatile long waitUntil
	private volatile Object locks
	private volatile boolean interrupt
	private volatile Object waitingOn

30 methods:
	public static void foolingProGuard()
	public void <init>()
	public void <init>(Runnable arg1)
	public static void sleep(long arg0)
		throws java.lang.InterruptedException
	public static void nap(long arg0)
	public void start()
	private native int fork()
	public void run()
	public void run$()
	public final void stop()
	public static Thread currentThread()
	public static void yield()
	private native int setStateAndSwitch(int arg1)
	public void setDaemon(boolean arg1)
	public void setPriority(int arg1)
	public void <init>(String arg1)
	public void <init>(Runnable arg1, String arg2)
	public final int getPriority()
	public String getName()
	public void setName(String arg1)
	public void interrupt()
	public static boolean interrupted()
	public final boolean isInterrupted()
	public final boolean isDaemon()
	public final void join()
		throws java.lang.InterruptedException
	public final void join(long arg1)
		throws java.lang.InterruptedException
	static void notifyAll(Object arg0)
	static void notify(Object arg0)
	private static native void haikuReleaseLock(Object arg0)
	static void haikuWait(Object arg0, long arg1)
		throws java.lang.InterruptedException

*/



/**
public final void stop()
Code(max_stack = 2, max_locals = 2, code_length = 46)
*/
#undef  JMETHOD
#define JMETHOD java_lang_Thread_stop_V
const           java_lang_Thread_stop_V_t JMETHOD PROGMEM ={
2+(2)+2,    1,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_GETFIELD_I,       FIDX(java_lang_Thread, state),                    // 1:    getfield		java.lang.Thread.state I (21)
OP_BIPUSH,           B(8),                                             // 4:    bipush		8
OP_IF_ICMPEQ,        TARGET(45),                                       // 6:    if_icmpeq		#45
OP_ALOAD_0,                                                            // 9:    aload_0
OP_ASTORE_1,                                                           // 10:   astore_1
OP_ALOAD_1,                                                            // 11:   aload_1
OP_GETFIELD_L,       FIDX(java_lang_Thread, next),                     // 12:   getfield		java.lang.Thread.next Ljava/lang/Thread; (12)
OP_ALOAD_0,                                                            // 15:   aload_0
OP_IF_ACMPEQ,        TARGET(27),                                       // 16:   if_acmpeq		#27
OP_ALOAD_1,                                                            // 19:   aload_1
OP_GETFIELD_L,       FIDX(java_lang_Thread, next),                     // 20:   getfield		java.lang.Thread.next Ljava/lang/Thread; (12)
OP_ASTORE_1,                                                           // 23:   astore_1
OP_GOTO,             TARGET(11),                                       // 24:   goto		#11
OP_ALOAD_1,                                                            // 27:   aload_1
OP_ALOAD_1,                                                            // 28:   aload_1
OP_GETFIELD_L,       FIDX(java_lang_Thread, next),                     // 29:   getfield		java.lang.Thread.next Ljava/lang/Thread; (12)
OP_GETFIELD_L,       FIDX(java_lang_Thread, next),                     // 32:   getfield		java.lang.Thread.next Ljava/lang/Thread; (12)
OP_PUTFIELD_L,       FIDX(java_lang_Thread, next),                     // 35:   putfield		java.lang.Thread.next Ljava/lang/Thread; (12)
OP_ALOAD_0,                                                            // 38:   aload_0
OP_BIPUSH,           B(8),                                             // 39:   bipush		8
OP_INVOKESHORT_java_lang_Thread_setStateAndSwitch_II,                  // 41:   invokespecial	java.lang.Thread.setStateAndSwitch (I)I (8)
OP_POP,                                                                // 44:   pop
OP_RETURN,                                                             // 45:   return
};

/**
public static Thread currentThread()
Code(max_stack = 1, max_locals = 0, code_length = 4)
*/
#undef  JMETHOD
#define JMETHOD java_lang_Thread_currentThread_Ljava_lang_Thread
const           java_lang_Thread_currentThread_Ljava_lang_Thread_t JMETHOD PROGMEM ={
0+(2)+1,    0,    0,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_GETSTATIC_L,      SADR(java_lang_Thread_currentThread),             // 0:    getstatic		java.lang.Thread.currentThread Ljava/lang/Thread; (3)
OP_ARETURN,                                                            // 3:    areturn
};

/**
private native int setStateAndSwitch(int arg1)
*/
#ifndef native_java_lang_Thread_setStateAndSwitch_II
const NativCode java_lang_Thread_setStateAndSwitch_II PROGMEM ={0xff, &native_java_lang_Thread_setStateAndSwitch_II};
#endif

const class_t java_lang_Thread__class PROGMEM = {
	& java_lang_Object__class,
	SIZEOF_java_lang_Thread,
	1,
    {
		{MSG_stop___V, (ByteCode *)(&java_lang_Thread_stop_V)},
	}
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\lang\Throwable.c
//
/*
reason #11: haiku.avr.lib.arduino.HaikuMicroKernelEx: public static void main(String[] arg0); bytecode invokevirtual

public class java.lang.Throwable extends java.lang.Object
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/java/lang/Throwable.class
compiled from		Throwable.java
compiler version	51.0
access flags		33
constant pool		53 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(Throwable.java)

3 fields:
	private int[] _stackTrace
	private String _message
	Throwable _cause

10 methods:
	public void <init>()
	public void <init>(String arg1)
	public void <init>(String arg1, Throwable arg2)
	public void <init>(Throwable arg1)
	public Throwable initCause(Throwable arg1)
	public Throwable getCause()
	public String getLocalizedMessage()
	public String getMessage()
	public String toString()
	public Throwable fillInStackTrace()

*/



/**
public String toString()
Code(max_stack = 1, max_locals = 1, code_length = 5)
*/
#undef  JMETHOD
#define JMETHOD java_lang_Throwable_toString_Ljava_lang_String
const           java_lang_Throwable_toString_Ljava_lang_String_t JMETHOD PROGMEM ={
1+(2)+1,    0,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_GETFIELD_L,       FIDX(java_lang_Throwable, _message),              // 1:    getfield		java.lang.Throwable._message Ljava/lang/String; (3)
OP_ARETURN,                                                            // 4:    areturn
};

const class_t java_lang_Throwable__class PROGMEM = {
	& java_lang_Object__class,
	SIZEOF_java_lang_Throwable,
	1,
    {
		{MSG_toString___Ljava_lang_String, (ByteCode *)(&java_lang_Throwable_toString_Ljava_lang_String)},
	}
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\io\IOException.c
//
/*
reason #19: java.io.PrintStream: exception closure

public class java.io.IOException extends java.lang.Exception
filename		java/io/IOException.class
compiled from		IOException.java
compiler version	49.0
access flags		33
constant pool		21 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(IOException.java)

2 methods:
	public void <init>()
	public void <init>(String s)

*/



const class_t java_io_IOException__class PROGMEM = {
	& java_lang_Exception__class,
	SIZEOF_java_io_IOException,
	0,
    // {{}} VC 5
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\lang\Exception.c
//
/*
reason #20: java.io.IOException: superclass closure

public class java.lang.Exception extends java.lang.Throwable
filename		java/lang/Exception.class
compiled from		Exception.java
compiler version	49.0
access flags		33
constant pool		29 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(Exception.java)

4 methods:
	public void <init>()
	public void <init>(String message)
	public void <init>(String message, Throwable cause)
	public void <init>(Throwable cause)

*/



const class_t java_lang_Exception__class PROGMEM = {
	& java_lang_Throwable__class,
	SIZEOF_java_lang_Exception,
	0,
    // {{}} VC 5
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\io\OutputStream.c
//
/*
reason #15: haiku.avr.lib.arduino.HaikuMicroKernelEx$1: void <init>(); 1 bytecode invokespecial

public abstract class java.io.OutputStream extends java.lang.Object
implements		java.io.Flushable, java.io.Closeable
filename		java/io/OutputStream.class
compiled from		OutputStream.java
compiler version	49.0
access flags		1057
constant pool		45 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(OutputStream.java)

6 methods:
	public void <init>()
	public abstract void write(int arg1)
		throws java.io.IOException
	public void write(byte[] b)
		throws java.io.IOException
	public void write(byte[] b, int off, int len)
		throws java.io.IOException
	public void flush()
		throws java.io.IOException
	public void close()
		throws java.io.IOException

*/



/**
public void <init>()
Code(max_stack = 1, max_locals = 1, code_length = 5)
*/
#undef  JMETHOD
#define JMETHOD java_io_OutputStream__init__V
const           java_io_OutputStream__init__V_t JMETHOD PROGMEM ={
1+(2)+1,    0,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_INVOKESHORT_java_lang_Object__init__V,                              // 1:    invokespecial	java.lang.Object.<init> ()V (1)
OP_RETURN,                                                             // 4:    return
};

const class_t java_io_OutputStream__class PROGMEM = {
	& java_lang_Object__class,
	SIZEOF_java_io_OutputStream,
	0,
    // {{}} VC 5
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\avr\lib\arduino\HaikuMicroKernelEx_1.c
//
/*
reason #14: haiku.avr.lib.arduino.HaikuMicroKernelEx: public static void init(); 1 bytecode invokespecial

final class haiku.avr.lib.arduino.HaikuMicroKernelEx$1 extends java.io.OutputStream
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/haiku/avr/lib/arduino/HaikuMicroKernelEx$1.class
compiled from		HaikuMicroKernelEx.java
compiler version	51.0
access flags		48
constant pool		35 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(HaikuMicroKernelEx.java)
	(Unknown attribute EnclosingMethod: 00 12 00 13)
	InnerClass:static haiku.avr.lib.arduino.HaikuMicroKernelEx$1("<not a member>", "<anonymous>")

2 methods:
	void <init>()
	public void write(int arg1)
		throws java.io.IOException

*/



/**
void <init>()
Code(max_stack = 1, max_locals = 1, code_length = 5)
*/
#undef  JMETHOD
#define JMETHOD haiku_avr_lib_arduino_HaikuMicroKernelEx_1__init__V
const           haiku_avr_lib_arduino_HaikuMicroKernelEx_1__init__V_t JMETHOD PROGMEM ={
1+(2)+1,    0,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_INVOKESHORT_java_io_OutputStream__init__V,                          // 1:    invokespecial	java.io.OutputStream.<init> ()V (1)
OP_RETURN,                                                             // 4:    return
};

/**
public void write(int arg1)
		throws java.io.IOException
Code(max_stack = 2, max_locals = 2, code_length = 17)
*/
#undef  JMETHOD
#define JMETHOD haiku_avr_lib_arduino_HaikuMicroKernelEx_1_write_IV
const           haiku_avr_lib_arduino_HaikuMicroKernelEx_1_write_IV_t JMETHOD PROGMEM ={
2+(2)+2,    0,    2,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_GETSTATIC_NativeCVariable8,  NADR(UCSR0A),                          // 0:    getstatic		haiku.avr.ATmega328p.UCSR0A I (2)
OP_BIPUSH,           B(32),                                            // 3:    bipush		32
OP_IAND,                                                               // 5:    iand
OP_IFNE,             TARGET(12),                                       // 6:    ifne		#12
OP_GOTO,             TARGET(0),                                        // 9:    goto		#0
OP_ILOAD_1,                                                            // 12:   iload_1
OP_PUTSTATIC_NativeCVariable8,  NADR(UDR0),                            // 13:   putstatic		haiku.avr.ATmega328p.UDR0 I (3)
OP_RETURN,                                                             // 16:   return
};

const class_t haiku_avr_lib_arduino_HaikuMicroKernelEx_1__class PROGMEM = {
	& java_io_OutputStream__class,
	SIZEOF_haiku_avr_lib_arduino_HaikuMicroKernelEx_1,
	1,
    {
		{MSG_write__I_V, (ByteCode *)(&haiku_avr_lib_arduino_HaikuMicroKernelEx_1_write_IV)},
	}
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\avr\ATmega328p.c
//
/*
reason #5: haiku.avr.lib.arduino.ArduinoLib: public static void init(); bytecode getstatic

public class haiku.avr.ATmega328p extends haiku.avr.AVRConstants
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/haiku/avr/ATmega328p.class
compiled from		ATmega328p.java
compiler version	51.0
access flags		33
constant pool		70 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(ATmega328p.java)

42 fields:
	public static final boolean __AVR_ATmega328P__ = 1
	public static final int BAUD_RATE = 57600
	public static final long F_CPU = 16000000
	public static final int TXB80 = 0
	public static final int RXB80 = 1
	public static final int UCSZ02 = 2
	public static final int TXEN0 = 3
	public static final int RXEN0 = 4
	public static final int UDRIE0 = 5
	public static final int TXCIE0 = 6
	public static final int RXCIE0 = 7
	public static final int WGM01 = 1
	public static final int WGM00 = 0
	public static final int CS01 = 1
	public static final int CS00 = 0
	public static final int TOIE0 = 0
	public static final int CS10 = 0
	public static final int CS22 = 2
	public static final int ADPS0 = 0
	public static final int REFS0 = 6
	public static final int ADSC = 6
	public static final int ADIF = 4
	public static final int UDRE0 = 5
	public static final int RXC0 = 7
	public static final int COM1A0 = 6
	public static final int COM1A1 = 7
	public static final int COM1B0 = 4
	public static final int COM1B1 = 5
	public static final int CS11 = 1
	public static final int OCIE1A = 1
	public static final int OCIE1B = 2
	public static final int TOIE1 = 0
	public static final int WGM11 = 1
	public static final int WGM12 = 3
	public static final int WGM13 = 4
	public static final int TWINT = 7
	public static final int TWEN = 2
	public static final int TWSTA = 5
	public static final int TWEA = 6
	public static final int TWSTO = 4
	public static final int PORTC4 = 4
	public static final int PORTC5 = 5

1 methods:
	public void <init>()

*/



const class_t haiku_avr_ATmega328p__class PROGMEM = {
	& haiku_avr_AVRConstants__class,
	SIZEOF_haiku_avr_ATmega328p,
	0,
    // {{}} VC 5
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\avr\AVRConstants.c
//
/*
reason #6: haiku.avr.ATmega328p: superclass closure

public class haiku.avr.AVRConstants extends java.lang.Object
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/haiku/avr/AVRConstants.class
compiled from		AVRConstants.java
compiler version	51.0
access flags		33
constant pool		1345 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(AVRConstants.java)

1305 fields:
	public static final boolean __AVR_ATmega8__ = 0
	public static final boolean __AVR_ATmega168__ = 0
	public static final boolean __AVR_ATmega1280__ = 0
	public static final boolean __AVR_ATmega328P__ = 0
	public static final boolean __AVR_ATmega32U4__ = 0
	public static volatile int SREG [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int _AVR_IOM328P_H_ = 1
	public static volatile int PINB [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PINB0 = 0
	public static final int PINB1 = 1
	public static final int PINB2 = 2
	public static final int PINB3 = 3
	public static final int PINB4 = 4
	public static final int PINB5 = 5
	public static final int PINB6 = 6
	public static final int PINB7 = 7
	public static volatile int DDRB [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int DDB0 = 0
	public static final int DDB1 = 1
	public static final int DDB2 = 2
	public static final int DDB3 = 3
	public static final int DDB4 = 4
	public static final int DDB5 = 5
	public static final int DDB6 = 6
	public static final int DDB7 = 7
	public static volatile int PORTB [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PORTB0 = 0
	public static final int PORTB1 = 1
	public static final int PORTB2 = 2
	public static final int PORTB3 = 3
	public static final int PORTB4 = 4
	public static final int PORTB5 = 5
	public static final int PORTB6 = 6
	public static final int PORTB7 = 7
	public static volatile int PINC [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PINC0 = 0
	public static final int PINC1 = 1
	public static final int PINC2 = 2
	public static final int PINC3 = 3
	public static final int PINC4 = 4
	public static final int PINC5 = 5
	public static final int PINC6 = 6
	public static volatile int DDRC [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int DDC0 = 0
	public static final int DDC1 = 1
	public static final int DDC2 = 2
	public static final int DDC3 = 3
	public static final int DDC4 = 4
	public static final int DDC5 = 5
	public static final int DDC6 = 6
	public static volatile int PORTC [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PORTC0 = 0
	public static final int PORTC1 = 1
	public static final int PORTC2 = 2
	public static final int PORTC3 = 3
	public static final int PORTC4 = 4
	public static final int PORTC5 = 5
	public static final int PORTC6 = 6
	public static volatile int PIND [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PIND0 = 0
	public static final int PIND1 = 1
	public static final int PIND2 = 2
	public static final int PIND3 = 3
	public static final int PIND4 = 4
	public static final int PIND5 = 5
	public static final int PIND6 = 6
	public static final int PIND7 = 7
	public static volatile int DDRD [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int DDD0 = 0
	public static final int DDD1 = 1
	public static final int DDD2 = 2
	public static final int DDD3 = 3
	public static final int DDD4 = 4
	public static final int DDD5 = 5
	public static final int DDD6 = 6
	public static final int DDD7 = 7
	public static volatile int PORTD [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PORTD0 = 0
	public static final int PORTD1 = 1
	public static final int PORTD2 = 2
	public static final int PORTD3 = 3
	public static final int PORTD4 = 4
	public static final int PORTD5 = 5
	public static final int PORTD6 = 6
	public static final int PORTD7 = 7
	public static volatile int TIFR0 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TOV0 = 0
	public static final int OCF0A = 1
	public static final int OCF0B = 2
	public static volatile int TIFR1 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TOV1 = 0
	public static final int OCF1A = 1
	public static final int OCF1B = 2
	public static final int ICF1 = 5
	public static volatile int TIFR2 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TOV2 = 0
	public static final int OCF2A = 1
	public static final int OCF2B = 2
	public static volatile int PCIFR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PCIF0 = 0
	public static final int PCIF1 = 1
	public static final int PCIF2 = 2
	public static volatile int EIFR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int INTF0 = 0
	public static final int INTF1 = 1
	public static volatile int EIMSK [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int INT0 = 0
	public static final int INT1 = 1
	public static volatile int GPIOR0 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int GPIOR00 = 0
	public static final int GPIOR01 = 1
	public static final int GPIOR02 = 2
	public static final int GPIOR03 = 3
	public static final int GPIOR04 = 4
	public static final int GPIOR05 = 5
	public static final int GPIOR06 = 6
	public static final int GPIOR07 = 7
	public static volatile int EECR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int EERE = 0
	public static final int EEPE = 1
	public static final int EEMPE = 2
	public static final int EERIE = 3
	public static final int EEPM0 = 4
	public static final int EEPM1 = 5
	public static volatile int EEDR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int EEDR0 = 0
	public static final int EEDR1 = 1
	public static final int EEDR2 = 2
	public static final int EEDR3 = 3
	public static final int EEDR4 = 4
	public static final int EEDR5 = 5
	public static final int EEDR6 = 6
	public static final int EEDR7 = 7
	public static volatile int EEAR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int EEARL [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int EEAR0 = 0
	public static final int EEAR1 = 1
	public static final int EEAR2 = 2
	public static final int EEAR3 = 3
	public static final int EEAR4 = 4
	public static final int EEAR5 = 5
	public static final int EEAR6 = 6
	public static final int EEAR7 = 7
	public static volatile int EEARH [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int EEAR8 = 0
	public static final int EEAR9 = 1
	public static volatile int GTCCR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PSRSYNC = 0
	public static final int PSRASY = 1
	public static final int TSM = 7
	public static volatile transient int TCCR0A [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int WGM00 = 0
	public static final int WGM01 = 1
	public static final int COM0B0 = 4
	public static final int COM0B1 = 5
	public static final int COM0A0 = 6
	public static final int COM0A1 = 7
	public static volatile int TCCR0B [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int CS00 = 0
	public static final int CS01 = 1
	public static final int CS02 = 2
	public static final int WGM02 = 3
	public static final int FOC0B = 6
	public static final int FOC0A = 7
	public static volatile int TCNT0 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TCNT0_0 = 0
	public static final int TCNT0_1 = 1
	public static final int TCNT0_2 = 2
	public static final int TCNT0_3 = 3
	public static final int TCNT0_4 = 4
	public static final int TCNT0_5 = 5
	public static final int TCNT0_6 = 6
	public static final int TCNT0_7 = 7
	public static volatile int OCR0A [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR0A_0 = 0
	public static final int OCR0A_1 = 1
	public static final int OCR0A_2 = 2
	public static final int OCR0A_3 = 3
	public static final int OCR0A_4 = 4
	public static final int OCR0A_5 = 5
	public static final int OCR0A_6 = 6
	public static final int OCR0A_7 = 7
	public static volatile int OCR0B [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR0B_0 = 0
	public static final int OCR0B_1 = 1
	public static final int OCR0B_2 = 2
	public static final int OCR0B_3 = 3
	public static final int OCR0B_4 = 4
	public static final int OCR0B_5 = 5
	public static final int OCR0B_6 = 6
	public static final int OCR0B_7 = 7
	public static volatile int GPIOR1 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int GPIOR10 = 0
	public static final int GPIOR11 = 1
	public static final int GPIOR12 = 2
	public static final int GPIOR13 = 3
	public static final int GPIOR14 = 4
	public static final int GPIOR15 = 5
	public static final int GPIOR16 = 6
	public static final int GPIOR17 = 7
	public static volatile int GPIOR2 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int GPIOR20 = 0
	public static final int GPIOR21 = 1
	public static final int GPIOR22 = 2
	public static final int GPIOR23 = 3
	public static final int GPIOR24 = 4
	public static final int GPIOR25 = 5
	public static final int GPIOR26 = 6
	public static final int GPIOR27 = 7
	public static volatile int SPCR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int SPR0 = 0
	public static final int SPR1 = 1
	public static final int CPHA = 2
	public static final int CPOL = 3
	public static final int MSTR = 4
	public static final int DORD = 5
	public static final int SPE = 6
	public static final int SPIE = 7
	public static volatile int SPSR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int SPI2X = 0
	public static final int WCOL = 6
	public static final int SPIF = 7
	public static volatile int SPDR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int SPDR0 = 0
	public static final int SPDR1 = 1
	public static final int SPDR2 = 2
	public static final int SPDR3 = 3
	public static final int SPDR4 = 4
	public static final int SPDR5 = 5
	public static final int SPDR6 = 6
	public static final int SPDR7 = 7
	public static volatile int ACSR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int ACIS0 = 0
	public static final int ACIS1 = 1
	public static final int ACIC = 2
	public static final int ACIE = 3
	public static final int ACI = 4
	public static final int ACO = 5
	public static final int ACBG = 6
	public static final int ACD = 7
	public static volatile int SMCR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int SE = 0
	public static final int SM0 = 1
	public static final int SM1 = 2
	public static final int SM2 = 3
	public static volatile int MCUSR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PORF = 0
	public static final int EXTRF = 1
	public static final int BORF = 2
	public static final int WDRF = 3
	public static volatile int MCUCR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int IVCE = 0
	public static final int IVSEL = 1
	public static final int PUD = 4
	public static final int BODSE = 5
	public static final int BODS = 6
	public static volatile int SPMCSR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int SELFPRGEN = 0
	public static final int PGERS = 1
	public static final int PGWRT = 2
	public static final int BLBSET = 3
	public static final int RWWSRE = 4
	public static final int RWWSB = 6
	public static final int SPMIE = 7
	public static volatile int WDTCSR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int WDP0 = 0
	public static final int WDP1 = 1
	public static final int WDP2 = 2
	public static final int WDE = 3
	public static final int WDCE = 4
	public static final int WDP3 = 5
	public static final int WDIE = 6
	public static final int WDIF = 7
	public static volatile int CLKPR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int CLKPS0 = 0
	public static final int CLKPS1 = 1
	public static final int CLKPS2 = 2
	public static final int CLKPS3 = 3
	public static final int CLKPCE = 7
	public static volatile int PRR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PRADC = 0
	public static final int PRUSART0 = 1
	public static final int PRSPI = 2
	public static final int PRTIM1 = 3
	public static final int PRTIM0 = 5
	public static final int PRTIM2 = 6
	public static final int PRTWI = 7
	public static volatile int OSCCAL [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int CAL0 = 0
	public static final int CAL1 = 1
	public static final int CAL2 = 2
	public static final int CAL3 = 3
	public static final int CAL4 = 4
	public static final int CAL5 = 5
	public static final int CAL6 = 6
	public static final int CAL7 = 7
	public static volatile int PCICR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PCIE0 = 0
	public static final int PCIE1 = 1
	public static final int PCIE2 = 2
	public static volatile int EICRA [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int ISC00 = 0
	public static final int ISC01 = 1
	public static final int ISC10 = 2
	public static final int ISC11 = 3
	public static volatile int PCMSK0 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PCINT0 = 0
	public static final int PCINT1 = 1
	public static final int PCINT2 = 2
	public static final int PCINT3 = 3
	public static final int PCINT4 = 4
	public static final int PCINT5 = 5
	public static final int PCINT6 = 6
	public static final int PCINT7 = 7
	public static volatile int PCMSK1 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PCINT8 = 0
	public static final int PCINT9 = 1
	public static final int PCINT10 = 2
	public static final int PCINT11 = 3
	public static final int PCINT12 = 4
	public static final int PCINT13 = 5
	public static final int PCINT14 = 6
	public static volatile int PCMSK2 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PCINT16 = 0
	public static final int PCINT17 = 1
	public static final int PCINT18 = 2
	public static final int PCINT19 = 3
	public static final int PCINT20 = 4
	public static final int PCINT21 = 5
	public static final int PCINT22 = 6
	public static final int PCINT23 = 7
	public static volatile int TIMSK0 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TOIE0 = 0
	public static final int OCIE0A = 1
	public static final int OCIE0B = 2
	public static volatile int TIMSK1 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TOIE1 = 0
	public static final int OCIE1A = 1
	public static final int OCIE1B = 2
	public static final int ICIE1 = 5
	public static volatile int TIMSK2 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TOIE2 = 0
	public static final int OCIE2A = 1
	public static final int OCIE2B = 2
	public static volatile int ADC [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int ADCW [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int ADCL [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int ADCL0 = 0
	public static final int ADCL1 = 1
	public static final int ADCL2 = 2
	public static final int ADCL3 = 3
	public static final int ADCL4 = 4
	public static final int ADCL5 = 5
	public static final int ADCL6 = 6
	public static final int ADCL7 = 7
	public static volatile int ADCH [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int ADCH0 = 0
	public static final int ADCH1 = 1
	public static final int ADCH2 = 2
	public static final int ADCH3 = 3
	public static final int ADCH4 = 4
	public static final int ADCH5 = 5
	public static final int ADCH6 = 6
	public static final int ADCH7 = 7
	public static volatile int ADCSRA [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int ADPS0 = 0
	public static final int ADPS1 = 1
	public static final int ADPS2 = 2
	public static final int ADIE = 3
	public static final int ADIF = 4
	public static final int ADATE = 5
	public static final int ADSC = 6
	public static final int ADEN = 7
	public static volatile int ADCSRB [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int ADTS0 = 0
	public static final int ADTS1 = 1
	public static final int ADTS2 = 2
	public static final int ACME = 6
	public static volatile int ADMUX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int MUX0 = 0
	public static final int MUX1 = 1
	public static final int MUX2 = 2
	public static final int MUX3 = 3
	public static final int ADLAR = 5
	public static final int REFS0 = 6
	public static final int REFS1 = 7
	public static volatile int DIDR0 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int ADC0D = 0
	public static final int ADC1D = 1
	public static final int ADC2D = 2
	public static final int ADC3D = 3
	public static final int ADC4D = 4
	public static final int ADC5D = 5
	public static volatile int DIDR1 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int AIN0D = 0
	public static final int AIN1D = 1
	public static volatile int TCCR1A [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int WGM10 = 0
	public static final int WGM11 = 1
	public static final int COM1B0 = 4
	public static final int COM1B1 = 5
	public static final int COM1A0 = 6
	public static final int COM1A1 = 7
	public static volatile int TCCR1B [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int CS10 = 0
	public static final int CS11 = 1
	public static final int CS12 = 2
	public static final int WGM12 = 3
	public static final int WGM13 = 4
	public static final int ICES1 = 6
	public static final int ICNC1 = 7
	public static volatile int TCCR1C [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int FOC1B = 6
	public static final int FOC1A = 7
	public static volatile int TCNT1 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int TCNT1L [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TCNT1L0 = 0
	public static final int TCNT1L1 = 1
	public static final int TCNT1L2 = 2
	public static final int TCNT1L3 = 3
	public static final int TCNT1L4 = 4
	public static final int TCNT1L5 = 5
	public static final int TCNT1L6 = 6
	public static final int TCNT1L7 = 7
	public static volatile int TCNT1H [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TCNT1H0 = 0
	public static final int TCNT1H1 = 1
	public static final int TCNT1H2 = 2
	public static final int TCNT1H3 = 3
	public static final int TCNT1H4 = 4
	public static final int TCNT1H5 = 5
	public static final int TCNT1H6 = 6
	public static final int TCNT1H7 = 7
	public static volatile int ICR1 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int ICR1L [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int ICR1L0 = 0
	public static final int ICR1L1 = 1
	public static final int ICR1L2 = 2
	public static final int ICR1L3 = 3
	public static final int ICR1L4 = 4
	public static final int ICR1L5 = 5
	public static final int ICR1L6 = 6
	public static final int ICR1L7 = 7
	public static volatile int ICR1H [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int ICR1H0 = 0
	public static final int ICR1H1 = 1
	public static final int ICR1H2 = 2
	public static final int ICR1H3 = 3
	public static final int ICR1H4 = 4
	public static final int ICR1H5 = 5
	public static final int ICR1H6 = 6
	public static final int ICR1H7 = 7
	public static volatile int OCR1A [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int OCR1AL [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR1AL0 = 0
	public static final int OCR1AL1 = 1
	public static final int OCR1AL2 = 2
	public static final int OCR1AL3 = 3
	public static final int OCR1AL4 = 4
	public static final int OCR1AL5 = 5
	public static final int OCR1AL6 = 6
	public static final int OCR1AL7 = 7
	public static volatile int OCR1AH [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR1AH0 = 0
	public static final int OCR1AH1 = 1
	public static final int OCR1AH2 = 2
	public static final int OCR1AH3 = 3
	public static final int OCR1AH4 = 4
	public static final int OCR1AH5 = 5
	public static final int OCR1AH6 = 6
	public static final int OCR1AH7 = 7
	public static volatile int OCR1B [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int OCR1BL [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR1BL0 = 0
	public static final int OCR1BL1 = 1
	public static final int OCR1BL2 = 2
	public static final int OCR1BL3 = 3
	public static final int OCR1BL4 = 4
	public static final int OCR1BL5 = 5
	public static final int OCR1BL6 = 6
	public static final int OCR1BL7 = 7
	public static volatile int OCR1BH [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR1BH0 = 0
	public static final int OCR1BH1 = 1
	public static final int OCR1BH2 = 2
	public static final int OCR1BH3 = 3
	public static final int OCR1BH4 = 4
	public static final int OCR1BH5 = 5
	public static final int OCR1BH6 = 6
	public static final int OCR1BH7 = 7
	public static volatile int TCCR2A [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int WGM20 = 0
	public static final int WGM21 = 1
	public static final int COM2B0 = 4
	public static final int COM2B1 = 5
	public static final int COM2A0 = 6
	public static final int COM2A1 = 7
	public static volatile int TCCR2B [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int CS20 = 0
	public static final int CS21 = 1
	public static final int CS22 = 2
	public static final int WGM22 = 3
	public static final int FOC2B = 6
	public static final int FOC2A = 7
	public static volatile int TCNT2 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TCNT2_0 = 0
	public static final int TCNT2_1 = 1
	public static final int TCNT2_2 = 2
	public static final int TCNT2_3 = 3
	public static final int TCNT2_4 = 4
	public static final int TCNT2_5 = 5
	public static final int TCNT2_6 = 6
	public static final int TCNT2_7 = 7
	public static volatile int OCR2A [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int OCR2B [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR2_0 = 0
	public static final int OCR2_1 = 1
	public static final int OCR2_2 = 2
	public static final int OCR2_3 = 3
	public static final int OCR2_4 = 4
	public static final int OCR2_5 = 5
	public static final int OCR2_6 = 6
	public static final int OCR2_7 = 7
	public static volatile int ASSR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TCR2BUB = 0
	public static final int TCR2AUB = 1
	public static final int OCR2BUB = 2
	public static final int OCR2AUB = 3
	public static final int TCN2UB = 4
	public static final int AS2 = 5
	public static final int EXCLK = 6
	public static volatile int TWBR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TWBR0 = 0
	public static final int TWBR1 = 1
	public static final int TWBR2 = 2
	public static final int TWBR3 = 3
	public static final int TWBR4 = 4
	public static final int TWBR5 = 5
	public static final int TWBR6 = 6
	public static final int TWBR7 = 7
	public static volatile int TWSR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TWPS0 = 0
	public static final int TWPS1 = 1
	public static final int TWS3 = 3
	public static final int TWS4 = 4
	public static final int TWS5 = 5
	public static final int TWS6 = 6
	public static final int TWS7 = 7
	public static volatile int TWAR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TWGCE = 0
	public static final int TWA0 = 1
	public static final int TWA1 = 2
	public static final int TWA2 = 3
	public static final int TWA3 = 4
	public static final int TWA4 = 5
	public static final int TWA5 = 6
	public static final int TWA6 = 7
	public static volatile int TWDR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TWD0 = 0
	public static final int TWD1 = 1
	public static final int TWD2 = 2
	public static final int TWD3 = 3
	public static final int TWD4 = 4
	public static final int TWD5 = 5
	public static final int TWD6 = 6
	public static final int TWD7 = 7
	public static volatile int TWCR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TWIE = 0
	public static final int TWEN = 2
	public static final int TWWC = 3
	public static final int TWSTO = 4
	public static final int TWSTA = 5
	public static final int TWEA = 6
	public static final int TWINT = 7
	public static volatile int TWAMR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TWAM0 = 0
	public static final int TWAM1 = 1
	public static final int TWAM2 = 2
	public static final int TWAM3 = 3
	public static final int TWAM4 = 4
	public static final int TWAM5 = 5
	public static final int TWAM6 = 6
	public static volatile int UCSR0A [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int MPCM0 = 0
	public static final int U2X0 = 1
	public static final int UPE0 = 2
	public static final int DOR0 = 3
	public static final int FE0 = 4
	public static final int UDRE0 = 5
	public static final int TXC0 = 6
	public static final int RXC0 = 7
	public static volatile int UCSR0B [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TXB80 = 0
	public static final int RXB80 = 1
	public static final int UCSZ02 = 2
	public static final int TXEN0 = 3
	public static final int RXEN0 = 4
	public static final int UDRIE0 = 5
	public static final int TXCIE0 = 6
	public static final int RXCIE0 = 7
	public static volatile int UCSR0C [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int UCPOL0 = 0
	public static final int UCSZ00 = 1
	public static final int UCPHA0 = 1
	public static final int UCSZ01 = 2
	public static final int UDORD0 = 2
	public static final int USBS0 = 3
	public static final int UPM00 = 4
	public static final int UPM01 = 5
	public static final int UMSEL00 = 6
	public static final int UMSEL01 = 7
	public static volatile int UBRR0 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int UBRR0L [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int UBRR0_0 = 0
	public static final int UBRR0_1 = 1
	public static final int UBRR0_2 = 2
	public static final int UBRR0_3 = 3
	public static final int UBRR0_4 = 4
	public static final int UBRR0_5 = 5
	public static final int UBRR0_6 = 6
	public static final int UBRR0_7 = 7
	public static volatile int UBRR0H [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int UBRR0_8 = 0
	public static final int UBRR0_9 = 1
	public static final int UBRR0_10 = 2
	public static final int UBRR0_11 = 3
	public static volatile int UDR0 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int UDR0_0 = 0
	public static final int UDR0_1 = 1
	public static final int UDR0_2 = 2
	public static final int UDR0_3 = 3
	public static final int UDR0_4 = 4
	public static final int UDR0_5 = 5
	public static final int UDR0_6 = 6
	public static final int UDR0_7 = 7
	public static final int SPM_PAGESIZE = 128
	public static final int RAMEND = 2303
	public static final int XRAMSIZE = 0
	public static final int XRAMEND = 2303
	public static final int E2END = 1023
	public static final int E2PAGESIZE = 4
	public static final int FLASHEND = 32767
	public static final int FUSE_MEMORY_SIZE = 3
	public static final int SIGNATURE_0 = 30
	public static final int SIGNATURE_1 = 149
	public static final int SIGNATURE_2 = 15
	public static volatile int GICR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int ADCSRA_8 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int ADCSR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PD6 = 6
	public static final int PD7 = 7
	public static final int PC1 = 1
	public static final int PC0 = 0
	public static final int PD5 = 5
	public static final int PD4 = 4
	public static final int PB5 = 5
	public static final int PB4 = 4
	public static final int PWM = 6
	public static final int IRTX = 8
	public static final int UCSZ0 = 1
	public static final int UCSZ1 = 2
	public static final int URSEL = 7
	public static final int TXEN = 3
	public static final int RXEN = 4
	public static final int COM20 = 4
	public static final int COM21 = 5
	public static volatile int TCCR0 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int OCR2 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UBRRH [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UBRRL [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UCSRB [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UCSRC [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int TIMSK [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int TCCR2 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int TICIE1 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int RXC = 7
	public static volatile int UCSRA [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UDR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int UDRE = 5
	public static final int TXC = 6
	public static volatile int WDTCR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int GIFR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int GIMSK [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int MCUCSR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int SFIOR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int SPMCR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int TIFR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int TCCR3B [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int CS31 = 0
	public static final int CS30 = 0
	public static volatile int TCCR4B [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int CS41 = 0
	public static final int CS40 = 0
	public static volatile int TCCR5B [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int CS51 = 0
	public static final int CS50 = 0
	public static volatile int TCCR3A [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int WGM30 = 0
	public static final int WGM40 = 0
	public static volatile int TCCR4A [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int WGM50 = 0
	public static volatile int TCCR5A [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int _AVR_IOM32U4_H_ = 1
	public static final int PINC7 = 7
	public static final int DDC7 = 7 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PORTC7 = 7
	public static volatile int PINE [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PINE2 = 2
	public static final int PINE6 = 6
	public static volatile int DDRE [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int DDE2 = 2
	public static final int DDE6 = 6
	public static volatile int PORTE [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PORTE2 = 2
	public static final int PORTE6 = 6
	public static volatile int PINF [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PINF0 = 0
	public static final int PINF1 = 1
	public static final int PINF4 = 4
	public static final int PINF5 = 5
	public static final int PINF6 = 6
	public static final int PINF7 = 7
	public static volatile int DDRF [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int DDF0 = 0
	public static final int DDF1 = 1
	public static final int DDF4 = 4
	public static final int DDF5 = 5
	public static final int DDF6 = 6
	public static final int DDF7 = 7
	public static volatile int PORTF [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PORTF0 = 0
	public static final int PORTF1 = 1
	public static final int PORTF4 = 4
	public static final int PORTF5 = 5
	public static final int PORTF6 = 6
	public static final int PORTF7 = 7
	public static final int OCF1C = 3
	public static volatile int TIFR3 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TOV3 = 0
	public static final int OCF3A = 1
	public static final int OCF3B = 2
	public static final int OCF3C = 3
	public static final int ICF3 = 5
	public static volatile int TIFR4 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TOV4 = 2
	public static final int OCF4B = 5
	public static final int OCF4A = 6
	public static final int OCF4D = 7
	public static volatile int TIFR5 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int INTF2 = 2
	public static final int INTF3 = 3
	public static final int INTF4 = 4
	public static final int INTF5 = 5
	public static final int INTF6 = 6
	public static final int INTF7 = 7
	public static final int INT2 = 2
	public static final int INT3 = 3
	public static final int INT4 = 4
	public static final int INT5 = 5
	public static final int INT6 = 6
	public static final int INT7 = 7
	public static final int EEAR10 = 2
	public static final int EEAR11 = 3
	public static volatile int PLLCSR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PLOCK = 0
	public static final int PLLE = 1
	public static final int PINDIV = 4
	public static volatile int OCDR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCDR0 = 0
	public static final int OCDR1 = 1
	public static final int OCDR2 = 2
	public static final int OCDR3 = 3
	public static final int OCDR4 = 4
	public static final int OCDR5 = 5
	public static final int OCDR6 = 6
	public static final int OCDR7 = 7
	public static volatile int PLLFRQ [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PDIV0 = 0
	public static final int PDIV1 = 1
	public static final int PDIV2 = 2
	public static final int PDIV3 = 3
	public static final int PLLTM0 = 4
	public static final int PLLTM1 = 5
	public static final int PLLUSB = 6
	public static final int PINMUX = 7
	public static final int JTRF = 4
	public static final int JTD = 7
	public static final int SPMEN = 0
	public static final int SIGRD = 5
	public static volatile int RAMPZ [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int RAMPZ0 = 0
	public static volatile int EIND [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int EIND0 = 0
	public static volatile int PRR0 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int PRR1 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PRUSART1 = 0
	public static final int PRTIM3 = 3
	public static final int PRUSB = 7
	public static volatile int RCCTRL [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int RCFREQ = 0
	public static final int ISC20 = 4
	public static final int ISC21 = 5
	public static final int ISC30 = 6
	public static final int ISC31 = 7
	public static volatile int EICRB [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int ISC40 = 0
	public static final int ISC41 = 1
	public static final int ISC50 = 2
	public static final int ISC51 = 3
	public static final int ISC60 = 4
	public static final int ISC61 = 5
	public static final int ISC70 = 6
	public static final int ISC71 = 7
	public static final int OCIE1C = 3
	public static volatile int TIMSK3 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TOIE3 = 0
	public static final int OCIE3A = 1
	public static final int OCIE3B = 2
	public static final int OCIE3C = 3
	public static final int ICIE3 = 5
	public static volatile int TIMSK4 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TOIE4 = 2
	public static final int OCIE4B = 5
	public static final int OCIE4A = 6
	public static final int OCIE4D = 7
	public static volatile int TIMSK5 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int ADTS3 = 4
	public static final int MUX5 = 5
	public static final int ADHSM = 7
	public static final int MUX4 = 4
	public static volatile int DIDR2 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int ADC8D = 0
	public static final int ADC9D = 1
	public static final int ADC10D = 2
	public static final int ADC11D = 3
	public static final int ADC12D = 4
	public static final int ADC13D = 5
	public static final int ADC6D = 6
	public static final int ADC7D = 7
	public static final int COM1C0 = 2
	public static final int COM1C1 = 3
	public static final int FOC1C = 5
	public static volatile int OCR1C [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int OCR1CL [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR1CL0 = 0
	public static final int OCR1CL1 = 1
	public static final int OCR1CL2 = 2
	public static final int OCR1CL3 = 3
	public static final int OCR1CL4 = 4
	public static final int OCR1CL5 = 5
	public static final int OCR1CL6 = 6
	public static final int OCR1CL7 = 7
	public static volatile int OCR1CH [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR1CH0 = 0
	public static final int OCR1CH1 = 1
	public static final int OCR1CH2 = 2
	public static final int OCR1CH3 = 3
	public static final int OCR1CH4 = 4
	public static final int OCR1CH5 = 5
	public static final int OCR1CH6 = 6
	public static final int OCR1CH7 = 7
	public static final int WGM31 = 1
	public static final int COM3C0 = 2
	public static final int COM3C1 = 3
	public static final int COM3B0 = 4
	public static final int COM3B1 = 5
	public static final int COM3A0 = 6
	public static final int COM3A1 = 7
	public static final int CS32 = 2
	public static final int WGM32 = 3
	public static final int WGM33 = 4
	public static final int ICES3 = 6
	public static final int ICNC3 = 7
	public static volatile int TCCR3C [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int FOC3C = 5
	public static final int FOC3B = 6
	public static final int FOC3A = 7
	public static volatile int TCNT3 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int TCNT3L [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TCNT3L0 = 0
	public static final int TCNT3L1 = 1
	public static final int TCNT3L2 = 2
	public static final int TCNT3L3 = 3
	public static final int TCNT3L4 = 4
	public static final int TCNT3L5 = 5
	public static final int TCNT3L6 = 6
	public static final int TCNT3L7 = 7
	public static volatile int TCNT3H [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TCNT3H0 = 0
	public static final int TCNT3H1 = 1
	public static final int TCNT3H2 = 2
	public static final int TCNT3H3 = 3
	public static final int TCNT3H4 = 4
	public static final int TCNT3H5 = 5
	public static final int TCNT3H6 = 6
	public static final int TCNT3H7 = 7
	public static volatile int ICR3 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int ICR3L [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int ICR3L0 = 0
	public static final int ICR3L1 = 1
	public static final int ICR3L2 = 2
	public static final int ICR3L3 = 3
	public static final int ICR3L4 = 4
	public static final int ICR3L5 = 5
	public static final int ICR3L6 = 6
	public static final int ICR3L7 = 7
	public static volatile int ICR3H [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int ICR3H0 = 0
	public static final int ICR3H1 = 1
	public static final int ICR3H2 = 2
	public static final int ICR3H3 = 3
	public static final int ICR3H4 = 4
	public static final int ICR3H5 = 5
	public static final int ICR3H6 = 6
	public static final int ICR3H7 = 7
	public static volatile int OCR3A [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int OCR3AL [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR3AL0 = 0
	public static final int OCR3AL1 = 1
	public static final int OCR3AL2 = 2
	public static final int OCR3AL3 = 3
	public static final int OCR3AL4 = 4
	public static final int OCR3AL5 = 5
	public static final int OCR3AL6 = 6
	public static final int OCR3AL7 = 7
	public static volatile int OCR3AH [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR3AH0 = 0
	public static final int OCR3AH1 = 1
	public static final int OCR3AH2 = 2
	public static final int OCR3AH3 = 3
	public static final int OCR3AH4 = 4
	public static final int OCR3AH5 = 5
	public static final int OCR3AH6 = 6
	public static final int OCR3AH7 = 7
	public static volatile int OCR3B [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int OCR3BL [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR3BL0 = 0
	public static final int OCR3BL1 = 1
	public static final int OCR3BL2 = 2
	public static final int OCR3BL3 = 3
	public static final int OCR3BL4 = 4
	public static final int OCR3BL5 = 5
	public static final int OCR3BL6 = 6
	public static final int OCR3BL7 = 7
	public static volatile int OCR3BH [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR3BH0 = 0
	public static final int OCR3BH1 = 1
	public static final int OCR3BH2 = 2
	public static final int OCR3BH3 = 3
	public static final int OCR3BH4 = 4
	public static final int OCR3BH5 = 5
	public static final int OCR3BH6 = 6
	public static final int OCR3BH7 = 7
	public static volatile int OCR3C [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int OCR3CL [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR3CL0 = 0
	public static final int OCR3CL1 = 1
	public static final int OCR3CL2 = 2
	public static final int OCR3CL3 = 3
	public static final int OCR3CL4 = 4
	public static final int OCR3CL5 = 5
	public static final int OCR3CL6 = 6
	public static final int OCR3CL7 = 7
	public static volatile int OCR3CH [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR3CH0 = 0
	public static final int OCR3CH1 = 1
	public static final int OCR3CH2 = 2
	public static final int OCR3CH3 = 3
	public static final int OCR3CH4 = 4
	public static final int OCR3CH5 = 5
	public static final int OCR3CH6 = 6
	public static final int OCR3CH7 = 7
	public static volatile int UHCON [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UHINT [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UHIEN [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UHADDR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UHFNUM [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int UHFNUML [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UHFNUMH [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UHFLEN [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UPINRQX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UPINTX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UPNUM [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UPRST [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UPCONX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UPCFG0X [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UPCFG1X [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UPSTAX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UPCFG2X [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UPIENX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UPDATX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int TCNT4 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int TCNT4L [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TC40 = 0
	public static final int TC41 = 1
	public static final int TC42 = 2
	public static final int TC43 = 3
	public static final int TC44 = 4
	public static final int TC45 = 5
	public static final int TC46 = 6
	public static final int TC47 = 7
	public static volatile int TCNT4H [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int TC4H [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TC48 = 0
	public static final int TC49 = 1
	public static final int TC410 = 2
	public static final int PWM4B = 0
	public static final int PWM4A = 1
	public static final int FOC4B = 2
	public static final int FOC4A = 3
	public static final int COM4B0 = 4
	public static final int COM4B1 = 5
	public static final int COM4A0 = 6
	public static final int COM4A1 = 7
	public static final int CS42 = 2
	public static final int CS43 = 3
	public static final int DTPS40 = 4
	public static final int DTPS41 = 5
	public static final int PSR4 = 6
	public static final int PWM4X = 7
	public static volatile int TCCR4C [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int PWM4D = 0
	public static final int FOC4D = 1
	public static final int COM4D0 = 2
	public static final int COM4D1 = 3
	public static final int COM4B0S = 4
	public static final int COM4B1S = 5
	public static final int COM4A0S = 6
	public static final int COM4A1S = 7
	public static volatile int TCCR4D [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int WGM41 = 1
	public static final int FPF4 = 2
	public static final int FPAC4 = 3
	public static final int FPES4 = 4
	public static final int FPNC4 = 5
	public static final int FPEN4 = 6
	public static final int FPIE4 = 7
	public static volatile int TCCR4E [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OC4OE0 = 0
	public static final int OC4OE1 = 1
	public static final int OC4OE2 = 2
	public static final int OC4OE3 = 3
	public static final int OC4OE4 = 4
	public static final int OC4OE5 = 5
	public static final int ENHC4 = 6
	public static final int TLOCK4 = 7
	public static volatile int CLKSEL0 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int CLKS = 0
	public static final int EXTE = 2
	public static final int RCE = 3
	public static final int EXSUT0 = 4
	public static final int EXSUT1 = 5
	public static final int RCSUT0 = 6
	public static final int RCSUT1 = 7
	public static volatile int CLKSEL1 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int EXCKSEL0 = 0
	public static final int EXCKSEL1 = 1
	public static final int EXCKSEL2 = 2
	public static final int EXCKSEL3 = 3
	public static final int RCCKSEL0 = 4
	public static final int RCCKSEL1 = 5
	public static final int RCCKSEL2 = 6
	public static final int RCCKSEL3 = 7
	public static volatile int CLKSTA [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int EXTON = 0
	public static final int RCON = 1
	public static volatile int UCSR1A [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int MPCM1 = 0
	public static final int U2X1 = 1
	public static final int UPE1 = 2
	public static final int DOR1 = 3
	public static final int FE1 = 4
	public static final int UDRE1 = 5
	public static final int TXC1 = 6
	public static final int RXC1 = 7
	public static volatile int UCSR1B [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TXB81 = 0
	public static final int RXB81 = 1
	public static final int UCSZ12 = 2
	public static final int TXEN1 = 3
	public static final int RXEN1 = 4
	public static final int UDRIE1 = 5
	public static final int TXCIE1 = 6
	public static final int RXCIE1 = 7
	public static volatile int UCSR1C [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int UCPOL1 = 0
	public static final int UCSZ10 = 1
	public static final int UCSZ11 = 2
	public static final int USBS1 = 3
	public static final int UPM10 = 4
	public static final int UPM11 = 5
	public static final int UMSEL10 = 6
	public static final int UMSEL11 = 7
	public static volatile int UBRR1 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int UBRR1L [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UBRR1H [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UDR1 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int UDR1_0 = 0
	public static final int UDR1_1 = 1
	public static final int UDR1_2 = 2
	public static final int UDR1_3 = 3
	public static final int UDR1_4 = 4
	public static final int UDR1_5 = 5
	public static final int UDR1_6 = 6
	public static final int UDR1_7 = 7
	public static volatile int OCR4A [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR4A0 = 0
	public static final int OCR4A1 = 1
	public static final int OCR4A2 = 2
	public static final int OCR4A3 = 3
	public static final int OCR4A4 = 4
	public static final int OCR4A5 = 5
	public static final int OCR4A6 = 6
	public static final int OCR4A7 = 7
	public static volatile int OCR4B [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR4B0 = 0
	public static final int OCR4B1 = 1
	public static final int OCR4B2 = 2
	public static final int OCR4B3 = 3
	public static final int OCR4B4 = 4
	public static final int OCR4B5 = 5
	public static final int OCR4B6 = 6
	public static final int OCR4B7 = 7
	public static volatile int OCR4C [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR4C0 = 0
	public static final int OCR4C1 = 1
	public static final int OCR4C2 = 2
	public static final int OCR4C3 = 3
	public static final int OCR4C4 = 4
	public static final int OCR4C5 = 5
	public static final int OCR4C6 = 6
	public static final int OCR4C7 = 7
	public static volatile int OCR4D [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int OCR4D0 = 0
	public static final int OCR4D1 = 1
	public static final int OCR4D2 = 2
	public static final int OCR4D3 = 3
	public static final int OCR4D4 = 4
	public static final int OCR4D5 = 5
	public static final int OCR4D6 = 6
	public static final int OCR4D7 = 7
	public static volatile int DT4 [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int DT4L0 = 0
	public static final int DT4L1 = 1
	public static final int DT4L2 = 2
	public static final int DT4L3 = 3
	public static final int DT4L4 = 4
	public static final int DT4L5 = 5
	public static final int DT4L6 = 6
	public static final int DT4L7 = 7
	public static volatile int UHWCON [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int UVREGE = 0
	public static volatile int USBCON [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int VBUSTE = 0
	public static final int OTGPADE = 4
	public static final int FRZCLK = 5
	public static final int USBE = 7
	public static volatile int USBSTA [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int VBUS = 0
	public static final int SPEED = 3
	public static volatile int USBINT [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int VBUSTI = 0
	public static volatile int OTGCON [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int OTGIEN [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int OTGINT [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UDCON [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int DETACH = 0
	public static final int RMWKUP = 1
	public static final int LSM = 2
	public static final int RSTCPU = 3
	public static volatile int UDINT [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int SUSPI = 0
	public static final int SOFI = 2
	public static final int EORSTI = 3
	public static final int WAKEUPI = 4
	public static final int EORSMI = 5
	public static final int UPRSMI = 6
	public static volatile int UDIEN [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int SUSPE = 0
	public static final int SOFE = 2
	public static final int EORSTE = 3
	public static final int WAKEUPE = 4
	public static final int EORSME = 5
	public static final int UPRSME = 6
	public static volatile int UDADDR [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int UADD0 = 0
	public static final int UADD1 = 1
	public static final int UADD2 = 2
	public static final int UADD3 = 3
	public static final int UADD4 = 4
	public static final int UADD5 = 5
	public static final int UADD6 = 6
	public static final int ADDEN = 7
	public static volatile int UDFNUM [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int UDFNUML [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int FNUM0 = 0
	public static final int FNUM1 = 1
	public static final int FNUM2 = 2
	public static final int FNUM3 = 3
	public static final int FNUM4 = 4
	public static final int FNUM5 = 5
	public static final int FNUM6 = 6
	public static final int FNUM7 = 7
	public static volatile int UDFNUMH [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int FNUM8 = 0
	public static final int FNUM9 = 1
	public static final int FNUM10 = 2
	public static volatile int UDMFN [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int FNCERR = 4
	public static volatile int UDTST [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UEINTX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TXINI = 0
	public static final int STALLEDI = 1
	public static final int RXOUTI = 2
	public static final int RXSTPI = 3
	public static final int NAKOUTI = 4
	public static final int RWAL = 5
	public static final int NAKINI = 6
	public static final int FIFOCON = 7
	public static volatile int UENUM [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int UENUM_0 = 0
	public static final int UENUM_1 = 1
	public static final int UENUM_2 = 2
	public static volatile int UERST [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int EPRST0 = 0
	public static final int EPRST1 = 1
	public static final int EPRST2 = 2
	public static final int EPRST3 = 3
	public static final int EPRST4 = 4
	public static final int EPRST5 = 5
	public static final int EPRST6 = 6
	public static volatile int UECONX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int EPEN = 0
	public static final int RSTDT = 3
	public static final int STALLRQC = 4
	public static final int STALLRQ = 5
	public static volatile int UECFG0X [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int EPDIR = 0
	public static final int EPTYPE0 = 6
	public static final int EPTYPE1 = 7
	public static volatile int UECFG1X [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int ALLOC = 1
	public static final int EPBK0 = 2
	public static final int EPBK1 = 3
	public static final int EPSIZE0 = 4
	public static final int EPSIZE1 = 5
	public static final int EPSIZE2 = 6
	public static volatile int UESTA0X [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int NBUSYBK0 = 0
	public static final int NBUSYBK1 = 1
	public static final int DTSEQ0 = 2
	public static final int DTSEQ1 = 3
	public static final int UNDERFI = 5
	public static final int OVERFI = 6
	public static final int CFGOK = 7
	public static volatile int UESTA1X [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int CURRBK0 = 0
	public static final int CURRBK1 = 1
	public static final int CTRLDIR = 2
	public static volatile int UEIENX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int TXINE = 0
	public static final int STALLEDE = 1
	public static final int RXOUTE = 2
	public static final int RXSTPE = 3
	public static final int NAKOUTE = 4
	public static final int NAKINE = 6
	public static final int FLERRE = 7
	public static volatile int UEDATX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int DAT0 = 0
	public static final int DAT1 = 1
	public static final int DAT2 = 2
	public static final int DAT3 = 3
	public static final int DAT4 = 4
	public static final int DAT5 = 5
	public static final int DAT6 = 6
	public static final int DAT7 = 7
	public static volatile int UEBCX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 97 00 00)]
	public static volatile int UEBCLX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int BYCT0 = 0
	public static final int BYCT1 = 1
	public static final int BYCT2 = 2
	public static final int BYCT3 = 3
	public static final int BYCT4 = 4
	public static final int BYCT5 = 5
	public static final int BYCT6 = 6
	public static final int BYCT7 = 7
	public static volatile int UEBCHX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UEINT [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int EPINT0 = 0
	public static final int EPINT1 = 1
	public static final int EPINT2 = 2
	public static final int EPINT3 = 3
	public static final int EPINT4 = 4
	public static final int EPINT5 = 5
	public static final int EPINT6 = 6
	public static volatile int UPERRX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UPBCLX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UPBCHX [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int UPINT [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static volatile int OTGTCON [(Unknown attribute RuntimeVisibleAnnotations: 00 01 00 0f 00 00)]
	public static final int _VECTORS_SIZE = 43
	public static final int RAMSTART = 256
	public static final int RAMSIZE = 2560
	public static final int XRAMSTART = 8704
	public static final int EFUSE_DEFAULT = 255

1 methods:
	public void <init>()

*/



const class_t haiku_avr_AVRConstants__class PROGMEM = {
	& java_lang_Object__class,
	SIZEOF_haiku_avr_AVRConstants,
	0,
    // {{}} VC 5
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\avr\lib\arduino\HaikuMicroKernelEx_2.c
//
/*
reason #16: haiku.avr.lib.arduino.HaikuMicroKernelEx: public static void init(); 1 bytecode invokespecial

final class haiku.avr.lib.arduino.HaikuMicroKernelEx$2 extends java.io.InputStream
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/haiku/avr/lib/arduino/HaikuMicroKernelEx$2.class
compiled from		HaikuMicroKernelEx.java
compiler version	51.0
access flags		48
constant pool		35 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(HaikuMicroKernelEx.java)
	(Unknown attribute EnclosingMethod: 00 12 00 13)
	InnerClass:static haiku.avr.lib.arduino.HaikuMicroKernelEx$2("<not a member>", "<anonymous>")

3 methods:
	void <init>()
	public int available()
	public int read()

*/



/**
void <init>()
Code(max_stack = 1, max_locals = 1, code_length = 5)
*/
#undef  JMETHOD
#define JMETHOD haiku_avr_lib_arduino_HaikuMicroKernelEx_2__init__V
const           haiku_avr_lib_arduino_HaikuMicroKernelEx_2__init__V_t JMETHOD PROGMEM ={
1+(2)+1,    0,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_INVOKESHORT_java_io_InputStream__init__V,                           // 1:    invokespecial	java.io.InputStream.<init> ()V (1)
OP_RETURN,                                                             // 4:    return
};

const class_t haiku_avr_lib_arduino_HaikuMicroKernelEx_2__class PROGMEM = {
	& java_io_InputStream__class,
	SIZEOF_haiku_avr_lib_arduino_HaikuMicroKernelEx_2,
	0,
    // {{}} VC 5
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\io\InputStream.c
//
/*
reason #17: haiku.avr.lib.arduino.HaikuMicroKernelEx$2: void <init>(); 1 bytecode invokespecial

public class java.io.InputStream extends java.lang.Object
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/java/io/InputStream.class
compiled from		InputStream.java
compiler version	51.0
access flags		33
constant pool		16 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(InputStream.java)

3 methods:
	public void <init>()
	public int available()
	public int read()

*/



/**
public void <init>()
Code(max_stack = 1, max_locals = 1, code_length = 5)
*/
#undef  JMETHOD
#define JMETHOD java_io_InputStream__init__V
const           java_io_InputStream__init__V_t JMETHOD PROGMEM ={
1+(2)+1,    0,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ALOAD_0,                                                            // 0:    aload_0
OP_INVOKESHORT_java_lang_Object__init__V,                              // 1:    invokespecial	java.lang.Object.<init> ()V (1)
OP_RETURN,                                                             // 4:    return
};

const class_t java_io_InputStream__class PROGMEM = {
	& java_lang_Object__class,
	SIZEOF_java_io_InputStream,
	0,
    // {{}} VC 5
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\vm\MicroKernel.c
//
/*
reason #7: haiku.avr.lib.arduino.HaikuMicroKernelEx: public static void main(String[] arg0); 2 bytecode invokestatic

public class haiku.vm.MicroKernel extends java.lang.Object
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/haiku/vm/MicroKernel.class
compiled from		MicroKernel.java
compiler version	51.0
access flags		33
constant pool		100 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(MicroKernel.java)

1 fields:
	private static volatile Object[] panicRoom

3 methods:
	public void <init>()
	public static native void clinitHaikuMagic()
	public static void panic(int arg0, int arg1)
		throws java.lang.Throwable

*/



/**
public static native void clinitHaikuMagic()
*/

// clinit           haiku/avr/AVRDefines
const           haiku_vm_MicroKernel_clinitHaikuMagic_V_t haiku_vm_MicroKernel_clinitHaikuMagic_V PROGMEM ={
2, 0, 0,    // max_stack, purLocals, purParams

OP_INVOKESTATIC,     ADR(haiku_avr_AVRDefines__clinit__V),   // haiku.avr.AVRDefines.<clinit>
OP_RETURN,                                                             //       return
};

const class_t haiku_vm_MicroKernel__class PROGMEM = {
	& java_lang_Object__class,
	SIZEOF_haiku_vm_MicroKernel,
	0,
    // {{}} VC 5
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\avr\lib\arduino\ArduinoLib.c
//
/*
reason #2: haiku.avr.lib.arduino.HaikuMicroKernelEx: public static void main(String[] arg0); 1 bytecode invokestatic

public class haiku.avr.lib.arduino.ArduinoLib extends haiku.avr.AVRDefines
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/haiku/avr/lib/arduino/ArduinoLib.class
compiled from		ArduinoLib.java
compiler version	51.0
access flags		33
constant pool		62 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(ArduinoLib.java)

6 methods:
	public void <init>()
	public static void setBaudRate(long arg0)
	public static void init()
	public static int getADC(int arg0)
	public static int analogRead(int arg0)
	public static long map(long arg0, long arg2, long arg4, long arg6, long arg8)

*/



/**
public static void init()
Code(max_stack = 2, max_locals = 1, code_length = 139)
*/
#undef  JMETHOD
#define JMETHOD haiku_avr_lib_arduino_ArduinoLib_init_V
const           haiku_avr_lib_arduino_ArduinoLib_init_V_t JMETHOD PROGMEM ={
1+(2)+2,    1,    0,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_INVOKESHORT_haiku_avr_AVRDefines_sei_V,                             // 0:    invokestatic	haiku.avr.lib.arduino.ArduinoLib.sei ()V (8)
OP_GETSTATIC_NativeCVariable8,  NADR(TCCR0A),                          // 3:    getstatic		haiku.avr.ATmega328p.TCCR0A I (9)
OP_ICONST_1,                                                           // 6:    iconst_1
OP_INVOKESHORT_haiku_avr_AVRDefines__BV_II,                            // 7:    invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
OP_IOR,                                                                // 10:   ior
OP_PUTSTATIC_NativeCVariable8,  NADR(TCCR0A),                          // 11:   putstatic		haiku.avr.ATmega328p.TCCR0A I (9)
OP_GETSTATIC_NativeCVariable8,  NADR(TCCR0A),                          // 14:   getstatic		haiku.avr.ATmega328p.TCCR0A I (9)
OP_ICONST_0,                                                           // 17:   iconst_0
OP_INVOKESHORT_haiku_avr_AVRDefines__BV_II,                            // 18:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
OP_IOR,                                                                // 21:   ior
OP_PUTSTATIC_NativeCVariable8,  NADR(TCCR0A),                          // 22:   putstatic		haiku.avr.ATmega328p.TCCR0A I (9)
OP_GETSTATIC_NativeCVariable8,  NADR(TCCR0B),                          // 25:   getstatic		haiku.avr.ATmega328p.TCCR0B I (10)
OP_ICONST_1,                                                           // 28:   iconst_1
OP_INVOKESHORT_haiku_avr_AVRDefines__BV_II,                            // 29:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
OP_IOR,                                                                // 32:   ior
OP_PUTSTATIC_NativeCVariable8,  NADR(TCCR0B),                          // 33:   putstatic		haiku.avr.ATmega328p.TCCR0B I (10)
OP_GETSTATIC_NativeCVariable8,  NADR(TCCR0B),                          // 36:   getstatic		haiku.avr.ATmega328p.TCCR0B I (10)
OP_ICONST_0,                                                           // 39:   iconst_0
OP_INVOKESHORT_haiku_avr_AVRDefines__BV_II,                            // 40:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
OP_IOR,                                                                // 43:   ior
OP_PUTSTATIC_NativeCVariable8,  NADR(TCCR0B),                          // 44:   putstatic		haiku.avr.ATmega328p.TCCR0B I (10)
OP_GETSTATIC_NativeCVariable8,  NADR(TIMSK0),                          // 47:   getstatic		haiku.avr.ATmega328p.TIMSK0 I (11)
OP_ICONST_0,                                                           // 50:   iconst_0
OP_INVOKESHORT_haiku_avr_AVRDefines__BV_II,                            // 51:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
OP_IOR,                                                                // 54:   ior
OP_PUTSTATIC_NativeCVariable8,  NADR(TIMSK0),                          // 55:   putstatic		haiku.avr.ATmega328p.TIMSK0 I (11)
OP_GETSTATIC_NativeCVariable8,  NADR(ADCSRA),                          // 58:   getstatic		haiku.avr.ATmega328p.ADCSRA I (12)
OP_ICONST_2,                                                           // 61:   iconst_2
OP_INVOKESHORT_haiku_avr_AVRDefines__BV_II,                            // 62:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
OP_IOR,                                                                // 65:   ior
OP_PUTSTATIC_NativeCVariable8,  NADR(ADCSRA),                          // 66:   putstatic		haiku.avr.ATmega328p.ADCSRA I (12)
OP_GETSTATIC_NativeCVariable8,  NADR(ADCSRA),                          // 69:   getstatic		haiku.avr.ATmega328p.ADCSRA I (12)
OP_ICONST_1,                                                           // 72:   iconst_1
OP_INVOKESHORT_haiku_avr_AVRDefines__BV_II,                            // 73:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
OP_IOR,                                                                // 76:   ior
OP_PUTSTATIC_NativeCVariable8,  NADR(ADCSRA),                          // 77:   putstatic		haiku.avr.ATmega328p.ADCSRA I (12)
OP_GETSTATIC_NativeCVariable8,  NADR(ADCSRA),                          // 80:   getstatic		haiku.avr.ATmega328p.ADCSRA I (12)
OP_ICONST_0,                                                           // 83:   iconst_0
OP_INVOKESHORT_haiku_avr_AVRDefines__BV_II,                            // 84:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
OP_IOR,                                                                // 87:   ior
OP_PUTSTATIC_NativeCVariable8,  NADR(ADCSRA),                          // 88:   putstatic		haiku.avr.ATmega328p.ADCSRA I (12)
OP_GETSTATIC_NativeCVariable8,  NADR(ADCSRA),                          // 91:   getstatic		haiku.avr.ATmega328p.ADCSRA I (12)
OP_BIPUSH,           B(7),                                             // 94:   bipush		7
OP_INVOKESHORT_haiku_avr_AVRDefines__BV_II,                            // 96:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
OP_IOR,                                                                // 99:   ior
OP_PUTSTATIC_NativeCVariable8,  NADR(ADCSRA),                          // 100:  putstatic		haiku.avr.ATmega328p.ADCSRA I (12)
OP_ICONST_0,                                                           // 103:  iconst_0
OP_PUTSTATIC_NativeCVariable8,  NADR(UCSR0B),                          // 104:  putstatic		haiku.avr.ATmega328p.UCSR0B I (6)
OP_ICONST_0,                                                           // 107:  iconst_0
OP_PUTSTATIC_NativeCVariable8,  NADR(UBRR0H),                          // 108:  putstatic		haiku.avr.ATmega328p.UBRR0H I (4)
OP_BIPUSH,           B(16),                                            // 111:  bipush		16
OP_PUTSTATIC_NativeCVariable8,  NADR(UBRR0L),                          // 113:  putstatic		haiku.avr.ATmega328p.UBRR0L I (5)
OP_GETSTATIC_NativeCVariable8,  NADR(UCSR0B),                          // 116:  getstatic		haiku.avr.ATmega328p.UCSR0B I (6)
OP_ICONST_4,                                                           // 119:  iconst_4
OP_INVOKESHORT_haiku_avr_AVRDefines__BV_II,                            // 120:  invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
OP_IOR,                                                                // 123:  ior
OP_PUTSTATIC_NativeCVariable8,  NADR(UCSR0B),                          // 124:  putstatic		haiku.avr.ATmega328p.UCSR0B I (6)
OP_GETSTATIC_NativeCVariable8,  NADR(UCSR0B),                          // 127:  getstatic		haiku.avr.ATmega328p.UCSR0B I (6)
OP_ICONST_3,                                                           // 130:  iconst_3
OP_INVOKESHORT_haiku_avr_AVRDefines__BV_II,                            // 131:  invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
OP_IOR,                                                                // 134:  ior
OP_PUTSTATIC_NativeCVariable8,  NADR(UCSR0B),                          // 135:  putstatic		haiku.avr.ATmega328p.UCSR0B I (6)
OP_RETURN,                                                             // 138:  return
};

const class_t haiku_avr_lib_arduino_ArduinoLib__class PROGMEM = {
	& haiku_avr_AVRDefines__class,
	SIZEOF_haiku_avr_lib_arduino_ArduinoLib,
	0,
    // {{}} VC 5
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\avr\AVRDefines.c
//
/*
reason #3: haiku.avr.lib.arduino.ArduinoLib: public static void init(); 2 bytecode invokestatic

public class haiku.avr.AVRDefines extends java.lang.Object
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/haiku/avr/AVRDefines.class
compiled from		AVRDefines.java
compiler version	51.0
access flags		33
constant pool		42 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(AVRDefines.java)

1 fields:
	private static int _next

11 methods:
	public void <init>()
	public static int _BV(int arg0)
	public static void sei()
	public static void cli()
	public static void cbi(int arg0, int arg1)
	public static void sbi(int arg0, int arg1)
	public static void setMem(int arg0, int arg1)
	public static void unsetMem(int arg0, int arg1)
	public static void srand(int arg0)
	public static int rand()
	static void <clinit>()

*/



/**
public static int _BV(int arg0)
Code(max_stack = 2, max_locals = 1, code_length = 4)
*/
#undef  JMETHOD
#define JMETHOD haiku_avr_AVRDefines__BV_II
const           haiku_avr_AVRDefines__BV_II_t JMETHOD PROGMEM ={
1+(2)+2,    0,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ICONST_1,                                                           // 0:    iconst_1
OP_ILOAD_0,                                                            // 1:    iload_0
OP_ISHL,                                                               // 2:    ishl
OP_IRETURN,                                                            // 3:    ireturn
};

/**
public static void sei()
Code(max_stack = 0, max_locals = 0, code_length = 1)
*/
#undef  JMETHOD
#define JMETHOD haiku_avr_AVRDefines_sei_V
const           haiku_avr_AVRDefines_sei_V_t JMETHOD PROGMEM ={
0+(2)+0,    0,    0,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_RETURN,                                                             // 0:    return
};

/**
static void <clinit>()
Code(max_stack = 1, max_locals = 0, code_length = 5)
*/
#undef  JMETHOD
#define JMETHOD haiku_avr_AVRDefines__clinit__V
const           haiku_avr_AVRDefines__clinit__V_t JMETHOD PROGMEM ={
0+(2)+1,    0,    0,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_ICONST_1,                                                           // 0:    iconst_1
OP_PUTSTATIC_I,      SADR(haiku_avr_AVRDefines__next),                 // 1:    putstatic		haiku.avr.AVRDefines._next I (5)
OP_RETURN,                                                             // 4:    return
};

const class_t haiku_avr_AVRDefines__class PROGMEM = {
	& java_lang_Object__class,
	SIZEOF_haiku_avr_AVRDefines,
	0,
    // {{}} VC 5
};


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\ru\timreset\Test.c
//
/*
reason #8: haiku.avr.lib.arduino.HaikuMicroKernelEx: public static void main(String[] arg0); 1 bytecode invokestatic

public class ru.timreset.Test extends java.lang.Object
filename		C:\Users\averin\AppData\Local\Temp\haikuvm/ru/timreset/Test.class
compiled from		Test.java
compiler version	51.0
access flags		33
constant pool		29 entries
ACC_SUPER flag		true

Attribute(s):
	SourceFile(Test.java)

2 methods:
	public void <init>()
	public static void main(String[] arg0)

*/



/**
public static void main(String[] arg0)
Code(max_stack = 2, max_locals = 1, code_length = 9)
*/
#undef  JMETHOD
#define JMETHOD ru_timreset_Test_main_YLjava_lang_String_V
const           ru_timreset_Test_main_YLjava_lang_String_V_t JMETHOD PROGMEM ={
1+(2)+2,    0,    1,    // MaxLocals+(lsp+pc)+MaxStack, purLocals, purParams

OP_GETSTATIC_L,      SADR(java_lang_System_out),                       // 0:    getstatic		java.lang.System.out Ljava/io/PrintStream; (2)
OP_LDC_S,            CADR(Const0004),                                  // 3:    ldc		"Hello" (3)
OP_INVOKEVIRTUAL,    B(1), LB(MSG_println__Ljava_lang_String__V),      // 5:    invokevirtual	java.io.PrintStream.println (Ljava/lang/String;)V (4)
OP_RETURN,                                                             // 8:    return
};

const class_t ru_timreset_Test__class PROGMEM = {
	& java_lang_Object__class,
	SIZEOF_ru_timreset_Test,
	0,
    // {{}} VC 5
};


