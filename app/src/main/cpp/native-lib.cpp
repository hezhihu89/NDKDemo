#include <jni.h>
#include <string>

extern "C"
jstring
Java_www_bugke_com_ndkdemo_MainActivity_getPhoneCpu(JNIEnv *env, jobject instance) {

    // TODO


    return env->NewStringUTF("native-lib getPhoneCpu()");
}

extern "C"
jstring
Java_www_bugke_com_ndkdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "native-lib Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
