#include <jni.h>
#include "forfun_tastendk_Foo.h"

JNIEXPORT jstring JNICALL Java_forfun_tastendk_Foo_hello
  (JNIEnv *env, jobject obj){
    return (*env)->NewStringUTF(env, "Hello from JNI");
  }
