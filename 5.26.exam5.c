//****************
//	2023-05-26
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    int d1, d, upper_bound;

    printf("d1, d, upper_bound >>");
    scanf_s("%d %d %d", &d1, &d, &upper_bound);

    while (1) {
        d1 += d;
        if (d1 > upper_bound) break;
        printf("%d\n", d1);
    }

    return 0;
}