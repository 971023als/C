//****************
//	2023-05-26
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    int n = 123, r;

    while (1) {
        r = n % 10;
        n = n / 10;
        printf("%d\n", r);
        getchar();
    }

    return 0;
}