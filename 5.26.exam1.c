//****************
//	2023-05-26
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>

int main() {

    double square, circle, triangle, result;

    printf("네모 - 동그라미 * 세모 = ? \n");
    printf("네모 동그라미 세모>> ");
    scanf_s("%lf %lf %lf", &square, &circle, &triangle);

    result = square - (circle * triangle);

    printf("%.2lf - %.2lf * %.2lf = %.2lf\n", square, circle, triangle, result);

    double x1, x2, final;

    return 0;
}