#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x, y;
    char z;

    printf("�� ���� ������ �Է��Ͻÿ�:");
    scanf("%d %d", &x, &y);

    printf("������ �����Ͻÿ�(+, -, *, /):");
    scanf(" %c", &z);

    if (z == '+')
        printf("���: %d", x + y);
    else if (z == '-')
        printf("���: %d", x - y);
    else if (z == '*')
        printf("���: %d", x * y);
    else if (z == '/')
        printf("���: %d", x / y);
    else
        printf("�߸��� �������Դϴ�.\n");

    return 0;
}