#include <stdio.h>

int main(void) {
	unsigned int word = 1095389013;

	char code1 = (word & (0b11111111 << 24)) >> 24;
	char code2 = (word & (0b11111111 << 16)) >> 16;
	char code3 = (word & (0b11111111 << 8)) >> 8;
	char code4 = (word & (0b11111111 << 0)) >> 0;

	printf("%c%c%c%c\n", code1, code2, code3, code4);
	return 0;
}
