//
// Created by hezhi on 2016/8/31 0031.
//

#include "www_bugke_com_ndkdemo_NDKDemo.h"

/*
 * Class:     www_bugke_com_ndkdemo_NDKDemo
 * Method:    getNDKDemoText
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_www_bugke_com_ndkdemo_NDKDemo_getNDKDemoText
        (JNIEnv *ven, jclass plam){
    return ven->NewStringUTF(" 来自 NDKDemo-OS 返回的 字符串");
}