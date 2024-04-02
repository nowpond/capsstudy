#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x, y;
    char z;

    printf("두 개의 정수를 입력하시오:");
    scanf("%d %d", &x, &y);

    printf("연산을 선택하시오(+, -, *, /):");
    scanf(" %c", &z);

    if (z == '+')
        printf("결과: %d", x + y);
    else if (z == '-')
        printf("결과: %d", x - y);
    else if (z == '*')
        printf("결과: %d", x * y);
    else if (z == '/')
        printf("결과: %d", x / y);
    else
        printf("잘못된 연산자입니다.\n");

    return 0;
}