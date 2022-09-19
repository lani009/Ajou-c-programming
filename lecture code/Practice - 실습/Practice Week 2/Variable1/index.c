#include <stdio.h>

int main(void) {
	int x = 5;	// 변수의 초기화
	int y;		// 변수 선언은 했으나, 초기화는 안함
	int z = x + y;	// 초기화 된 변수와 초기화 되지 않은 변수의 연산

	printf("%d", z);
}