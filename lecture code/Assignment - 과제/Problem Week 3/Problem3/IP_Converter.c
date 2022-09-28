#include <stdio.h>

int main(void) {
	unsigned int ip_in_binary = 3232235521;

	int a = (ip_in_binary & (0xFF << 24)) >> 24;
	int b = (ip_in_binary & (0xFF << 16)) >> 16;
	int c = (ip_in_binary & (0xFF << 8)) >> 8;
	int d = (ip_in_binary & 0xFF);

	printf("%d.%d.%d.%d\n", a, b, c, d);

	return 0;
}