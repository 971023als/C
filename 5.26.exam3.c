//****************
//	2023-05-26
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    double x;

    while (1) {
        printf("실수 입력>> ");
        scanf_s("%lf", &x);

        if (x < 0) {
            printf("계산할 수 없습니다. 종료합니다.\n");
            break;
        }

        printf("%.2lf의 제곱근은 %.2lf입니다.\n", x, sqrt(x));
    }

    return 0;
}