#define _CRT_SECURE_NO_WANRINGS
#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &a);

	int temp = a;
	int a = b;
	int b = temp;

	printf("a: %d\n", a);
	printf("b: %d\n", b);
	return 0;
}