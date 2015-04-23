#include "haikuJ2C.h"

#define MSG_append__C_Ljava_lang_StringBuilder	10
#define MSG_append__I_Ljava_lang_StringBuilder	12
#define MSG_append__Ljava_lang_String__Ljava_lang_StringBuilder	11
#define MSG_charAt__I_C               	7
#define MSG_length___I                	6
#define MSG_print__C_V                	8
#define MSG_print__Ljava_lang_String__V	5
#define MSG_println__Ljava_lang_String__V	3
#define MSG_stop___V                  	4
#define MSG_toString___Ljava_lang_String	2
#define MSG_write__I_V                	9


// bytecodes indexes

#define OP_INVOKESHORT_haiku_avr_AVRDefines__BV_II	0
#define OP_INVOKESHORT_java_lang_Object__init__V	1
#define OP_INVOKESHORT_java_lang_StringBuilder__init__V	2
#define OP_INVOKESHORT_ru_timreset_Test_main_YLjava_lang_String_V	3
#define OP_INVOKESHORT_haiku_avr_AVRDefines_sei_V	4
#define OP_INVOKESHORT_java_lang_Thread_setStateAndSwitch_II	5
#define OP_INVOKESHORT_haiku_avr_lib_arduino_ArduinoLib_init_V	6
#define OP_INVOKESHORT_haiku_avr_lib_arduino_HaikuMicroKernelEx_init_V	7
#define OP_INVOKESHORT_java_lang_Thread_currentThread_Ljava_lang_Thread	8
#define OP_INVOKESHORT_haiku_vm_MicroKernel_clinitHaikuMagic_V	9
#define OP_INVOKESHORT_java_io_OutputStream__init__V	10
#define OP_INVOKESHORT_java_lang_System_getDataAddress_Ljava_lang_Object_I	11
#define OP_INVOKESHORT_java_lang_System_identityHashCode_Ljava_lang_Object_I	12
#define OP_INVOKESHORT_java_lang_String__init__YCV	13
#define OP_INVOKESHORT_java_io_InputStream__init__V	14
#define OP_INVOKESHORT_haiku_avr_lib_arduino_HaikuMicroKernelEx_2__init__V	15
#define OP_INVOKESHORT_haiku_avr_lib_arduino_HaikuMicroKernelEx_1__init__V	16
#define OP_INVOKESHORT_java_io_PrintStream__init__Ljava_io_OutputStream_V	17
#define OP_INVOKESHORT_java_lang_String_valueOf_ILjava_lang_String	18
#define OP_INVOKESHORT_java_lang_String__init__CV	19
#define OP_INVOKESHORT_java_lang_StringBuilder_toString_Ljava_lang_String	20
#define OP_INVOKESHORT_java_lang_String_charAt_IC	21
#define OP_INVOKESHORT_java_io_PrintStream_print_Ljava_lang_String_V	22
#define OP_INVOKESHORT_java_lang_StringBuilder_append_ILjava_lang_StringBuilder	23
#define OP_INVOKESHORT_java_lang_StringBuilder_append_Ljava_lang_String_Ljava_lang_StringBuilder	24
#define OP_INVOKESHORT_java_io_PrintStream_println_Ljava_lang_String_V	25
#define OP_INVOKESHORT_haiku_avr_lib_arduino_HaikuMicroKernelEx_1_write_IV	26
#define OP_INVOKESHORT_java_lang_Throwable_toString_Ljava_lang_String	27
#define OP_INVOKESHORT_java_io_PrintStream_print_CV	28
#define OP_INVOKESHORT_java_lang_String_toString_Ljava_lang_String	29
#define OP_INVOKESHORT_java_lang_Object_toString_Ljava_lang_String	30
#define OP_INVOKESHORT_java_lang_StringBuilder_append_CLjava_lang_StringBuilder	31
#define OP_INVOKESHORT_java_lang_Thread_stop_V	32
#define OP_INVOKESHORT_haiku_avr_AVRDefines__clinit__V	33
#define OP_INVOKESHORT_main_YLjava_lang_String	34
#define OP_INVOKESHORT_java_lang_String_length_I	35
#define OP_ALOAD_0                       40
#define OP_ALOAD_1                       41
#define OP_ALOAD_2                       42
#define OP_ARETURN                       36
#define OP_ARRAYLENGTH                   39
#define OP_ASTORE_1                      49
#define OP_ASTORE_2                      50
#define OP_BIPUSH                        44
#define OP_CALOAD                        46
#define OP_CASTORE                       47
#define OP_DUP                           52
#define OP_GETFIELD_I                    54
#define OP_GETFIELD_L                    55
#define OP_GETSTATIC_B                   56
#define OP_GETSTATIC_L                   60
#define OP_GOTO                          62
#define OP_I2C                           63
#define OP_IADD                          64
#define OP_IAND                          65
#define OP_ICONST_0                      67
#define OP_ICONST_1                      68
#define OP_ICONST_2                      69
#define OP_ICONST_3                      70
#define OP_ICONST_4                      71
#define OP_IDIV                          72
#define OP_IFGE                          43
#define OP_IFLE                          38
#define OP_IFNE                          37
#define OP_IFNONNULL                     45
#define OP_IF_ACMPEQ                     58
#define OP_IF_ICMPEQ                     66
#define OP_IF_ICMPGE                     51
#define OP_IF_ICMPNE                     53
#define OP_IINC1                         73
#define OP_ILOAD                         75
#define OP_ILOAD_0                       76
#define OP_ILOAD_1                       77
#define OP_ILOAD_2                       78
#define OP_ILOAD_3                       79
#define OP_INEG                          80
#define OP_INVOKESTATIC                  81
#define OP_INVOKEVIRTUAL                 82
#define OP_IOR                           83
#define OP_IREM                          84
#define OP_IRETURN                       85
#define OP_ISHL                          86
#define OP_ISTORE                        87
#define OP_ISTORE_0                      48
#define OP_ISTORE_1                      57
#define OP_ISTORE_2                      74
#define OP_ISTORE_3                      59
#define OP_ISUB                          88
#define OP_LDC_S                         61
#define OP_NEW                           89
#define OP_NEWARRAY                      90
#define OP_POP                           91
#define OP_PUTFIELD_L                    92
#define OP_PUTSTATIC_B                   93
#define OP_PUTSTATIC_I                   94
#define OP_PUTSTATIC_L                   95
#define OP_RETURN                        96

// bytecodes not used by JAVA files (but may be by C)

#define OP_AALOAD                        255
#define OP_AASTORE                       255
#define OP_ACONST_NULL                   255
#define OP_ALOAD                         255
#define OP_ALOAD_3                       255
#define OP_ANEWARRAY                     255
#define OP_ASTORE                        255
#define OP_ASTORE_0                      255
#define OP_ASTORE_3                      255
#define OP_ATHROW                        255
#define OP_BALOAD                        255
#define OP_BASTORE                       255
#define OP_BREAKPOINT                    255
#define OP_CHECKCAST                     255
#define OP_D2F                           255
#define OP_D2I                           255
#define OP_D2L                           255
#define OP_DADD                          255
#define OP_DALOAD                        255
#define OP_DASTORE                       255
#define OP_DCMPG                         255
#define OP_DCMPL                         255
#define OP_DCONST_0                      255
#define OP_DCONST_1                      255
#define OP_DDIV                          255
#define OP_DLOAD                         255
#define OP_DLOAD_0                       255
#define OP_DLOAD_1                       255
#define OP_DLOAD_2                       255
#define OP_DLOAD_3                       255
#define OP_DMUL                          255
#define OP_DNEG                          255
#define OP_DREM                          255
#define OP_DRETURN                       255
#define OP_DSTORE                        255
#define OP_DSTORE_0                      255
#define OP_DSTORE_1                      255
#define OP_DSTORE_2                      255
#define OP_DSTORE_3                      255
#define OP_DSUB                          255
#define OP_DUP2                          255
#define OP_DUP2_X1                       255
#define OP_DUP2_X2                       255
#define OP_DUP_X1                        255
#define OP_DUP_X2                        255
#define OP_F2D                           255
#define OP_F2I                           255
#define OP_F2L                           255
#define OP_FADD                          255
#define OP_FALOAD                        255
#define OP_FASTORE                       255
#define OP_FCMPG                         255
#define OP_FCMPL                         255
#define OP_FCONST_0                      255
#define OP_FCONST_1                      255
#define OP_FCONST_2                      255
#define OP_FDIV                          255
#define OP_FLOAD                         255
#define OP_FLOAD_0                       255
#define OP_FLOAD_1                       255
#define OP_FLOAD_2                       255
#define OP_FLOAD_3                       255
#define OP_FMUL                          255
#define OP_FNEG                          255
#define OP_FREM                          255
#define OP_FRETURN                       255
#define OP_FSTORE                        255
#define OP_FSTORE_0                      255
#define OP_FSTORE_1                      255
#define OP_FSTORE_2                      255
#define OP_FSTORE_3                      255
#define OP_FSUB                          255
#define OP_GETFIELD_B                    255
#define OP_GETFIELD_C                    255
#define OP_GETFIELD_D                    255
#define OP_GETFIELD_F                    255
#define OP_GETFIELD_J                    255
#define OP_GETFIELD_S                    255
#define OP_GETFIELD_Z                    255
#define OP_GETSTATIC_C                   255
#define OP_GETSTATIC_D                   255
#define OP_GETSTATIC_F                   255
#define OP_GETSTATIC_I                   255
#define OP_GETSTATIC_J                   255
#define OP_GETSTATIC_N                   255
#define OP_GETSTATIC_S                   255
#define OP_GETSTATIC_Z                   255
#define OP_GOTO_W                        255
#define OP_I2B                           255
#define OP_I2D                           255
#define OP_I2F                           255
#define OP_I2L                           255
#define OP_I2S                           255
#define OP_IALOAD                        255
#define OP_IASTORE                       255
#define OP_ICONST_5                      255
#define OP_ICONST_M1                     255
#define OP_IFEQ                          255
#define OP_IFGT                          255
#define OP_IFLT                          255
#define OP_IFNULL                        255
#define OP_IF_ACMPNE                     255
#define OP_IF_ICMPGT                     255
#define OP_IF_ICMPLE                     255
#define OP_IF_ICMPLT                     255
#define OP_IINC                          255
#define OP_IMPDEP1                       255
#define OP_IMPDEP2                       255
#define OP_IMUL                          255
#define OP_INSTANCEOF                    255
#define OP_INVOKEINTERFACE               255
#define OP_INVOKENATIVE                  255
#define OP_INVOKESHORT                   255
#define OP_INVOKESPECIAL                 255
#define OP_ISHR                          255
#define OP_IUSHR                         255
#define OP_IXOR                          255
#define OP_JSR                           255
#define OP_JSR_W                         255
#define OP_L2D                           255
#define OP_L2F                           255
#define OP_L2I                           255
#define OP_LADD                          255
#define OP_LALOAD                        255
#define OP_LAND                          255
#define OP_LASTORE                       255
#define OP_LCMP                          255
#define OP_LCONST_0                      255
#define OP_LCONST_1                      255
#define OP_LDC2_W_D                      255
#define OP_LDC2_W_DX                     255
#define OP_LDC2_W_L                      255
#define OP_LDC_C                         255
#define OP_LDC_F                         255
#define OP_LDC_FX                        255
#define OP_LDC_I                         255
#define OP_LDC_W_F                       255
#define OP_LDC_W_FX                      255
#define OP_LDC_W_I                       255
#define OP_LDC_W_S                       255
#define OP_LDIV                          255
#define OP_LLOAD                         255
#define OP_LLOAD_0                       255
#define OP_LLOAD_1                       255
#define OP_LLOAD_2                       255
#define OP_LLOAD_3                       255
#define OP_LMUL                          255
#define OP_LNEG                          255
#define OP_LOOKUPSWITCH                  255
#define OP_LOR                           255
#define OP_LREM                          255
#define OP_LRETURN                       255
#define OP_LSHL                          255
#define OP_LSHR                          255
#define OP_LSTORE                        255
#define OP_LSTORE_0                      255
#define OP_LSTORE_1                      255
#define OP_LSTORE_2                      255
#define OP_LSTORE_3                      255
#define OP_LSUB                          255
#define OP_LUSHR                         255
#define OP_LXOR                          255
#define OP_MONITORENTER                  255
#define OP_MONITOREXIT                   255
#define OP_MULTIANEWARRAY                255
#define OP_NOP                           255
#define OP_POP2                          255
#define OP_PUTFIELD_B                    255
#define OP_PUTFIELD_C                    255
#define OP_PUTFIELD_D                    255
#define OP_PUTFIELD_F                    255
#define OP_PUTFIELD_I                    255
#define OP_PUTFIELD_J                    255
#define OP_PUTFIELD_S                    255
#define OP_PUTFIELD_Z                    255
#define OP_PUTSTATIC_C                   255
#define OP_PUTSTATIC_D                   255
#define OP_PUTSTATIC_F                   255
#define OP_PUTSTATIC_J                   255
#define OP_PUTSTATIC_S                   255
#define OP_PUTSTATIC_Z                   255
#define OP_RET                           255
#define OP_SALOAD                        255
#define OP_SASTORE                       255
#define OP_SIPUSH                        255
#define OP_SWAP                          255
#define OP_TABLESWITCH                   255
#define OP_WIDE                          255
#define OP_WIINC                         255
#define OP_XXXUNUSEDXXX                  255


// bytecodes

#define BC_AALOAD                     	0
#define BC_AASTORE                    	1
#define BC_ACONST_NULL                	2
#define BC_ALOAD                      	3
#define BC_ALOAD_0                    	4
#define BC_ALOAD_1                    	5
#define BC_ALOAD_2                    	6
#define BC_ALOAD_3                    	7
#define BC_ANEWARRAY                  	8
#define BC_ARETURN                    	9
#define BC_ARRAYLENGTH                	10
#define BC_ASTORE                     	11
#define BC_ASTORE_0                   	12
#define BC_ASTORE_1                   	13
#define BC_ASTORE_2                   	14
#define BC_ASTORE_3                   	15
#define BC_ATHROW                     	16
#define BC_BALOAD                     	17
#define BC_BASTORE                    	18
#define BC_BIPUSH                     	19
#define BC_BREAKPOINT                 	247
#define BC_CALOAD                     	20
#define BC_CASTORE                    	21
#define BC_CHECKCAST                  	22
#define BC_D2F                        	23
#define BC_D2I                        	24
#define BC_D2L                        	25
#define BC_DADD                       	26
#define BC_DALOAD                     	27
#define BC_DASTORE                    	28
#define BC_DCMPG                      	29
#define BC_DCMPL                      	30
#define BC_DCONST_0                   	31
#define BC_DCONST_1                   	32
#define BC_DDIV                       	33
#define BC_DLOAD                      	34
#define BC_DLOAD_0                    	35
#define BC_DLOAD_1                    	36
#define BC_DLOAD_2                    	37
#define BC_DLOAD_3                    	38
#define BC_DMUL                       	39
#define BC_DNEG                       	40
#define BC_DREM                       	41
#define BC_DRETURN                    	42
#define BC_DSTORE                     	43
#define BC_DSTORE_0                   	44
#define BC_DSTORE_1                   	45
#define BC_DSTORE_2                   	46
#define BC_DSTORE_3                   	47
#define BC_DSUB                       	48
#define BC_DUP                        	49
#define BC_DUP2                       	52
#define BC_DUP2_X1                    	53
#define BC_DUP2_X2                    	54
#define BC_DUP_X1                     	50
#define BC_DUP_X2                     	51
#define BC_F2D                        	55
#define BC_F2I                        	56
#define BC_F2L                        	57
#define BC_FADD                       	58
#define BC_FALOAD                     	59
#define BC_FASTORE                    	60
#define BC_FCMPG                      	61
#define BC_FCMPL                      	62
#define BC_FCONST_0                   	63
#define BC_FCONST_1                   	64
#define BC_FCONST_2                   	65
#define BC_FDIV                       	66
#define BC_FLOAD                      	67
#define BC_FLOAD_0                    	68
#define BC_FLOAD_1                    	69
#define BC_FLOAD_2                    	70
#define BC_FLOAD_3                    	71
#define BC_FMUL                       	72
#define BC_FNEG                       	73
#define BC_FREM                       	74
#define BC_FRETURN                    	75
#define BC_FSTORE                     	76
#define BC_FSTORE_0                   	77
#define BC_FSTORE_1                   	78
#define BC_FSTORE_2                   	79
#define BC_FSTORE_3                   	80
#define BC_FSUB                       	81
#define BC_GETFIELD_B                 	83
#define BC_GETFIELD_C                 	84
#define BC_GETFIELD_D                 	85
#define BC_GETFIELD_F                 	86
#define BC_GETFIELD_I                 	87
#define BC_GETFIELD_J                 	88
#define BC_GETFIELD_L                 	82
#define BC_GETFIELD_S                 	89
#define BC_GETFIELD_Z                 	90
#define BC_GETSTATIC_B                	92
#define BC_GETSTATIC_C                	93
#define BC_GETSTATIC_D                	94
#define BC_GETSTATIC_F                	95
#define BC_GETSTATIC_I                	96
#define BC_GETSTATIC_J                	97
#define BC_GETSTATIC_L                	91
#define BC_GETSTATIC_N                	100
#define BC_GETSTATIC_S                	98
#define BC_GETSTATIC_Z                	99
#define BC_GOTO                       	101
#define BC_GOTO_W                     	102
#define BC_I2B                        	103
#define BC_I2C                        	104
#define BC_I2D                        	105
#define BC_I2F                        	106
#define BC_I2L                        	107
#define BC_I2S                        	108
#define BC_IADD                       	109
#define BC_IALOAD                     	110
#define BC_IAND                       	111
#define BC_IASTORE                    	112
#define BC_ICONST_0                   	114
#define BC_ICONST_1                   	115
#define BC_ICONST_2                   	116
#define BC_ICONST_3                   	117
#define BC_ICONST_4                   	118
#define BC_ICONST_5                   	119
#define BC_ICONST_M1                  	113
#define BC_IDIV                       	120
#define BC_IFEQ                       	129
#define BC_IFGE                       	132
#define BC_IFGT                       	133
#define BC_IFLE                       	134
#define BC_IFLT                       	131
#define BC_IFNE                       	130
#define BC_IFNONNULL                  	135
#define BC_IFNULL                     	136
#define BC_IF_ACMPEQ                  	121
#define BC_IF_ACMPNE                  	122
#define BC_IF_ICMPEQ                  	123
#define BC_IF_ICMPGE                  	126
#define BC_IF_ICMPGT                  	127
#define BC_IF_ICMPLE                  	128
#define BC_IF_ICMPLT                  	125
#define BC_IF_ICMPNE                  	124
#define BC_IINC                       	137
#define BC_IINC1                      	138
#define BC_ILOAD                      	139
#define BC_ILOAD_0                    	140
#define BC_ILOAD_1                    	141
#define BC_ILOAD_2                    	142
#define BC_ILOAD_3                    	143
#define BC_IMPDEP1                    	248
#define BC_IMPDEP2                    	249
#define BC_IMUL                       	144
#define BC_INEG                       	145
#define BC_INSTANCEOF                 	146
#define BC_INVOKEINTERFACE            	147
#define BC_INVOKENATIVE               	151
#define BC_INVOKESHORT                	152
#define BC_INVOKESPECIAL              	148
#define BC_INVOKESTATIC               	149
#define BC_INVOKEVIRTUAL              	150
#define BC_IOR                        	153
#define BC_IREM                       	154
#define BC_IRETURN                    	155
#define BC_ISHL                       	156
#define BC_ISHR                       	157
#define BC_ISTORE                     	158
#define BC_ISTORE_0                   	159
#define BC_ISTORE_1                   	160
#define BC_ISTORE_2                   	161
#define BC_ISTORE_3                   	162
#define BC_ISUB                       	163
#define BC_IUSHR                      	164
#define BC_IXOR                       	165
#define BC_JSR                        	166
#define BC_JSR_W                      	167
#define BC_L2D                        	168
#define BC_L2F                        	169
#define BC_L2I                        	170
#define BC_LADD                       	171
#define BC_LALOAD                     	172
#define BC_LAND                       	173
#define BC_LASTORE                    	174
#define BC_LCMP                       	175
#define BC_LCONST_0                   	188
#define BC_LCONST_1                   	189
#define BC_LDC2_W_D                   	186
#define BC_LDC2_W_DX                  	187
#define BC_LDC2_W_L                   	179
#define BC_LDC_C                      	176
#define BC_LDC_F                      	180
#define BC_LDC_FX                     	183
#define BC_LDC_I                      	178
#define BC_LDC_S                      	177
#define BC_LDC_W_F                    	184
#define BC_LDC_W_FX                   	185
#define BC_LDC_W_I                    	182
#define BC_LDC_W_S                    	181
#define BC_LDIV                       	190
#define BC_LLOAD                      	191
#define BC_LLOAD_0                    	192
#define BC_LLOAD_1                    	193
#define BC_LLOAD_2                    	194
#define BC_LLOAD_3                    	195
#define BC_LMUL                       	196
#define BC_LNEG                       	197
#define BC_LOOKUPSWITCH               	198
#define BC_LOR                        	199
#define BC_LREM                       	200
#define BC_LRETURN                    	201
#define BC_LSHL                       	202
#define BC_LSHR                       	203
#define BC_LSTORE                     	204
#define BC_LSTORE_0                   	205
#define BC_LSTORE_1                   	206
#define BC_LSTORE_2                   	207
#define BC_LSTORE_3                   	208
#define BC_LSUB                       	209
#define BC_LUSHR                      	210
#define BC_LXOR                       	211
#define BC_MONITORENTER               	212
#define BC_MONITOREXIT                	213
#define BC_MULTIANEWARRAY             	214
#define BC_NEW                        	215
#define BC_NEWARRAY                   	216
#define BC_NOP                        	217
#define BC_POP                        	218
#define BC_POP2                       	219
#define BC_PUTFIELD_B                 	221
#define BC_PUTFIELD_C                 	222
#define BC_PUTFIELD_D                 	223
#define BC_PUTFIELD_F                 	224
#define BC_PUTFIELD_I                 	225
#define BC_PUTFIELD_J                 	226
#define BC_PUTFIELD_L                 	220
#define BC_PUTFIELD_S                 	227
#define BC_PUTFIELD_Z                 	228
#define BC_PUTSTATIC_B                	230
#define BC_PUTSTATIC_C                	231
#define BC_PUTSTATIC_D                	232
#define BC_PUTSTATIC_F                	233
#define BC_PUTSTATIC_I                	234
#define BC_PUTSTATIC_J                	235
#define BC_PUTSTATIC_L                	229
#define BC_PUTSTATIC_S                	236
#define BC_PUTSTATIC_Z                	237
#define BC_RET                        	238
#define BC_RETURN                     	239
#define BC_SALOAD                     	240
#define BC_SASTORE                    	241
#define BC_SIPUSH                     	242
#define BC_SWAP                       	243
#define BC_TABLESWITCH                	244
#define BC_WIDE                       	245
#define BC_WIINC                      	246
#define BC_XXXUNUSEDXXX               	250
#define BC_unimplemented              	255


// ConstantPool: [0, 4]

extern const ldc_jstring_t	Const0000 PROGMEM ;
extern const ldc_jstring_t	Const0001 PROGMEM ;
extern const ldc_jstring_t	Const0002 PROGMEM ;
extern const ldc_jstring_t	Const0003 PROGMEM ;
extern const ldc_jstring_t	Const0004 PROGMEM ;


#define STATIC_ROOTS 4
#define STATIC_SIZE (STATIC_ROOTS*sizeof(jobject) + 1*sizeof(jint))
#if defined(HAIKU_MemorySize)
#define HEAPSIZE (HAIKU_MemorySize - STATIC_SIZE)
#else
#if defined(ARDUINO_SAM_DUE)
#define HEAPSIZE (10000 - STATIC_SIZE)
#else
#define HEAPSIZE (((RAMEND-0x100) - 500) - STATIC_SIZE)
#endif
#endif

typedef struct {
	heap_t heapControl;
	char data[HEAPSIZE];
	jheapsize nullallocsize;
} heapmem_t;

extern heapmem_t heapmem;

typedef struct {
	volatile jobject    java_lang_System_err;
	volatile jobject    java_lang_System_in;
	volatile jobject    java_lang_System_out;
	volatile jobject    java_lang_Thread_currentThread;
	volatile jint       haiku_avr_AVRDefines__next;
} statics_u_t;

typedef union {
	jobject     gcRoots[STATIC_ROOTS];
	statics_u_t statics;
} statics_t;

extern statics_t allStatics;

#ifndef ADCSRA
  extern int8_t ADCSRA;	// gets=4 puts=4 native=8
#endif

#ifndef TCCR0A
  extern int8_t TCCR0A;	// gets=2 puts=2 native=4
#endif

#ifndef TCCR0B
  extern int8_t TCCR0B;	// gets=2 puts=2 native=4
#endif

#ifndef TIMSK0
  extern int8_t TIMSK0;	// gets=1 puts=1 native=2
#endif

#ifndef UBRR0H
  extern int8_t UBRR0H;	// gets=0 puts=1 native=1
#endif

#ifndef UBRR0L
  extern int8_t UBRR0L;	// gets=0 puts=1 native=1
#endif

#ifndef UCSR0A
  extern int8_t UCSR0A;	// gets=1 puts=0 native=1
#endif

#ifndef UCSR0B
  extern int8_t UCSR0B;	// gets=2 puts=3 native=5
#endif

#ifndef UDR0
  extern int8_t UDR0;	// gets=0 puts=1 native=1
#endif

