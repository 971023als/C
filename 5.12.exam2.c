//****************
//	2023-05-12
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h> 

// g_seq 함수 추가
double g_seq(int n, int r) {
    return pow(n, r);
}

int main(void) {

    //1)

    for (int i = 2; i <= 1024; i *= 2) {
        printf("%d ", i);
    }

    //2)

    int n, r;
    printf("\n\nn r =");
    scanf("%d%d", &n, &r);

    for (int i = n; i <= pow(n, r); i *= n) {
        printf("%d ", i);
    }

    //3)

    printf("\n\n%d^%d = %.2f\n", n, r, g_seq(n, r));

    return 0;
}
