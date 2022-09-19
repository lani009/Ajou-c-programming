#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;
	double b;
	scanf("%d -> %lf", &a, &b);

	printf("%d %lf", a, b);
	return 0;
}