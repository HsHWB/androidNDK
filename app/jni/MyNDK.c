#include <jni.h>
#include <stdio.h>  
jstring
Java_com_example_myndk_MyNDK_print  (JNIEnv *env, jobject obj) {
	printf("the project which i write is preparing for java-ndk");
	return (*env)->NewStringUTF(env, "Hello from JNI ! ");
}
