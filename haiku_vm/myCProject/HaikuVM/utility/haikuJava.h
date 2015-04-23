//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\avr\lib\arduino\HaikuMicroKernelEx.h
//
typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0; OPadr f0;                                                   // 0:    new		<java.io.PrintStream> (2)
	OP_bc op3;                                                             // 3:    dup
	OP_bc op4; OPadr f4;                                                   // 4:    new		<haiku.avr.lib.arduino.HaikuMicroKernelEx$1> (3)
	OP_bc op7;                                                             // 7:    dup
	OP_bc op8;                                                             // 8:    invokespecial	haiku.avr.lib.arduino.HaikuMicroKernelEx$1.<init> ()V (4)
	OP_bc op11;                                                            // 11:   invokespecial	java.io.PrintStream.<init> (Ljava/io/OutputStream;)V (5)
	OP_bc op14; OPadr a14;                                                 // 14:   putstatic		java.lang.System.out Ljava/io/PrintStream; (6)
	OP_bc op17; OPadr a17;                                                 // 17:   getstatic		java.lang.System.out Ljava/io/PrintStream; (6)
	OP_bc op20; OPadr a20;                                                 // 20:   putstatic		java.lang.System.err Ljava/io/PrintStream; (7)
	OP_bc op23; OPadr f23;                                                 // 23:   new		<haiku.avr.lib.arduino.HaikuMicroKernelEx$2> (8)
	OP_bc op26;                                                            // 26:   dup
	OP_bc op27;                                                            // 27:   invokespecial	haiku.avr.lib.arduino.HaikuMicroKernelEx$2.<init> ()V (9)
	OP_bc op30; OPadr a30;                                                 // 30:   putstatic		java.lang.System.in Ljava/io/InputStream; (10)
	OP_bc op33;                                                            // 33:   return
}            haiku_avr_lib_arduino_HaikuMicroKernelEx_init_V_t;
extern const haiku_avr_lib_arduino_HaikuMicroKernelEx_init_V_t haiku_avr_lib_arduino_HaikuMicroKernelEx_init_V;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    invokestatic	haiku.avr.lib.arduino.ArduinoLib.init ()V (11)
	OP_bc op3;                                                             // 3:    invokestatic	haiku.avr.lib.arduino.HaikuMicroKernelEx.clinitHaikuMagic ()V (12)
	OP_bc op6;                                                             // 6:    invokestatic	haiku.avr.lib.arduino.HaikuMicroKernelEx.init ()V (13)
	OP_bc op9;                                                             // 9:    iconst_0
	OP_bc op10;                                                            // 10:   iconst_0
	OP_bc op14;                                                            // 14:   aload_0
	OP_bc op15;                                                            // 15:   invokestatic	haiku.vm.HaikuMagic.main ([Ljava/lang/String;)V (15)
	OP_bc op18; OPtrg a18;                                                 // 18:   goto		#32
	OP_bc op21;                                                            // 21:   astore_1
	OP_bc op22; OPadr a22;                                                 // 22:   getstatic		java.lang.System.out Ljava/io/PrintStream; (6)
	OP_bc op25;                                                            // 25:   aload_1
	OP_bc op26; OP__8 a26; OP__8 b26;                                      // 26:   invokevirtual	java.lang.Throwable.toString ()Ljava/lang/String; (17)
	OP_bc op29; OP__8 a29; OP__8 b29;                                      // 29:   invokevirtual	java.io.PrintStream.println (Ljava/lang/String;)V (18)
	OP_bc op32;                                                            // 32:   invokestatic	java.lang.Thread.currentThread ()Ljava/lang/Thread; (19)
	OP_bc op35; OP__8 a35; OP__8 b35;                                      // 35:   invokevirtual	java.lang.Thread.stop ()V (20)
	OP_bc op38;                                                            // 38:   return
}            main_YLjava_lang_String_t;
extern const main_YLjava_lang_String_t main_YLjava_lang_String;



#ifndef haiku_avr_lib_arduino_HaikuMicroKernelEx

#define SIZEOF_haiku_avr_lib_arduino_HaikuMicroKernelEx 0


#endif
extern const class_t haiku_avr_lib_arduino_HaikuMicroKernelEx__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\io\PrintStream.h
//
typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1;                                                             // 1:    invokespecial	java.lang.Object.<init> ()V (1)
	OP_bc op4;                                                             // 4:    aload_0
	OP_bc op5;                                                             // 5:    aload_1
	OP_bc op6; OP_16 a6;                                                   // 6:    putfield		java.io.PrintStream.out Ljava/io/OutputStream; (2)
	OP_bc op9;                                                             // 9:    return
}            java_io_PrintStream__init__Ljava_io_OutputStream_V_t;
extern const java_io_PrintStream__init__Ljava_io_OutputStream_V_t java_io_PrintStream__init__Ljava_io_OutputStream_V;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_1
	OP_bc op1; OPtrg a1;                                                   // 1:    ifnonnull		#13
	OP_bc op4;                                                             // 4:    aload_0
	OP_bc op5; OPcon c5;                                                   // 5:    ldc		"null" (10)
	OP_bc op7; OP__8 a7; OP__8 b7;                                         // 7:    invokevirtual	java.io.PrintStream.print (Ljava/lang/String;)V (7)
	OP_bc op10; OPtrg a10;                                                 // 10:   goto		#38
	OP_bc op13;                                                            // 13:   iconst_0
	OP_bc op14;                                                            // 14:   istore_2
	OP_bc op15;                                                            // 15:   iload_2
	OP_bc op16;                                                            // 16:   aload_1
	OP_bc op17; OP__8 a17; OP__8 b17;                                      // 17:   invokevirtual	java.lang.String.length ()I (3)
	OP_bc op20; OPtrg a20;                                                 // 20:   if_icmpge		#38
	OP_bc op23;                                                            // 23:   aload_0
	OP_bc op24;                                                            // 24:   aload_1
	OP_bc op25;                                                            // 25:   iload_2
	OP_bc op26; OP__8 a26; OP__8 b26;                                      // 26:   invokevirtual	java.lang.String.charAt (I)C (4)
	OP_bc op29; OP__8 a29; OP__8 b29;                                      // 29:   invokevirtual	java.io.PrintStream.print (C)V (5)
	OP_bc op32; OP__8 a32;                                                 // 32:   iinc		%2	1
	OP_bc op35; OPtrg a35;                                                 // 35:   goto		#15
	OP_bc op38;                                                            // 38:   return
}            java_io_PrintStream_print_Ljava_lang_String_V_t;
extern const java_io_PrintStream_print_Ljava_lang_String_V_t java_io_PrintStream_print_Ljava_lang_String_V;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1;                                                             // 1:    aload_1
	OP_bc op2; OP__8 a2; OP__8 b2;                                         // 2:    invokevirtual	java.io.PrintStream.print (Ljava/lang/String;)V (7)
	OP_bc op5;                                                             // 5:    aload_0
	OP_bc op6; OP__8 b6;                                                   // 6:    bipush		10
	OP_bc op8; OP__8 a8; OP__8 b8;                                         // 8:    invokevirtual	java.io.PrintStream.print (C)V (5)
	OP_bc op11;                                                            // 11:   return
}            java_io_PrintStream_println_Ljava_lang_String_V_t;
extern const java_io_PrintStream_println_Ljava_lang_String_V_t java_io_PrintStream_println_Ljava_lang_String_V;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    iload_1
	OP_bc op1; OP__8 b1;                                                   // 1:    bipush		10
	OP_bc op3; OPtrg a3;                                                   // 3:    if_icmpne		#15
	OP_bc op6;                                                             // 6:    aload_0
	OP_bc op7; OP_16 a7;                                                   // 7:    getfield		java.io.PrintStream.out Ljava/io/OutputStream; (2)
	OP_bc op10; OP__8 b10;                                                 // 10:   bipush		13
	OP_bc op12; OP__8 a12; OP__8 b12;                                      // 12:   invokevirtual	java.io.OutputStream.write (I)V (13)
	OP_bc op15;                                                            // 15:   aload_0
	OP_bc op16; OP_16 a16;                                                 // 16:   getfield		java.io.PrintStream.out Ljava/io/OutputStream; (2)
	OP_bc op19;                                                            // 19:   iload_1
	OP_bc op20; OP__8 a20; OP__8 b20;                                      // 20:   invokevirtual	java.io.OutputStream.write (I)V (13)
	OP_bc op23; OPtrg a23;                                                 // 23:   goto		#27
	OP_bc op26;                                                            // 26:   astore_2
	OP_bc op27;                                                            // 27:   return
}            java_io_PrintStream_print_CV_t;
extern const java_io_PrintStream_print_CV_t java_io_PrintStream_print_CV;



#ifndef java_io_PrintStream

typedef struct java_io_PrintStream {
  jobject    out; //Ljava/io/OutputStream;
} java_io_PrintStream;
#define SIZEOF_java_io_PrintStream sizeof(java_io_PrintStream)


#endif
extern const class_t java_io_PrintStream__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\Yarrays\YC.h
//
extern const class_t YC__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\lang\String.h
//
typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1;                                                             // 1:    invokespecial	java.lang.Object.<init> ()V (1)
	OP_bc op4;                                                             // 4:    aload_0
	OP_bc op5;                                                             // 5:    aload_1
	OP_bc op6;                                                             // 6:    arraylength
	OP_bc op7; OP__8 b7;                                                   // 7:    newarray		<char>
	OP_bc op9; OP_16 a9;                                                   // 9:    putfield		java.lang.String.characters [C (2)
	OP_bc op12;                                                            // 12:   iconst_0
	OP_bc op13;                                                            // 13:   istore_2
	OP_bc op14;                                                            // 14:   iload_2
	OP_bc op15;                                                            // 15:   aload_1
	OP_bc op16;                                                            // 16:   arraylength
	OP_bc op17; OPtrg a17;                                                 // 17:   if_icmpge		#35
	OP_bc op20;                                                            // 20:   aload_0
	OP_bc op21; OP_16 a21;                                                 // 21:   getfield		java.lang.String.characters [C (2)
	OP_bc op24;                                                            // 24:   iload_2
	OP_bc op25;                                                            // 25:   aload_1
	OP_bc op26;                                                            // 26:   iload_2
	OP_bc op27;                                                            // 27:   caload
	OP_bc op28;                                                            // 28:   castore
	OP_bc op29; OP__8 a29;                                                 // 29:   iinc		%2	1
	OP_bc op32; OPtrg a32;                                                 // 32:   goto		#14
	OP_bc op35;                                                            // 35:   return
}            java_lang_String__init__YCV_t;
extern const java_lang_String__init__YCV_t java_lang_String__init__YCV;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1;                                                             // 1:    invokespecial	java.lang.Object.<init> ()V (1)
	OP_bc op4;                                                             // 4:    aload_0
	OP_bc op5;                                                             // 5:    iconst_1
	OP_bc op6; OP__8 b6;                                                   // 6:    newarray		<char>
	OP_bc op8;                                                             // 8:    dup
	OP_bc op9;                                                             // 9:    iconst_0
	OP_bc op10;                                                            // 10:   iload_1
	OP_bc op11;                                                            // 11:   castore
	OP_bc op12; OP_16 a12;                                                 // 12:   putfield		java.lang.String.characters [C (2)
	OP_bc op15;                                                            // 15:   return
}            java_lang_String__init__CV_t;
extern const java_lang_String__init__CV_t java_lang_String__init__CV;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1; OP_16 a1;                                                   // 1:    getfield		java.lang.String.characters [C (2)
	OP_bc op4;                                                             // 4:    arraylength
	OP_bc op5;                                                             // 5:    ireturn
}            java_lang_String_length_I_t;
extern const java_lang_String_length_I_t java_lang_String_length_I;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1; OP_16 a1;                                                   // 1:    getfield		java.lang.String.characters [C (2)
	OP_bc op4;                                                             // 4:    iload_1
	OP_bc op5;                                                             // 5:    caload
	OP_bc op6;                                                             // 6:    ireturn
}            java_lang_String_charAt_IC_t;
extern const java_lang_String_charAt_IC_t java_lang_String_charAt_IC;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1;                                                             // 1:    areturn
}            java_lang_String_toString_Ljava_lang_String_t;
extern const java_lang_String_toString_Ljava_lang_String_t java_lang_String_toString_Ljava_lang_String;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0; OPcon c0;                                                   // 0:    ldc		"" (18)
	OP_bc op2;                                                             // 2:    astore_1
	OP_bc op3;                                                             // 3:    iload_0
	OP_bc op4;                                                             // 4:    istore_2
	OP_bc op5;                                                             // 5:    iload_0
	OP_bc op6; OPtrg a6;                                                   // 6:    ifle		#12
	OP_bc op9;                                                             // 9:    iload_0
	OP_bc op10;                                                            // 10:   ineg
	OP_bc op11;                                                            // 11:   istore_0
	OP_bc op12; OPadr f12;                                                 // 12:   new		<java.lang.StringBuilder> (22)
	OP_bc op15;                                                            // 15:   dup
	OP_bc op16;                                                            // 16:   invokespecial	java.lang.StringBuilder.<init> ()V (23)
	OP_bc op19; OP__8 b19;                                                 // 19:   bipush		48
	OP_bc op21;                                                            // 21:   iload_0
	OP_bc op22; OP__8 b22;                                                 // 22:   bipush		10
	OP_bc op24;                                                            // 24:   irem
	OP_bc op25;                                                            // 25:   isub
	OP_bc op26;                                                            // 26:   i2c
	OP_bc op27; OP__8 a27; OP__8 b27;                                      // 27:   invokevirtual	java.lang.StringBuilder.append (C)Ljava/lang/StringBuilder; (30)
	OP_bc op30;                                                            // 30:   aload_1
	OP_bc op31; OP__8 a31; OP__8 b31;                                      // 31:   invokevirtual	java.lang.StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder; (24)
	OP_bc op34; OP__8 a34; OP__8 b34;                                      // 34:   invokevirtual	java.lang.StringBuilder.toString ()Ljava/lang/String; (26)
	OP_bc op37;                                                            // 37:   astore_1
	OP_bc op38;                                                            // 38:   iload_0
	OP_bc op39; OP__8 b39;                                                 // 39:   bipush		10
	OP_bc op41;                                                            // 41:   idiv
	OP_bc op42;                                                            // 42:   istore_0
	OP_bc op43;                                                            // 43:   iload_0
	OP_bc op44; OPtrg a44;                                                 // 44:   ifne		#12
	OP_bc op47;                                                            // 47:   iload_2
	OP_bc op48; OPtrg a48;                                                 // 48:   ifge		#71
	OP_bc op51; OPadr f51;                                                 // 51:   new		<java.lang.StringBuilder> (22)
	OP_bc op54;                                                            // 54:   dup
	OP_bc op55;                                                            // 55:   invokespecial	java.lang.StringBuilder.<init> ()V (23)
	OP_bc op58; OPcon c58;                                                 // 58:   ldc		"-" (19)
	OP_bc op60; OP__8 a60; OP__8 b60;                                      // 60:   invokevirtual	java.lang.StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder; (24)
	OP_bc op63;                                                            // 63:   aload_1
	OP_bc op64; OP__8 a64; OP__8 b64;                                      // 64:   invokevirtual	java.lang.StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder; (24)
	OP_bc op67; OP__8 a67; OP__8 b67;                                      // 67:   invokevirtual	java.lang.StringBuilder.toString ()Ljava/lang/String; (26)
	OP_bc op70;                                                            // 70:   areturn
	OP_bc op71;                                                            // 71:   aload_1
	OP_bc op72;                                                            // 72:   areturn
}            java_lang_String_valueOf_ILjava_lang_String_t;
extern const java_lang_String_valueOf_ILjava_lang_String_t java_lang_String_valueOf_ILjava_lang_String;



#ifndef java_lang_String

typedef struct java_lang_String {
  jchar8or16Array characters; //[C
} java_lang_String;
#define SIZEOF_java_lang_String sizeof(java_lang_String)


#endif
extern const class_t java_lang_String__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\lang\StringBuilder.h
//
typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1;                                                             // 1:    invokespecial	java.lang.Object.<init> ()V (3)
	OP_bc op4;                                                             // 4:    aload_0
	OP_bc op5;                                                             // 5:    iconst_0
	OP_bc op6; OP__8 b6;                                                   // 6:    newarray		<char>
	OP_bc op8; OP_16 a8;                                                   // 8:    putfield		java.lang.StringBuilder.chars [C (4)
	OP_bc op11;                                                            // 11:   return
}            java_lang_StringBuilder__init__V_t;
extern const java_lang_StringBuilder__init__V_t java_lang_StringBuilder__init__V;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0; OPadr f0;                                                   // 0:    new		<java.lang.String> (5)
	OP_bc op3;                                                             // 3:    dup
	OP_bc op4;                                                             // 4:    aload_0
	OP_bc op5; OP_16 a5;                                                   // 5:    getfield		java.lang.StringBuilder.chars [C (4)
	OP_bc op8;                                                             // 8:    invokespecial	java.lang.String.<init> ([C)V (6)
	OP_bc op11;                                                            // 11:   areturn
}            java_lang_StringBuilder_toString_Ljava_lang_String_t;
extern const java_lang_StringBuilder_toString_Ljava_lang_String_t java_lang_StringBuilder_toString_Ljava_lang_String;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1; OP_16 a1;                                                   // 1:    getfield		java.lang.StringBuilder.chars [C (4)
	OP_bc op4;                                                             // 4:    arraylength
	OP_bc op5;                                                             // 5:    aload_1
	OP_bc op6; OP_16 a6;                                                   // 6:    getfield		java.lang.String.characters [C (7)
	OP_bc op9;                                                             // 9:    arraylength
	OP_bc op10;                                                            // 10:   iadd
	OP_bc op11; OP__8 b11;                                                 // 11:   newarray		<char>
	OP_bc op13;                                                            // 13:   astore_2
	OP_bc op14;                                                            // 14:   iconst_0
	OP_bc op15;                                                            // 15:   istore_3
	OP_bc op16;                                                            // 16:   iconst_0
	OP_bc op17; OP__8 b17;                                                 // 17:   istore		%4
	OP_bc op19;                                                            // 19:   iload_3
	OP_bc op20;                                                            // 20:   aload_2
	OP_bc op21;                                                            // 21:   arraylength
	OP_bc op22; OPtrg a22;                                                 // 22:   if_icmpge		#62
	OP_bc op25;                                                            // 25:   aload_2
	OP_bc op26;                                                            // 26:   iload_3
	OP_bc op27;                                                            // 27:   iload_3
	OP_bc op28;                                                            // 28:   aload_0
	OP_bc op29; OP_16 a29;                                                 // 29:   getfield		java.lang.StringBuilder.chars [C (4)
	OP_bc op32;                                                            // 32:   arraylength
	OP_bc op33; OPtrg a33;                                                 // 33:   if_icmpge		#45
	OP_bc op36;                                                            // 36:   aload_0
	OP_bc op37; OP_16 a37;                                                 // 37:   getfield		java.lang.StringBuilder.chars [C (4)
	OP_bc op40;                                                            // 40:   iload_3
	OP_bc op41;                                                            // 41:   caload
	OP_bc op42; OPtrg a42;                                                 // 42:   goto		#55
	OP_bc op45;                                                            // 45:   aload_1
	OP_bc op46; OP_16 a46;                                                 // 46:   getfield		java.lang.String.characters [C (7)
	OP_bc op49; OP__8 b49;                                                 // 49:   iload		%4
	OP_bc op51; OP__8 a51;                                                 // 51:   iinc		%4	1
	OP_bc op54;                                                            // 54:   caload
	OP_bc op55;                                                            // 55:   castore
	OP_bc op56; OP__8 a56;                                                 // 56:   iinc		%3	1
	OP_bc op59; OPtrg a59;                                                 // 59:   goto		#19
	OP_bc op62;                                                            // 62:   aload_0
	OP_bc op63;                                                            // 63:   aload_2
	OP_bc op64; OP_16 a64;                                                 // 64:   putfield		java.lang.StringBuilder.chars [C (4)
	OP_bc op67;                                                            // 67:   aload_0
	OP_bc op68;                                                            // 68:   areturn
}            java_lang_StringBuilder_append_Ljava_lang_String_Ljava_lang_StringBuilder_t;
extern const java_lang_StringBuilder_append_Ljava_lang_String_Ljava_lang_StringBuilder_t java_lang_StringBuilder_append_Ljava_lang_String_Ljava_lang_StringBuilder;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1; OPadr f1;                                                   // 1:    new		<java.lang.String> (5)
	OP_bc op4;                                                             // 4:    dup
	OP_bc op5;                                                             // 5:    iload_1
	OP_bc op6;                                                             // 6:    invokespecial	java.lang.String.<init> (C)V (9)
	OP_bc op9; OP__8 a9; OP__8 b9;                                         // 9:    invokevirtual	java.lang.StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder; (2)
	OP_bc op12;                                                            // 12:   areturn
}            java_lang_StringBuilder_append_CLjava_lang_StringBuilder_t;
extern const java_lang_StringBuilder_append_CLjava_lang_StringBuilder_t java_lang_StringBuilder_append_CLjava_lang_StringBuilder;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1;                                                             // 1:    iload_1
	OP_bc op2;                                                             // 2:    invokestatic	java.lang.String.valueOf (I)Ljava/lang/String; (10)
	OP_bc op5; OP__8 a5; OP__8 b5;                                         // 5:    invokevirtual	java.lang.StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder; (2)
	OP_bc op8;                                                             // 8:    areturn
}            java_lang_StringBuilder_append_ILjava_lang_StringBuilder_t;
extern const java_lang_StringBuilder_append_ILjava_lang_StringBuilder_t java_lang_StringBuilder_append_ILjava_lang_StringBuilder;



#ifndef java_lang_StringBuilder

typedef struct java_lang_StringBuilder {
  jchar8or16Array chars; //[C
} java_lang_StringBuilder;
#define SIZEOF_java_lang_StringBuilder sizeof(java_lang_StringBuilder)


#endif
extern const class_t java_lang_StringBuilder__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\lang\Object.h
//
typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    return
}            java_lang_Object__init__V_t;
extern const java_lang_Object__init__V_t java_lang_Object__init__V;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1;                                                             // 1:    invokestatic	java.lang.System.identityHashCode (Ljava/lang/Object;)I (1)
	OP_bc op4;                                                             // 4:    istore_1
	OP_bc op5; OPadr f5;                                                   // 5:    new		<java.lang.StringBuilder> (2)
	OP_bc op8;                                                             // 8:    dup
	OP_bc op9;                                                             // 9:    invokespecial	java.lang.StringBuilder.<init> ()V (3)
	OP_bc op12; OPcon c12;                                                 // 12:   ldc		"Object@" (4)
	OP_bc op14; OP__8 a14; OP__8 b14;                                      // 14:   invokevirtual	java.lang.StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder; (5)
	OP_bc op17;                                                            // 17:   iload_1
	OP_bc op18; OP__8 a18; OP__8 b18;                                      // 18:   invokevirtual	java.lang.StringBuilder.append (I)Ljava/lang/StringBuilder; (6)
	OP_bc op21; OP__8 a21; OP__8 b21;                                      // 21:   invokevirtual	java.lang.StringBuilder.toString ()Ljava/lang/String; (7)
	OP_bc op24;                                                            // 24:   areturn
}            java_lang_Object_toString_Ljava_lang_String_t;
extern const java_lang_Object_toString_Ljava_lang_String_t java_lang_Object_toString_Ljava_lang_String;



#ifndef java_lang_Object

#define SIZEOF_java_lang_Object 0


#endif
extern const class_t java_lang_Object__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\lang\System.h
//
typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1;                                                             // 1:    invokestatic	java.lang.System.getDataAddress (Ljava/lang/Object;)I (2)
	OP_bc op4;                                                             // 4:    ireturn
}            java_lang_System_identityHashCode_Ljava_lang_Object_I_t;
extern const java_lang_System_identityHashCode_Ljava_lang_Object_I_t java_lang_System_identityHashCode_Ljava_lang_Object_I;

#ifndef native_java_lang_System_getDataAddress_Ljava_lang_Object_I
extern const NativCode java_lang_System_getDataAddress_Ljava_lang_Object_I;
extern void            native_java_lang_System_getDataAddress_Ljava_lang_Object_I(void);
#endif



#ifndef java_lang_System

#define SIZEOF_java_lang_System 0


#endif
extern const class_t java_lang_System__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\lang\Thread.h
//
typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1; OP_16 a1;                                                   // 1:    getfield		java.lang.Thread.state I (21)
	OP_bc op4; OP__8 b4;                                                   // 4:    bipush		8
	OP_bc op6; OPtrg a6;                                                   // 6:    if_icmpeq		#45
	OP_bc op9;                                                             // 9:    aload_0
	OP_bc op10;                                                            // 10:   astore_1
	OP_bc op11;                                                            // 11:   aload_1
	OP_bc op12; OP_16 a12;                                                 // 12:   getfield		java.lang.Thread.next Ljava/lang/Thread; (12)
	OP_bc op15;                                                            // 15:   aload_0
	OP_bc op16; OPtrg a16;                                                 // 16:   if_acmpeq		#27
	OP_bc op19;                                                            // 19:   aload_1
	OP_bc op20; OP_16 a20;                                                 // 20:   getfield		java.lang.Thread.next Ljava/lang/Thread; (12)
	OP_bc op23;                                                            // 23:   astore_1
	OP_bc op24; OPtrg a24;                                                 // 24:   goto		#11
	OP_bc op27;                                                            // 27:   aload_1
	OP_bc op28;                                                            // 28:   aload_1
	OP_bc op29; OP_16 a29;                                                 // 29:   getfield		java.lang.Thread.next Ljava/lang/Thread; (12)
	OP_bc op32; OP_16 a32;                                                 // 32:   getfield		java.lang.Thread.next Ljava/lang/Thread; (12)
	OP_bc op35; OP_16 a35;                                                 // 35:   putfield		java.lang.Thread.next Ljava/lang/Thread; (12)
	OP_bc op38;                                                            // 38:   aload_0
	OP_bc op39; OP__8 b39;                                                 // 39:   bipush		8
	OP_bc op41;                                                            // 41:   invokespecial	java.lang.Thread.setStateAndSwitch (I)I (8)
	OP_bc op44;                                                            // 44:   pop
	OP_bc op45;                                                            // 45:   return
}            java_lang_Thread_stop_V_t;
extern const java_lang_Thread_stop_V_t java_lang_Thread_stop_V;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0; OPadr a0;                                                   // 0:    getstatic		java.lang.Thread.currentThread Ljava/lang/Thread; (3)
	OP_bc op3;                                                             // 3:    areturn
}            java_lang_Thread_currentThread_Ljava_lang_Thread_t;
extern const java_lang_Thread_currentThread_Ljava_lang_Thread_t java_lang_Thread_currentThread_Ljava_lang_Thread;

#ifndef native_java_lang_Thread_setStateAndSwitch_II
extern const NativCode java_lang_Thread_setStateAndSwitch_II;
extern void            native_java_lang_Thread_setStateAndSwitch_II(void);
#endif



#ifndef java_lang_Thread

typedef struct java_lang_Thread {
  jobject    target; //Ljava/lang/Runnable;
  jobject    next; //Ljava/lang/Thread;
  jint       state; //I
  jobject    programcounter; //Ljava/lang/Object;
  jobject    stackpointer; //Ljava/lang/Object;
  jobject    stackframe; //Ljava/lang/Object;
  jobject    stack; //Ljava/lang/Object;
  jlong      waitUntil; //J
  jobject    locks; //Ljava/lang/Object;
  jboolean   interrupt; //Z
  jobject    waitingOn; //Ljava/lang/Object;
} java_lang_Thread;
#define SIZEOF_java_lang_Thread sizeof(java_lang_Thread)


#endif
extern const class_t java_lang_Thread__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\lang\Throwable.h
//
typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1; OP_16 a1;                                                   // 1:    getfield		java.lang.Throwable._message Ljava/lang/String; (3)
	OP_bc op4;                                                             // 4:    areturn
}            java_lang_Throwable_toString_Ljava_lang_String_t;
extern const java_lang_Throwable_toString_Ljava_lang_String_t java_lang_Throwable_toString_Ljava_lang_String;



#ifndef java_lang_Throwable

typedef struct java_lang_Throwable {
  jintArray  _stackTrace; //[I
  jstring    _message; //Ljava/lang/String;
  jobject    _cause; //Ljava/lang/Throwable;
} java_lang_Throwable;
#define SIZEOF_java_lang_Throwable sizeof(java_lang_Throwable)


#endif
extern const class_t java_lang_Throwable__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\io\IOException.h
//


#ifndef java_io_IOException

typedef struct java_io_IOException {
  jintArray  _stackTrace; //[I
  jstring    _message; //Ljava/lang/String;
  jobject    _cause; //Ljava/lang/Throwable;
} java_io_IOException;
#define SIZEOF_java_io_IOException sizeof(java_io_IOException)


#endif
extern const class_t java_io_IOException__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\lang\Exception.h
//


#ifndef java_lang_Exception

typedef struct java_lang_Exception {
  jintArray  _stackTrace; //[I
  jstring    _message; //Ljava/lang/String;
  jobject    _cause; //Ljava/lang/Throwable;
} java_lang_Exception;
#define SIZEOF_java_lang_Exception sizeof(java_lang_Exception)


#endif
extern const class_t java_lang_Exception__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\io\OutputStream.h
//
typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1;                                                             // 1:    invokespecial	java.lang.Object.<init> ()V (1)
	OP_bc op4;                                                             // 4:    return
}            java_io_OutputStream__init__V_t;
extern const java_io_OutputStream__init__V_t java_io_OutputStream__init__V;



#ifndef java_io_OutputStream

#define SIZEOF_java_io_OutputStream 0


#endif
extern const class_t java_io_OutputStream__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\avr\lib\arduino\HaikuMicroKernelEx_1.h
//
typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1;                                                             // 1:    invokespecial	java.io.OutputStream.<init> ()V (1)
	OP_bc op4;                                                             // 4:    return
}            haiku_avr_lib_arduino_HaikuMicroKernelEx_1__init__V_t;
extern const haiku_avr_lib_arduino_HaikuMicroKernelEx_1__init__V_t haiku_avr_lib_arduino_HaikuMicroKernelEx_1__init__V;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0; OPadr a0;                                                   // 0:    getstatic		haiku.avr.ATmega328p.UCSR0A I (2)
	OP_bc op3; OP__8 b3;                                                   // 3:    bipush		32
	OP_bc op5;                                                             // 5:    iand
	OP_bc op6; OPtrg a6;                                                   // 6:    ifne		#12
	OP_bc op9; OPtrg a9;                                                   // 9:    goto		#0
	OP_bc op12;                                                            // 12:   iload_1
	OP_bc op13; OPadr a13;                                                 // 13:   putstatic		haiku.avr.ATmega328p.UDR0 I (3)
	OP_bc op16;                                                            // 16:   return
}            haiku_avr_lib_arduino_HaikuMicroKernelEx_1_write_IV_t;
extern const haiku_avr_lib_arduino_HaikuMicroKernelEx_1_write_IV_t haiku_avr_lib_arduino_HaikuMicroKernelEx_1_write_IV;



#ifndef haiku_avr_lib_arduino_HaikuMicroKernelEx_1

#define SIZEOF_haiku_avr_lib_arduino_HaikuMicroKernelEx_1 0


#endif
extern const class_t haiku_avr_lib_arduino_HaikuMicroKernelEx_1__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\avr\ATmega328p.h
//


#ifndef haiku_avr_ATmega328p

#define SIZEOF_haiku_avr_ATmega328p 0


#endif
extern const class_t haiku_avr_ATmega328p__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\avr\AVRConstants.h
//


#ifndef haiku_avr_AVRConstants

#define SIZEOF_haiku_avr_AVRConstants 0


#endif
extern const class_t haiku_avr_AVRConstants__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\avr\lib\arduino\HaikuMicroKernelEx_2.h
//
typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1;                                                             // 1:    invokespecial	java.io.InputStream.<init> ()V (1)
	OP_bc op4;                                                             // 4:    return
}            haiku_avr_lib_arduino_HaikuMicroKernelEx_2__init__V_t;
extern const haiku_avr_lib_arduino_HaikuMicroKernelEx_2__init__V_t haiku_avr_lib_arduino_HaikuMicroKernelEx_2__init__V;



#ifndef haiku_avr_lib_arduino_HaikuMicroKernelEx_2

#define SIZEOF_haiku_avr_lib_arduino_HaikuMicroKernelEx_2 0


#endif
extern const class_t haiku_avr_lib_arduino_HaikuMicroKernelEx_2__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\java\io\InputStream.h
//
typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    aload_0
	OP_bc op1;                                                             // 1:    invokespecial	java.lang.Object.<init> ()V (1)
	OP_bc op4;                                                             // 4:    return
}            java_io_InputStream__init__V_t;
extern const java_io_InputStream__init__V_t java_io_InputStream__init__V;



#ifndef java_io_InputStream

#define SIZEOF_java_io_InputStream 0


#endif
extern const class_t java_io_InputStream__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\vm\MicroKernel.h
//
typedef struct {
    uint8_t max_stack; int8_t purLocals; uint8_t purParams;
	OP_bc oph646; OPadr fh646;  // <clinit>
    OP_bc op0;                                                             //       return
}            haiku_vm_MicroKernel_clinitHaikuMagic_V_t;
extern const haiku_vm_MicroKernel_clinitHaikuMagic_V_t haiku_vm_MicroKernel_clinitHaikuMagic_V;



#ifndef haiku_vm_MicroKernel

#define SIZEOF_haiku_vm_MicroKernel 0


#endif
extern const class_t haiku_vm_MicroKernel__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\avr\lib\arduino\ArduinoLib.h
//
typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    invokestatic	haiku.avr.lib.arduino.ArduinoLib.sei ()V (8)
	OP_bc op3; OPadr a3;                                                   // 3:    getstatic		haiku.avr.ATmega328p.TCCR0A I (9)
	OP_bc op6;                                                             // 6:    iconst_1
	OP_bc op7;                                                             // 7:    invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
	OP_bc op10;                                                            // 10:   ior
	OP_bc op11; OPadr a11;                                                 // 11:   putstatic		haiku.avr.ATmega328p.TCCR0A I (9)
	OP_bc op14; OPadr a14;                                                 // 14:   getstatic		haiku.avr.ATmega328p.TCCR0A I (9)
	OP_bc op17;                                                            // 17:   iconst_0
	OP_bc op18;                                                            // 18:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
	OP_bc op21;                                                            // 21:   ior
	OP_bc op22; OPadr a22;                                                 // 22:   putstatic		haiku.avr.ATmega328p.TCCR0A I (9)
	OP_bc op25; OPadr a25;                                                 // 25:   getstatic		haiku.avr.ATmega328p.TCCR0B I (10)
	OP_bc op28;                                                            // 28:   iconst_1
	OP_bc op29;                                                            // 29:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
	OP_bc op32;                                                            // 32:   ior
	OP_bc op33; OPadr a33;                                                 // 33:   putstatic		haiku.avr.ATmega328p.TCCR0B I (10)
	OP_bc op36; OPadr a36;                                                 // 36:   getstatic		haiku.avr.ATmega328p.TCCR0B I (10)
	OP_bc op39;                                                            // 39:   iconst_0
	OP_bc op40;                                                            // 40:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
	OP_bc op43;                                                            // 43:   ior
	OP_bc op44; OPadr a44;                                                 // 44:   putstatic		haiku.avr.ATmega328p.TCCR0B I (10)
	OP_bc op47; OPadr a47;                                                 // 47:   getstatic		haiku.avr.ATmega328p.TIMSK0 I (11)
	OP_bc op50;                                                            // 50:   iconst_0
	OP_bc op51;                                                            // 51:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
	OP_bc op54;                                                            // 54:   ior
	OP_bc op55; OPadr a55;                                                 // 55:   putstatic		haiku.avr.ATmega328p.TIMSK0 I (11)
	OP_bc op58; OPadr a58;                                                 // 58:   getstatic		haiku.avr.ATmega328p.ADCSRA I (12)
	OP_bc op61;                                                            // 61:   iconst_2
	OP_bc op62;                                                            // 62:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
	OP_bc op65;                                                            // 65:   ior
	OP_bc op66; OPadr a66;                                                 // 66:   putstatic		haiku.avr.ATmega328p.ADCSRA I (12)
	OP_bc op69; OPadr a69;                                                 // 69:   getstatic		haiku.avr.ATmega328p.ADCSRA I (12)
	OP_bc op72;                                                            // 72:   iconst_1
	OP_bc op73;                                                            // 73:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
	OP_bc op76;                                                            // 76:   ior
	OP_bc op77; OPadr a77;                                                 // 77:   putstatic		haiku.avr.ATmega328p.ADCSRA I (12)
	OP_bc op80; OPadr a80;                                                 // 80:   getstatic		haiku.avr.ATmega328p.ADCSRA I (12)
	OP_bc op83;                                                            // 83:   iconst_0
	OP_bc op84;                                                            // 84:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
	OP_bc op87;                                                            // 87:   ior
	OP_bc op88; OPadr a88;                                                 // 88:   putstatic		haiku.avr.ATmega328p.ADCSRA I (12)
	OP_bc op91; OPadr a91;                                                 // 91:   getstatic		haiku.avr.ATmega328p.ADCSRA I (12)
	OP_bc op94; OP__8 b94;                                                 // 94:   bipush		7
	OP_bc op96;                                                            // 96:   invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
	OP_bc op99;                                                            // 99:   ior
	OP_bc op100; OPadr a100;                                               // 100:  putstatic		haiku.avr.ATmega328p.ADCSRA I (12)
	OP_bc op103;                                                           // 103:  iconst_0
	OP_bc op104; OPadr a104;                                               // 104:  putstatic		haiku.avr.ATmega328p.UCSR0B I (6)
	OP_bc op107;                                                           // 107:  iconst_0
	OP_bc op108; OPadr a108;                                               // 108:  putstatic		haiku.avr.ATmega328p.UBRR0H I (4)
	OP_bc op111; OP__8 b111;                                               // 111:  bipush		16
	OP_bc op113; OPadr a113;                                               // 113:  putstatic		haiku.avr.ATmega328p.UBRR0L I (5)
	OP_bc op116; OPadr a116;                                               // 116:  getstatic		haiku.avr.ATmega328p.UCSR0B I (6)
	OP_bc op119;                                                           // 119:  iconst_4
	OP_bc op120;                                                           // 120:  invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
	OP_bc op123;                                                           // 123:  ior
	OP_bc op124; OPadr a124;                                               // 124:  putstatic		haiku.avr.ATmega328p.UCSR0B I (6)
	OP_bc op127; OPadr a127;                                               // 127:  getstatic		haiku.avr.ATmega328p.UCSR0B I (6)
	OP_bc op130;                                                           // 130:  iconst_3
	OP_bc op131;                                                           // 131:  invokestatic	haiku.avr.lib.arduino.ArduinoLib._BV (I)I (7)
	OP_bc op134;                                                           // 134:  ior
	OP_bc op135; OPadr a135;                                               // 135:  putstatic		haiku.avr.ATmega328p.UCSR0B I (6)
	OP_bc op138;                                                           // 138:  return
}            haiku_avr_lib_arduino_ArduinoLib_init_V_t;
extern const haiku_avr_lib_arduino_ArduinoLib_init_V_t haiku_avr_lib_arduino_ArduinoLib_init_V;



#ifndef haiku_avr_lib_arduino_ArduinoLib

#define SIZEOF_haiku_avr_lib_arduino_ArduinoLib 0


#endif
extern const class_t haiku_avr_lib_arduino_ArduinoLib__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\haiku\avr\AVRDefines.h
//
typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    iconst_1
	OP_bc op1;                                                             // 1:    iload_0
	OP_bc op2;                                                             // 2:    ishl
	OP_bc op3;                                                             // 3:    ireturn
}            haiku_avr_AVRDefines__BV_II_t;
extern const haiku_avr_AVRDefines__BV_II_t haiku_avr_AVRDefines__BV_II;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    return
}            haiku_avr_AVRDefines_sei_V_t;
extern const haiku_avr_AVRDefines_sei_V_t haiku_avr_AVRDefines_sei_V;

typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0;                                                             // 0:    iconst_1
	OP_bc op1; OPadr a1;                                                   // 1:    putstatic		haiku.avr.AVRDefines._next I (5)
	OP_bc op4;                                                             // 4:    return
}            haiku_avr_AVRDefines__clinit__V_t;
extern const haiku_avr_AVRDefines__clinit__V_t haiku_avr_AVRDefines__clinit__V;



#ifndef haiku_avr_AVRDefines

#define SIZEOF_haiku_avr_AVRDefines 0


#endif
extern const class_t haiku_avr_AVRDefines__class;


//////////////////////////////////////////////////
// D:\software\haikuVM\myCProject\.\HaikuVM\utility\ru\timreset\Test.h
//
typedef struct {
	uint8_t max_stack; int8_t purLocals; uint8_t purParams;

	OP_bc op0; OPadr a0;                                                   // 0:    getstatic		java.lang.System.out Ljava/io/PrintStream; (2)
	OP_bc op3; OPcon c3;                                                   // 3:    ldc		"Hello" (3)
	OP_bc op5; OP__8 a5; OP__8 b5;                                         // 5:    invokevirtual	java.io.PrintStream.println (Ljava/lang/String;)V (4)
	OP_bc op8;                                                             // 8:    return
}            ru_timreset_Test_main_YLjava_lang_String_V_t;
extern const ru_timreset_Test_main_YLjava_lang_String_V_t ru_timreset_Test_main_YLjava_lang_String_V;



#ifndef ru_timreset_Test

#define SIZEOF_ru_timreset_Test 0


#endif
extern const class_t ru_timreset_Test__class;


