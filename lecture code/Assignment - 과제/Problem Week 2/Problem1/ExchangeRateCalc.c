#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double won, rate;
	double dollar;

	printf("원화 금액을 입력해주세요.\n>> ");
	scanf("%lf", &won);

	printf("환율을 입력해주세요.\n>>>");
	scanf("%lf", &rate);

	dollar = won / rate;

	printf("원화금액: %lf, 환율: %lf  →  달러 금액 %lf", won, rate, dollar);

	return 0;
}