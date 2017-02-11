#include <jni.h>
#include "include/native-lib.h"

JNIEXPORT jstring JNICALL Java_forfun_tastendk_Foo_hello(JNIEnv *env, jobject obj) {
    return (*env).NewStringUTF("Hello from JNI");
}
