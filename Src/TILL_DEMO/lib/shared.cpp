// like main
#include "shared.h"
#include <iostream>

/*
#include "../java/JavaToC.h"
JNIEXPORT void JNICALL Java_JavaToC_f(JNIEnv *env, jobject javaobj) 
{
	printf("Hello World: From C");
	return;
}
*/
void f() {
    std::cout << "function F()444\n";
//    tcp_com("This is test\n");
}

X::X() {
    std::cout << "function--X()\n";
}

void X::mX() {
    std::cout << "function---MX()\n";
}
