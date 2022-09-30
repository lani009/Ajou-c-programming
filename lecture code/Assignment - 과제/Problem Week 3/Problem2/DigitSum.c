#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x;
	scanf("%d", &x);

	int sum = 0;

	sum += x / 10000;
	x -= (x / 10000) * 10000;
	sum += x / 1000;
	x -= (x / 1000) * 1000;
	sum += x / 100;
	x -= (x / 100) * 100;
	sum += x / 10;
	x -= (x / 10) * 10;
	sum += x;

	printf("%d\n", sum);

	return 0;
}