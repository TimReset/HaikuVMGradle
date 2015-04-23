#ifdef __cplusplus
extern "C" {
#endif

#include "haikuJ2C.h"

#ifdef __cplusplus
#define JNIEXPORT extern "C"
#else
#define JNIEXPORT
#endif

#define JNICALL

typedef jint jfieldID;

//  fid = (*env)->GetStaticFieldID(env, cls, "si", "I");
#define PASTE3(a, b, c) a ## b ## c
#define GetStaticFieldID(env, cls, fname, ftype)	s0.i=((char*)(&allStatics.statics.PASTE3(cls, _, fname)) - (char*)(&allStatics)) +1
#define GetFieldID(env, cls, fname, ftype)			s0.i=offsetof(cls, fname) +1

  //arduino_tutorial_JNI_FieldAccess_#fid
#define GetStaticIntField(env, cls, fid)			s0.i=*(jint*)((char*)(&allStatics)+fid-1)
#define SetStaticIntField(env, cls, fid, value)		s0.i=1; *((jint*)((char*)(&allStatics)+fid-1)) = value

#define GetObjectField(env, obj, fid)				s0.v=*(jobject*)((char*)(obj)+fid-1)
#define SetObjectField(env, obj, fid, value)		s0.i=1; *((jobject*)((char*)obj+fid-1)) = value


#define GetStringUTFChars(env, jstr, isCopy)		s0.str=malloc(jstr->chars->length+1);\
	memcpy((*env)->s0.str, jstr->chars->array, jstr->chars->length);\
    ((char*)((*env)->s0.str))[jstr->chars->length]=0
#define ReleaseStringUTFChars(env, jstr, str)		s0.i=1; free(str)
#define NewStringUTF(env, string)					s0.str=(ldc_String*)GCalloc(&java_lang_String__class, sizeof(ldc_String)+strlen(string));\
  {\
    int length = strlen(string);\
    ldc_String* nstr=(*env)->s0.str;\
    nstr->chars=&(nstr->length);\
    setAllocsize(nstr->chars, sizeof(heap_t)+sizeof(array_t)+length);\
    nstr->chars->length=length;\
    memcpy(nstr->chars->array, string, length);\
  }


#ifdef __cplusplus
}
#endif
