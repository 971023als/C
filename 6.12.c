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

    if (x < y) {
        printf("작은 값 %d\n", x);
    }
    else if (x > y) {
        printf("작은 값 %d\n", y);
    }
    else { // x == y
        printf("두 수는 같습니다: %d\n", x);
    }

    return 0;
}