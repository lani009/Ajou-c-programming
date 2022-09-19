#include <stdio.h>
#include <limits.h>

int main(void) {
	int a = 2147483647u;
	long b = 2147483647L;

	printf("%ld\n", a);
	printf("%ld\n", b);
	return 0;
}