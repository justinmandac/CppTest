LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE    := test
LOCAL_SRC_FILES := com_cpptest_CppActivity.cpp
LOCAL_LDLIBS := -llog
LOCAL_C_INCLUDES += ${NDKROOT}/sources/cxx-stl/stlport/stlport

include $(BUILD_SHARED_LIBRARY)