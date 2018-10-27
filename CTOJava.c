#include<stdlib.h>
#include<stdio.h>
#include<jni.h>
//#define _JNI_IMPORT_OR_EXPORT_ JNIIMPORT

JNIEnv* create_jvm(JavaVM **java)

{

	JNIEnv *env;
	JavaVMInitArgs args;
	JavaVMOption options;
	int ret;
	
	args.version = JNI_VERSION_1_6;
	args.nOptions = 1;
	args.options = &options;
	args.ignoreUnrecognized =0;
	
	options.optionString = "-Djava.class.path=C:\\Users\\Jade\\Desktop\\myjava.java";
	
	ret = JNI_CreateJavaVM(java,(void**)&env, &args);
	
	if(ret < 0 || !env)
	{
		printf("unable to lunch JVM %d\n", ret);
		
	}
	else{
		printf("Lauched JVM\n");
	}
	return env;
}

int main(int argc, char * argv[])
{

	JavaVM  *jvm;
	JNIEnv *env;
	
	jclass myclass;
	jmethodID main_method;
	jmethodID addnumber_method;
	
	jint a_num =5;
	jint b_num =3;
	
	env  = create_jvm(&jvm);
	
	if(env == NULL)
	{
		exit(1);
	}
	
	myclass = (*env)->FindClass(env, "myjava");
	main_method = (*env)->GetStaticMethodID(env, myclass, "main", "([Ljava/lang/String;)V");
	addnumber_method = (*env)->GetStaticMethodID(env, myclass, "add_number", "(II)I");
	(*env)->CallStaticVoidMethod(env, myclass, main_method, NULL);
	printf("sum = %d\n", (*env) -> CallStaticIntMethod(env, myclass, addnumber_method, a_num, b_num));
	return 0;
	}
