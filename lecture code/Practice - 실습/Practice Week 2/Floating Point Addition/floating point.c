#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double a, b;

	scanf("%lf %lf", &a, &b);
	printf("%.20lf\n", a + b);

	return 0;
}