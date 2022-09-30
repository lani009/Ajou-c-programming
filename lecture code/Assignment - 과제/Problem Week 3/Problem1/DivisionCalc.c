#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int dividend, divisor;
	scanf("%d %d", &dividend, &divisor);

	printf("%d / %d = %d...%d\n", dividend, divisor, dividend / divisor, dividend % divisor);
	printf("%d / %d = %lf\n", dividend, divisor, ((double)dividend) / divisor);

	return 0;
}