//****************
//	2023-06-12
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    int x, y;
    printf("x, y 입력:");
    scanf_s("%d %d", &x, &y);
    int result = x - y;

    printf("%d - %d = %d\n", x, y, result);
    printf("0x%X - 0x%X = 0x%X\n", x, y, result);

    return 0;
}