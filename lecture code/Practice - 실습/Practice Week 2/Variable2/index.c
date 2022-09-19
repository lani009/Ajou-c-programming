#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// (자료형) (변수명);	- 변수의 선언
	// (변수명) = (값);		- 변수의 초기화

	// (자료형) (변수명) = (값);	- 변수의 선언과 초기화를 동시에

	// 선언과 초기화를 동시에
	int a = 7;
	double k = 1.5;
	char str[] = "Hello";
	char c = 'Y';

	// 선언먼저, 초기화는 나중에
	int b;
	scanf("%d", &b);
}