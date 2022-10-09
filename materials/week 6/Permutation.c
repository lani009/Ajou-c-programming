#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n1, r1, n2, r2, result1 = 1, result2 = 1;

    printf("n1, r1을 입력해 주세요\n>>> ");
    scanf("%d %d", &n1, &r1);

    printf("n2, r2을 입력해 주세요\n>>> ");
    scanf("%d %d", &n2, &r2);

    for (int i = 0; i <= r1 - 1; i++) {
        result1 *= n1 - i;
    }

    for (int i = 0; i <= r2 - 1; i++) {
        result2 *= n2 - i;
    }

    char sign;
    if (result1 > result2) {
        sign = '>';
    } else if (result1 < result2) {
        sign = '<';
    } else {
        sign = '=';
    }

    printf("%d P %d %c %d P %d\n", n1, r1, sign, n2, r2);
    return 0;
}