#include <stdio.h>

int main(void) {
	int a = 7;
	int b = 4;

	printf("%lf\n", a / b);
	printf("%lf\n", a / (double)b);
}