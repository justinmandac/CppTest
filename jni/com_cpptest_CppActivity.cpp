/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "com_cpptest_CppActivity.h"
#include "buffer.h"
#include <android/log.h>
#include <iostream>
#include <queue>

using std::queue;


#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "CPP-TEST", __VA_ARGS__))

/*
 * Class:     com_cpptest_CppActivity
 * Method:    codeTest
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_cpptest_CppActivity_codeTest (JNIEnv *env)
{
	queue<struct inputBuffer> dataBuffer;
	queue<int> x;
	LOGI("GREETINGS FROM THE NATIVE SIDE!");
	x.push(1);
	LOGI("Value: %d",x.front());
	x.pop();

}

