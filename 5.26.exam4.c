//****************
//	2023-05-26
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

int main() {

    int x;
    int i = 1;

    do {
        printf("양의 정수>> ");
        scanf_s("%d", &x);
        if (x % 2 == 0) {
            printf("%d은(는) 짝수\n", x);
        }
        else {
            printf("%d은(는) 홀수\n", x);
        }
        i++;
    } while (i <= 5);

    return 0;
}