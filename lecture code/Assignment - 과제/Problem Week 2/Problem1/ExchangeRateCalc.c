#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double won, rate;
	double dollar;

	printf("��ȭ �ݾ��� �Է����ּ���.\n>> ");
	scanf("%lf", &won);

	printf("ȯ���� �Է����ּ���.\n>>>");
	scanf("%lf", &rate);

	dollar = won / rate;

	printf("��ȭ�ݾ�: %lf, ȯ��: %lf  ��  �޷� �ݾ� %lf", won, rate, dollar);

	return 0;
}