//****************
//	2023-05-26
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>

int main() {

    double x1, x2, final;

    for (int i = 1;  i <= 3; i++) {

        printf("x1 x2 = ");
        scanf_s("%lf %lf", &x1, &x2);

        if (x1 >= x2) {
            final = x1 - x2;
            printf("x1과 x2 사이의 거리는 %.2lf\n ", final);
        }

        else if (x1 < x2) {
            final = x2 - x1;
            printf("x1과 x2 사이의 거리는 %.2lf\n ", final);
        }
    }

    return 0;
}