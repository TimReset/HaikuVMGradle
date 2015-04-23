#include "haikuConfig.h"

#include <float.h>



#if DEBUG_DISPATCHER
// bytecodes: 97

const BytecodeFoo bytecodeFoo[] PROGMEM = {
	OPF_INVOKESHORT,               //   0 haiku_avr_AVRDefines__BV_II
	OPF_INVOKESHORT,               //   1 java_lang_Object__init__V
	OPF_INVOKESHORT,               //   2 java_lang_StringBuilder__init__V
	OPF_INVOKESHORT,               //   3 ru_timreset_Test_main_YLjava_lang_String_V
	OPF_INVOKESHORT,               //   4 haiku_avr_AVRDefines_sei_V
	OPF_INVOKESHORT,               //   5 java_lang_Thread_setStateAndSwitch_II
	OPF_INVOKESHORT,               //   6 haiku_avr_lib_arduino_ArduinoLib_init_V
	OPF_INVOKESHORT,               //   7 haiku_avr_lib_arduino_HaikuMicroKernelEx_init_V
	OPF_INVOKESHORT,               //   8 java_lang_Thread_currentThread_Ljava_lang_Thread
	OPF_INVOKESHORT,               //   9 haiku_vm_MicroKernel_clinitHaikuMagic_V
	OPF_INVOKESHORT,               //  10 java_io_OutputStream__init__V
	OPF_INVOKESHORT,               //  11 java_lang_System_getDataAddress_Ljava_lang_Object_I
	OPF_INVOKESHORT,               //  12 java_lang_System_identityHashCode_Ljava_lang_Object_I
	OPF_INVOKESHORT,               //  13 java_lang_String__init__YCV
	OPF_INVOKESHORT,               //  14 java_io_InputStream__init__V
	OPF_INVOKESHORT,               //  15 haiku_avr_lib_arduino_HaikuMicroKernelEx_2__init__V
	OPF_INVOKESHORT,               //  16 haiku_avr_lib_arduino_HaikuMicroKernelEx_1__init__V
	OPF_INVOKESHORT,               //  17 java_io_PrintStream__init__Ljava_io_OutputStream_V
	OPF_INVOKESHORT,               //  18 java_lang_String_valueOf_ILjava_lang_String
	OPF_INVOKESHORT,               //  19 java_lang_String__init__CV
	OPF_INVOKESHORT,               //  20 java_lang_StringBuilder_toString_Ljava_lang_String
	OPF_INVOKESHORT,               //  21 java_lang_String_charAt_IC
	OPF_INVOKESHORT,               //  22 java_io_PrintStream_print_Ljava_lang_String_V
	OPF_INVOKESHORT,               //  23 java_lang_StringBuilder_append_ILjava_lang_StringBuilder
	OPF_INVOKESHORT,               //  24 java_lang_StringBuilder_append_Ljava_lang_String_Ljava_lang_StringBuilder
	OPF_INVOKESHORT,               //  25 java_io_PrintStream_println_Ljava_lang_String_V
	OPF_INVOKESHORT,               //  26 haiku_avr_lib_arduino_HaikuMicroKernelEx_1_write_IV
	OPF_INVOKESHORT,               //  27 java_lang_Throwable_toString_Ljava_lang_String
	OPF_INVOKESHORT,               //  28 java_io_PrintStream_print_CV
	OPF_INVOKESHORT,               //  29 java_lang_String_toString_Ljava_lang_String
	OPF_INVOKESHORT,               //  30 java_lang_Object_toString_Ljava_lang_String
	OPF_INVOKESHORT,               //  31 java_lang_StringBuilder_append_CLjava_lang_StringBuilder
	OPF_INVOKESHORT,               //  32 java_lang_Thread_stop_V
	OPF_INVOKESHORT,               //  33 haiku_avr_AVRDefines__clinit__V
	OPF_INVOKESHORT,               //  34 main_YLjava_lang_String
	OPF_INVOKESHORT,               //  35 java_lang_String_length_I
	OPF_ARETURN,                   //  36 ARETURN
	OPF_IFEQ,                      //  37 IFNE
	OPF_IFEQ,                      //  38 IFLE
	OPF_ARRAYLENGTH,               //  39 ARRAYLENGTH
	OPF_ALOAD_0,                   //  40 ALOAD_0
	OPF_ALOAD_0,                   //  41 ALOAD_1
	OPF_ALOAD_0,                   //  42 ALOAD_2
	OPF_IFEQ,                      //  43 IFGE
	OPF_BIPUSH,                    //  44 BIPUSH
	OPF_IFNONNULL,                 //  45 IFNONNULL
	OPF_CALOAD,                    //  46 CALOAD
	OPF_CASTORE,                   //  47 CASTORE
	OPF_FSTORE_0,                  //  48 ISTORE_0
	OPF_ASTORE_0,                  //  49 ASTORE_1
	OPF_ASTORE_0,                  //  50 ASTORE_2
	OPF_IF_ICMPEQ,                 //  51 IF_ICMPGE
	OPF_DUP,                       //  52 DUP
	OPF_IF_ICMPEQ,                 //  53 IF_ICMPNE
	OPF_GETFIELD_I,                //  54 GETFIELD_I
	OPF_GETFIELD_L,                //  55 GETFIELD_L
	OPF_GETSTATIC_B,               //  56 GETSTATIC_B
	OPF_FSTORE_0,                  //  57 ISTORE_1
	OPF_IF_ACMPEQ,                 //  58 IF_ACMPEQ
	OPF_FSTORE_0,                  //  59 ISTORE_3
	OPF_GETSTATIC_L,               //  60 GETSTATIC_L
	OPF_LDC_S,                     //  61 LDC_S
	OPF_GOTO,                      //  62 GOTO
	OPF_I2C,                       //  63 I2C
	OPF_IADD,                      //  64 IADD
	OPF_IAND,                      //  65 IAND
	OPF_IF_ICMPEQ,                 //  66 IF_ICMPEQ
	OPF_ICONST_0,                  //  67 ICONST_0
	OPF_ICONST_1,                  //  68 ICONST_1
	OPF_ICONST_2,                  //  69 ICONST_2
	OPF_ICONST_3,                  //  70 ICONST_3
	OPF_ICONST_4,                  //  71 ICONST_4
	OPF_IDIV,                      //  72 IDIV
	OPF_IINC1,                     //  73 IINC1
	OPF_FSTORE_0,                  //  74 ISTORE_2
	OPF_ILOAD,                     //  75 ILOAD
	OPF_ILOAD_0,                   //  76 ILOAD_0
	OPF_ILOAD_1,                   //  77 ILOAD_1
	OPF_ILOAD_2,                   //  78 ILOAD_2
	OPF_ILOAD_3,                   //  79 ILOAD_3
	OPF_INEG,                      //  80 INEG
	OPF_INVOKESPECIAL,             //  81 INVOKESTATIC
	OPF_INVOKEVIRTUAL,             //  82 INVOKEVIRTUAL
	OPF_IOR,                       //  83 IOR
	OPF_IREM,                      //  84 IREM
	OPF_ARETURN,                   //  85 IRETURN
	OPF_ISHL,                      //  86 ISHL
	OPF_FSTORE,                    //  87 ISTORE
	OPF_ISUB,                      //  88 ISUB
	OPF_NEW,                       //  89 NEW
	OPF_ANEWARRAY,                 //  90 NEWARRAY
	OPF_POP,                       //  91 POP
	OPF_PUTFIELD_L,                //  92 PUTFIELD_L
	OPF_PUTSTATIC_B,               //  93 PUTSTATIC_B
	OPF_PUTSTATIC_I,               //  94 PUTSTATIC_I
	OPF_PUTSTATIC_L,               //  95 PUTSTATIC_L
	OPF_RETURN,                    //  96 RETURN
};
#endif

#if _DEBUG
char bytecodeDesc000[] PROGMEM ="haiku_avr_AVRDefines__BV_II";
char bytecodeDesc001[] PROGMEM ="java_lang_Object__init__V";
char bytecodeDesc002[] PROGMEM ="java_lang_StringBuilder__init__V";
char bytecodeDesc003[] PROGMEM ="ru_timreset_Test_main_YLjava_lang_String_V";
char bytecodeDesc004[] PROGMEM ="haiku_avr_AVRDefines_sei_V";
char bytecodeDesc005[] PROGMEM ="java_lang_Thread_setStateAndSwitch_II";
char bytecodeDesc006[] PROGMEM ="haiku_avr_lib_arduino_ArduinoLib_init_V";
char bytecodeDesc007[] PROGMEM ="haiku_avr_lib_arduino_HaikuMicroKernelEx_init_V";
char bytecodeDesc008[] PROGMEM ="java_lang_Thread_currentThread_Ljava_lang_Thread";
char bytecodeDesc009[] PROGMEM ="haiku_vm_MicroKernel_clinitHaikuMagic_V";
char bytecodeDesc010[] PROGMEM ="java_io_OutputStream__init__V";
char bytecodeDesc011[] PROGMEM ="java_lang_System_getDataAddress_Ljava_lang_Object_I";
char bytecodeDesc012[] PROGMEM ="java_lang_System_identityHashCode_Ljava_lang_Object_I";
char bytecodeDesc013[] PROGMEM ="java_lang_String__init__YCV";
char bytecodeDesc014[] PROGMEM ="java_io_InputStream__init__V";
char bytecodeDesc015[] PROGMEM ="haiku_avr_lib_arduino_HaikuMicroKernelEx_2__init__V";
char bytecodeDesc016[] PROGMEM ="haiku_avr_lib_arduino_HaikuMicroKernelEx_1__init__V";
char bytecodeDesc017[] PROGMEM ="java_io_PrintStream__init__Ljava_io_OutputStream_V";
char bytecodeDesc018[] PROGMEM ="java_lang_String_valueOf_ILjava_lang_String";
char bytecodeDesc019[] PROGMEM ="java_lang_String__init__CV";
char bytecodeDesc020[] PROGMEM ="java_lang_StringBuilder_toString_Ljava_lang_String";
char bytecodeDesc021[] PROGMEM ="java_lang_String_charAt_IC";
char bytecodeDesc022[] PROGMEM ="java_io_PrintStream_print_Ljava_lang_String_V";
char bytecodeDesc023[] PROGMEM ="java_lang_StringBuilder_append_ILjava_lang_StringBuilder";
char bytecodeDesc024[] PROGMEM ="java_lang_StringBuilder_append_Ljava_lang_String_Ljava_lang_StringBuilder";
char bytecodeDesc025[] PROGMEM ="java_io_PrintStream_println_Ljava_lang_String_V";
char bytecodeDesc026[] PROGMEM ="haiku_avr_lib_arduino_HaikuMicroKernelEx_1_write_IV";
char bytecodeDesc027[] PROGMEM ="java_lang_Throwable_toString_Ljava_lang_String";
char bytecodeDesc028[] PROGMEM ="java_io_PrintStream_print_CV";
char bytecodeDesc029[] PROGMEM ="java_lang_String_toString_Ljava_lang_String";
char bytecodeDesc030[] PROGMEM ="java_lang_Object_toString_Ljava_lang_String";
char bytecodeDesc031[] PROGMEM ="java_lang_StringBuilder_append_CLjava_lang_StringBuilder";
char bytecodeDesc032[] PROGMEM ="java_lang_Thread_stop_V";
char bytecodeDesc033[] PROGMEM ="haiku_avr_AVRDefines__clinit__V";
char bytecodeDesc034[] PROGMEM ="main_YLjava_lang_String";
char bytecodeDesc035[] PROGMEM ="java_lang_String_length_I";
char bytecodeDesc036[] PROGMEM ="ARETURN";
char bytecodeDesc037[] PROGMEM ="IFNE";
char bytecodeDesc038[] PROGMEM ="IFLE";
char bytecodeDesc039[] PROGMEM ="ARRAYLENGTH";
char bytecodeDesc040[] PROGMEM ="ALOAD_0";
char bytecodeDesc041[] PROGMEM ="ALOAD_1";
char bytecodeDesc042[] PROGMEM ="ALOAD_2";
char bytecodeDesc043[] PROGMEM ="IFGE";
char bytecodeDesc044[] PROGMEM ="BIPUSH";
char bytecodeDesc045[] PROGMEM ="IFNONNULL";
char bytecodeDesc046[] PROGMEM ="CALOAD";
char bytecodeDesc047[] PROGMEM ="CASTORE";
char bytecodeDesc048[] PROGMEM ="ISTORE_0";
char bytecodeDesc049[] PROGMEM ="ASTORE_1";
char bytecodeDesc050[] PROGMEM ="ASTORE_2";
char bytecodeDesc051[] PROGMEM ="IF_ICMPGE";
char bytecodeDesc052[] PROGMEM ="DUP";
char bytecodeDesc053[] PROGMEM ="IF_ICMPNE";
char bytecodeDesc054[] PROGMEM ="GETFIELD_I";
char bytecodeDesc055[] PROGMEM ="GETFIELD_L";
char bytecodeDesc056[] PROGMEM ="GETSTATIC_B";
char bytecodeDesc057[] PROGMEM ="ISTORE_1";
char bytecodeDesc058[] PROGMEM ="IF_ACMPEQ";
char bytecodeDesc059[] PROGMEM ="ISTORE_3";
char bytecodeDesc060[] PROGMEM ="GETSTATIC_L";
char bytecodeDesc061[] PROGMEM ="LDC_S";
char bytecodeDesc062[] PROGMEM ="GOTO";
char bytecodeDesc063[] PROGMEM ="I2C";
char bytecodeDesc064[] PROGMEM ="IADD";
char bytecodeDesc065[] PROGMEM ="IAND";
char bytecodeDesc066[] PROGMEM ="IF_ICMPEQ";
char bytecodeDesc067[] PROGMEM ="ICONST_0";
char bytecodeDesc068[] PROGMEM ="ICONST_1";
char bytecodeDesc069[] PROGMEM ="ICONST_2";
char bytecodeDesc070[] PROGMEM ="ICONST_3";
char bytecodeDesc071[] PROGMEM ="ICONST_4";
char bytecodeDesc072[] PROGMEM ="IDIV";
char bytecodeDesc073[] PROGMEM ="IINC1";
char bytecodeDesc074[] PROGMEM ="ISTORE_2";
char bytecodeDesc075[] PROGMEM ="ILOAD";
char bytecodeDesc076[] PROGMEM ="ILOAD_0";
char bytecodeDesc077[] PROGMEM ="ILOAD_1";
char bytecodeDesc078[] PROGMEM ="ILOAD_2";
char bytecodeDesc079[] PROGMEM ="ILOAD_3";
char bytecodeDesc080[] PROGMEM ="INEG";
char bytecodeDesc081[] PROGMEM ="INVOKESTATIC";
char bytecodeDesc082[] PROGMEM ="INVOKEVIRTUAL";
char bytecodeDesc083[] PROGMEM ="IOR";
char bytecodeDesc084[] PROGMEM ="IREM";
char bytecodeDesc085[] PROGMEM ="IRETURN";
char bytecodeDesc086[] PROGMEM ="ISHL";
char bytecodeDesc087[] PROGMEM ="ISTORE";
char bytecodeDesc088[] PROGMEM ="ISUB";
char bytecodeDesc089[] PROGMEM ="NEW";
char bytecodeDesc090[] PROGMEM ="NEWARRAY";
char bytecodeDesc091[] PROGMEM ="POP";
char bytecodeDesc092[] PROGMEM ="PUTFIELD_L";
char bytecodeDesc093[] PROGMEM ="PUTSTATIC_B";
char bytecodeDesc094[] PROGMEM ="PUTSTATIC_I";
char bytecodeDesc095[] PROGMEM ="PUTSTATIC_L";
char bytecodeDesc096[] PROGMEM ="RETURN";
char bytecodeDesc999[] PROGMEM ="unused";

const char* bytecodeDesc[] PROGMEM = {
	bytecodeDesc000,
	bytecodeDesc001,
	bytecodeDesc002,
	bytecodeDesc003,
	bytecodeDesc004,
	bytecodeDesc005,
	bytecodeDesc006,
	bytecodeDesc007,
	bytecodeDesc008,
	bytecodeDesc009,
	bytecodeDesc010,
	bytecodeDesc011,
	bytecodeDesc012,
	bytecodeDesc013,
	bytecodeDesc014,
	bytecodeDesc015,
	bytecodeDesc016,
	bytecodeDesc017,
	bytecodeDesc018,
	bytecodeDesc019,
	bytecodeDesc020,
	bytecodeDesc021,
	bytecodeDesc022,
	bytecodeDesc023,
	bytecodeDesc024,
	bytecodeDesc025,
	bytecodeDesc026,
	bytecodeDesc027,
	bytecodeDesc028,
	bytecodeDesc029,
	bytecodeDesc030,
	bytecodeDesc031,
	bytecodeDesc032,
	bytecodeDesc033,
	bytecodeDesc034,
	bytecodeDesc035,
	bytecodeDesc036,
	bytecodeDesc037,
	bytecodeDesc038,
	bytecodeDesc039,
	bytecodeDesc040,
	bytecodeDesc041,
	bytecodeDesc042,
	bytecodeDesc043,
	bytecodeDesc044,
	bytecodeDesc045,
	bytecodeDesc046,
	bytecodeDesc047,
	bytecodeDesc048,
	bytecodeDesc049,
	bytecodeDesc050,
	bytecodeDesc051,
	bytecodeDesc052,
	bytecodeDesc053,
	bytecodeDesc054,
	bytecodeDesc055,
	bytecodeDesc056,
	bytecodeDesc057,
	bytecodeDesc058,
	bytecodeDesc059,
	bytecodeDesc060,
	bytecodeDesc061,
	bytecodeDesc062,
	bytecodeDesc063,
	bytecodeDesc064,
	bytecodeDesc065,
	bytecodeDesc066,
	bytecodeDesc067,
	bytecodeDesc068,
	bytecodeDesc069,
	bytecodeDesc070,
	bytecodeDesc071,
	bytecodeDesc072,
	bytecodeDesc073,
	bytecodeDesc074,
	bytecodeDesc075,
	bytecodeDesc076,
	bytecodeDesc077,
	bytecodeDesc078,
	bytecodeDesc079,
	bytecodeDesc080,
	bytecodeDesc081,
	bytecodeDesc082,
	bytecodeDesc083,
	bytecodeDesc084,
	bytecodeDesc085,
	bytecodeDesc086,
	bytecodeDesc087,
	bytecodeDesc088,
	bytecodeDesc089,
	bytecodeDesc090,
	bytecodeDesc091,
	bytecodeDesc092,
	bytecodeDesc093,
	bytecodeDesc094,
	bytecodeDesc095,
	bytecodeDesc096,
	bytecodeDesc999,//097
	bytecodeDesc999,//098
	bytecodeDesc999,//099
	bytecodeDesc999,//100
	bytecodeDesc999,//101
	bytecodeDesc999,//102
	bytecodeDesc999,//103
	bytecodeDesc999,//104
	bytecodeDesc999,//105
	bytecodeDesc999,//106
	bytecodeDesc999,//107
	bytecodeDesc999,//108
	bytecodeDesc999,//109
	bytecodeDesc999,//110
	bytecodeDesc999,//111
	bytecodeDesc999,//112
	bytecodeDesc999,//113
	bytecodeDesc999,//114
	bytecodeDesc999,//115
	bytecodeDesc999,//116
	bytecodeDesc999,//117
	bytecodeDesc999,//118
	bytecodeDesc999,//119
	bytecodeDesc999,//120
	bytecodeDesc999,//121
	bytecodeDesc999,//122
	bytecodeDesc999,//123
	bytecodeDesc999,//124
	bytecodeDesc999,//125
	bytecodeDesc999,//126
	bytecodeDesc999,//127
	bytecodeDesc999,//128
	bytecodeDesc999,//129
	bytecodeDesc999,//130
	bytecodeDesc999,//131
	bytecodeDesc999,//132
	bytecodeDesc999,//133
	bytecodeDesc999,//134
	bytecodeDesc999,//135
	bytecodeDesc999,//136
	bytecodeDesc999,//137
	bytecodeDesc999,//138
	bytecodeDesc999,//139
	bytecodeDesc999,//140
	bytecodeDesc999,//141
	bytecodeDesc999,//142
	bytecodeDesc999,//143
	bytecodeDesc999,//144
	bytecodeDesc999,//145
	bytecodeDesc999,//146
	bytecodeDesc999,//147
	bytecodeDesc999,//148
	bytecodeDesc999,//149
	bytecodeDesc999,//150
	bytecodeDesc999,//151
	bytecodeDesc999,//152
	bytecodeDesc999,//153
	bytecodeDesc999,//154
	bytecodeDesc999,//155
	bytecodeDesc999,//156
	bytecodeDesc999,//157
	bytecodeDesc999,//158
	bytecodeDesc999,//159
	bytecodeDesc999,//160
	bytecodeDesc999,//161
	bytecodeDesc999,//162
	bytecodeDesc999,//163
	bytecodeDesc999,//164
	bytecodeDesc999,//165
	bytecodeDesc999,//166
	bytecodeDesc999,//167
	bytecodeDesc999,//168
	bytecodeDesc999,//169
	bytecodeDesc999,//170
	bytecodeDesc999,//171
	bytecodeDesc999,//172
	bytecodeDesc999,//173
	bytecodeDesc999,//174
	bytecodeDesc999,//175
	bytecodeDesc999,//176
	bytecodeDesc999,//177
	bytecodeDesc999,//178
	bytecodeDesc999,//179
	bytecodeDesc999,//180
	bytecodeDesc999,//181
	bytecodeDesc999,//182
	bytecodeDesc999,//183
	bytecodeDesc999,//184
	bytecodeDesc999,//185
	bytecodeDesc999,//186
	bytecodeDesc999,//187
	bytecodeDesc999,//188
	bytecodeDesc999,//189
	bytecodeDesc999,//190
	bytecodeDesc999,//191
	bytecodeDesc999,//192
	bytecodeDesc999,//193
	bytecodeDesc999,//194
	bytecodeDesc999,//195
	bytecodeDesc999,//196
	bytecodeDesc999,//197
	bytecodeDesc999,//198
	bytecodeDesc999,//199
	bytecodeDesc999,//200
	bytecodeDesc999,//201
	bytecodeDesc999,//202
	bytecodeDesc999,//203
	bytecodeDesc999,//204
	bytecodeDesc999,//205
	bytecodeDesc999,//206
	bytecodeDesc999,//207
	bytecodeDesc999,//208
	bytecodeDesc999,//209
	bytecodeDesc999,//210
	bytecodeDesc999,//211
	bytecodeDesc999,//212
	bytecodeDesc999,//213
	bytecodeDesc999,//214
	bytecodeDesc999,//215
	bytecodeDesc999,//216
	bytecodeDesc999,//217
	bytecodeDesc999,//218
	bytecodeDesc999,//219
	bytecodeDesc999,//220
	bytecodeDesc999,//221
	bytecodeDesc999,//222
	bytecodeDesc999,//223
	bytecodeDesc999,//224
	bytecodeDesc999,//225
	bytecodeDesc999,//226
	bytecodeDesc999,//227
	bytecodeDesc999,//228
	bytecodeDesc999,//229
	bytecodeDesc999,//230
	bytecodeDesc999,//231
	bytecodeDesc999,//232
	bytecodeDesc999,//233
	bytecodeDesc999,//234
	bytecodeDesc999,//235
	bytecodeDesc999,//236
	bytecodeDesc999,//237
	bytecodeDesc999,//238
	bytecodeDesc999,//239
	bytecodeDesc999,//240
	bytecodeDesc999,//241
	bytecodeDesc999,//242
	bytecodeDesc999,//243
	bytecodeDesc999,//244
	bytecodeDesc999,//245
	bytecodeDesc999,//246
	bytecodeDesc999,//247
	bytecodeDesc999,//248
	bytecodeDesc999,//249
	bytecodeDesc999,//250
	bytecodeDesc999,//251
	bytecodeDesc999,//252
	bytecodeDesc999,//253
	bytecodeDesc999,//254
	bytecodeDesc999,//255
};
#endif


#include "haikuJava.h"


const ldc_jstring_t	Const0000 PROGMEM =  {4,	{'n','u','l','l'}};
const ldc_jstring_t	Const0001 PROGMEM =  {0,	};
const ldc_jstring_t	Const0002 PROGMEM =  {1,	{'-'}};
const ldc_jstring_t	Const0003 PROGMEM =  {7,	{'O','b','j','e','c','t','@'}};
const ldc_jstring_t	Const0004 PROGMEM =  {5,	{'H','e','l','l','o'}};


statics_t allStatics;
//jobject:
//	0	java_lang_System_err; gets=0 puts=1 native=0
//	1	java_lang_System_in; gets=0 puts=1 native=0
//	2	java_lang_System_out; gets=3 puts=1 native=0
//	3	java_lang_Thread_currentThread; gets=2 puts=1 native=0
//jbyte:
//jchar:
//jdouble:
//jfloat:
//jint:
//	0	haiku_avr_AVRDefines__next; gets=0 puts=1 native=0
//jlong:
//jshort:
//jboolean:



Exception_t const  	exceptionTable[] PROGMEM = {
	{&main_YLjava_lang_String.op0, &main_YLjava_lang_String.op18, &main_YLjava_lang_String.op21, &java_lang_Throwable__class},
	{&java_io_PrintStream_print_CV.op0, &java_io_PrintStream_print_CV.op23, &java_io_PrintStream_print_CV.op26, &java_io_IOException__class},
	{NULL, NULL, NULL, NULL}
};

#if _DEBUG || NO_MICRO
const char *	functionDesc[] PROGMEM = {
	/*   0   78 */ "haiku_avr_AVRDefines__BV_II",
	/*   1   40 */ "java_lang_Object__init__V",
	/*   2   21 */ "java_lang_StringBuilder__init__V",
	/*   3    8 */ "ru_timreset_Test_main_YLjava_lang_String_V",
	/*   4    8 */ "haiku_avr_AVRDefines_sei_V",
	/*   5    8 */ "java_lang_Thread_setStateAndSwitch_II",
	/*   6    8 */ "haiku_avr_lib_arduino_ArduinoLib_init_V",
	/*   7    8 */ "haiku_avr_lib_arduino_HaikuMicroKernelEx_init_V",
	/*   8    8 */ "java_lang_Thread_currentThread_Ljava_lang_Thread",
	/*   9    8 */ "haiku_vm_MicroKernel_clinitHaikuMagic_V",
	/*  10    7 */ "java_io_OutputStream__init__V",
	/*  11    7 */ "java_lang_System_getDataAddress_Ljava_lang_Object_I",
	/*  12    7 */ "java_lang_System_identityHashCode_Ljava_lang_Object_I",
	/*  13    7 */ "java_lang_String__init__YCV",
	/*  14    7 */ "java_io_InputStream__init__V",
	/*  15    7 */ "haiku_avr_lib_arduino_HaikuMicroKernelEx_2__init__V",
	/*  16    7 */ "haiku_avr_lib_arduino_HaikuMicroKernelEx_1__init__V",
	/*  17    7 */ "java_io_PrintStream__init__Ljava_io_OutputStream_V",
	/*  18    6 */ "java_lang_String_valueOf_ILjava_lang_String",
	/*  19    5 */ "java_lang_String__init__CV",
	/*  20    1 */ "java_lang_StringBuilder_toString_Ljava_lang_String",
	/*  21    1 */ "java_lang_String_charAt_IC",
	/*  22    1 */ "java_io_PrintStream_print_Ljava_lang_String_V",
	/*  23    1 */ "java_lang_StringBuilder_append_ILjava_lang_StringBuilder",
	/*  24    1 */ "java_lang_StringBuilder_append_Ljava_lang_String_Ljava_lang_StringBuilder",
	/*  25    1 */ "java_io_PrintStream_println_Ljava_lang_String_V",
	/*  26    1 */ "haiku_avr_lib_arduino_HaikuMicroKernelEx_1_write_IV",
	/*  27    1 */ "java_lang_Throwable_toString_Ljava_lang_String",
	/*  28    1 */ "java_io_PrintStream_print_CV",
	/*  29    1 */ "java_lang_String_toString_Ljava_lang_String",
	/*  30    1 */ "java_lang_Object_toString_Ljava_lang_String",
	/*  31    1 */ "java_lang_StringBuilder_append_CLjava_lang_StringBuilder",
	/*  32    1 */ "java_lang_Thread_stop_V",
	/*  33    1 */ "haiku_avr_AVRDefines__clinit__V",
	/*  34    1 */ "main_YLjava_lang_String",
	/*  35    1 */ "java_lang_String_length_I",
};
#endif

//Needed for Exception unwinding
ByteCode * const        functionTable[] PROGMEM = {
	/*   0   78 */ (ByteCode *)&haiku_avr_AVRDefines__BV_II,
	/*   1   40 */ (ByteCode *)&java_lang_Object__init__V,
	/*   2   21 */ (ByteCode *)&java_lang_StringBuilder__init__V,
	/*   3    8 */ (ByteCode *)&ru_timreset_Test_main_YLjava_lang_String_V,
	/*   4    8 */ (ByteCode *)&haiku_avr_AVRDefines_sei_V,
	/*   5    8 */ (ByteCode *)&java_lang_Thread_setStateAndSwitch_II,
	/*   6    8 */ (ByteCode *)&haiku_avr_lib_arduino_ArduinoLib_init_V,
	/*   7    8 */ (ByteCode *)&haiku_avr_lib_arduino_HaikuMicroKernelEx_init_V,
	/*   8    8 */ (ByteCode *)&java_lang_Thread_currentThread_Ljava_lang_Thread,
	/*   9    8 */ (ByteCode *)&haiku_vm_MicroKernel_clinitHaikuMagic_V,
	/*  10    7 */ (ByteCode *)&java_io_OutputStream__init__V,
	/*  11    7 */ (ByteCode *)&java_lang_System_getDataAddress_Ljava_lang_Object_I,
	/*  12    7 */ (ByteCode *)&java_lang_System_identityHashCode_Ljava_lang_Object_I,
	/*  13    7 */ (ByteCode *)&java_lang_String__init__YCV,
	/*  14    7 */ (ByteCode *)&java_io_InputStream__init__V,
	/*  15    7 */ (ByteCode *)&haiku_avr_lib_arduino_HaikuMicroKernelEx_2__init__V,
	/*  16    7 */ (ByteCode *)&haiku_avr_lib_arduino_HaikuMicroKernelEx_1__init__V,
	/*  17    7 */ (ByteCode *)&java_io_PrintStream__init__Ljava_io_OutputStream_V,
	/*  18    6 */ (ByteCode *)&java_lang_String_valueOf_ILjava_lang_String,
	/*  19    5 */ (ByteCode *)&java_lang_String__init__CV,
	/*  20    1 */ (ByteCode *)&java_lang_StringBuilder_toString_Ljava_lang_String,
	/*  21    1 */ (ByteCode *)&java_lang_String_charAt_IC,
	/*  22    1 */ (ByteCode *)&java_io_PrintStream_print_Ljava_lang_String_V,
	/*  23    1 */ (ByteCode *)&java_lang_StringBuilder_append_ILjava_lang_StringBuilder,
	/*  24    1 */ (ByteCode *)&java_lang_StringBuilder_append_Ljava_lang_String_Ljava_lang_StringBuilder,
	/*  25    1 */ (ByteCode *)&java_io_PrintStream_println_Ljava_lang_String_V,
	/*  26    1 */ (ByteCode *)&haiku_avr_lib_arduino_HaikuMicroKernelEx_1_write_IV,
	/*  27    1 */ (ByteCode *)&java_lang_Throwable_toString_Ljava_lang_String,
	/*  28    1 */ (ByteCode *)&java_io_PrintStream_print_CV,
	/*  29    1 */ (ByteCode *)&java_lang_String_toString_Ljava_lang_String,
	/*  30    1 */ (ByteCode *)&java_lang_Object_toString_Ljava_lang_String,
	/*  31    1 */ (ByteCode *)&java_lang_StringBuilder_append_CLjava_lang_StringBuilder,
	/*  32    1 */ (ByteCode *)&java_lang_Thread_stop_V,
	/*  33    1 */ (ByteCode *)&haiku_avr_AVRDefines__clinit__V,
	/*  34    1 */ (ByteCode *)&main_YLjava_lang_String,
	/*  35    1 */ (ByteCode *)&java_lang_String_length_I,
	NULL};

#if _DEBUG || NO_MICRO

char classDesc000[] PROGMEM ="free block";
char classDesc001[] PROGMEM ="haiku.avr.ATmega328p";
char classDesc002[] PROGMEM ="haiku.avr.AVRConstants";
char classDesc003[] PROGMEM ="haiku.avr.AVRDefines";
char classDesc004[] PROGMEM ="haiku.avr.lib.arduino.ArduinoLib";
char classDesc005[] PROGMEM ="haiku.avr.lib.arduino.HaikuMicroKernelEx";
char classDesc006[] PROGMEM ="haiku.avr.lib.arduino.HaikuMicroKernelEx$1";
char classDesc007[] PROGMEM ="haiku.avr.lib.arduino.HaikuMicroKernelEx$2";
char classDesc008[] PROGMEM ="haiku.vm.MicroKernel";
char classDesc009[] PROGMEM ="java.io.IOException";
char classDesc010[] PROGMEM ="java.io.InputStream";
char classDesc011[] PROGMEM ="java.io.OutputStream";
char classDesc012[] PROGMEM ="java.io.PrintStream";
char classDesc013[] PROGMEM ="java.lang.Exception";
char classDesc014[] PROGMEM ="java.lang.Object";
char classDesc015[] PROGMEM ="java.lang.String";
char classDesc016[] PROGMEM ="java.lang.StringBuilder";
char classDesc017[] PROGMEM ="java.lang.System";
char classDesc018[] PROGMEM ="java.lang.Thread";
char classDesc019[] PROGMEM ="java.lang.Throwable";
char classDesc020[] PROGMEM ="ru.timreset.Test";

const char *	classDesc[] PROGMEM = {
	classDesc001,
	classDesc002,
	classDesc003,
	classDesc004,
	classDesc005,
	classDesc006,
	classDesc007,
	classDesc008,
	classDesc009,
	classDesc010,
	classDesc011,
	classDesc012,
	classDesc013,
	classDesc014,
	classDesc015,
	classDesc016,
	classDesc017,
	classDesc018,
	classDesc019,
	classDesc020,
	classDesc000,
};

//Needed for Heap and Stack debugging
const jclass    classTable[] PROGMEM = {
	(jclass)&haiku_avr_ATmega328p__class,
	(jclass)&haiku_avr_AVRConstants__class,
	(jclass)&haiku_avr_AVRDefines__class,
	(jclass)&haiku_avr_lib_arduino_ArduinoLib__class,
	(jclass)&haiku_avr_lib_arduino_HaikuMicroKernelEx__class,
	(jclass)&haiku_avr_lib_arduino_HaikuMicroKernelEx_1__class,
	(jclass)&haiku_avr_lib_arduino_HaikuMicroKernelEx_2__class,
	(jclass)&haiku_vm_MicroKernel__class,
	(jclass)&java_io_IOException__class,
	(jclass)&java_io_InputStream__class,
	(jclass)&java_io_OutputStream__class,
	(jclass)&java_io_PrintStream__class,
	(jclass)&java_lang_Exception__class,
	(jclass)&java_lang_Object__class,
	(jclass)&java_lang_String__class,
	(jclass)&java_lang_StringBuilder__class,
	(jclass)&java_lang_System__class,
	(jclass)&java_lang_Thread__class,
	(jclass)&java_lang_Throwable__class,
	(jclass)&ru_timreset_Test__class,
	NULL
};
#endif
