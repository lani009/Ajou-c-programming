#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	unsigned int ip_in_bin;
	scanf("%ud", &ip_in_bin);

	int a, b, c, d;
	int mask = 0xFF;
	a = (ip_in_bin & (mask << 24)) >> 24;
	b = (ip_in_bin & (mask << 16)) >> 16;
	c = (ip_in_bin & (mask << 8)) >> 8;
	d = (ip_in_bin & (mask << 0)) >> 0;

	printf("%d.%d.%d.%d\n", a, b, c, d);
	return 0;
}