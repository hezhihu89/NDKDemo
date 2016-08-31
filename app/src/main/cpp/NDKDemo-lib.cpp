//
// Created by hezhi on 2016/8/31 0031.
//
#include <jni.h>
#include <string>

extern "C"
jstring
Java_www_bugke_com_ndkdemo_MainActivity_getPhone(JNIEnv *env, jobject instance) {

    return env->NewStringUTF("NDKDemo-lib getPhone()");
}