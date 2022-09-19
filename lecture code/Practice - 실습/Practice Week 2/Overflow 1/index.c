#include <stdio.h>
#include <limits.h>

int main(void) {
	int val = 0xFF12;
	int overflow_test = val + 1;

	printf("val = %d\n", val);
	printf("overflow_test = %d\n", overflow_test);
	return 0;
}