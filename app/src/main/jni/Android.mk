   LOCAL_PATH := $(call my-dir)
    include $(CLEAR_VARS)

    LOCAL_MODULE := NDKDemo-OS
    LOCAL_SRC_FILES := www_bugke_com_ndkdemo_NDKDemo.cpp
    include $(BUILD_SHARED_LIBRARY)