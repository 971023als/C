//****************
//	2023-05-19
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h> 



int main(void) {
    int m, n = 0;

    printf("n m = ");
    scanf_s("%d%d", &n, &m);

    if (1 <= n && m < 10) {
        for (int i = 0; i < n; i++) {
            printf("\n");
            for (int i = 0; i < m; i++) {
                printf("1");
            }
        }
    }

    return 0;
}