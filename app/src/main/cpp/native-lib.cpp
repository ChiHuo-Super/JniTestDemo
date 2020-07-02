#include <jni.h>
#include <string>

#include "test_one.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_demo_jnitestdome_MainActivity_stringFromJNI(JNIEnv *env, jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_demo_jnitestdome_MainActivity_getTestData(JNIEnv *env, jobject thiz, jint values_int) {
    std::string temp = getTestData(values_int);
    return env->NewStringUTF(temp.c_str());
}
