#include <stdio.h>
#include <stdbool.h>

int main(void) {
	double a = 2.7;
	double b = 5.8;

	bool result1 = a > b;
	bool result2 = a < b;

	bool test = true && false || result1;

	printf("%d %d %d\n", result1, result2, test);
	// 0 1 À» Ãâ·Â
}