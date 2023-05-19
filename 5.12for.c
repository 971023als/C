//****************
//	2023-05-12
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>

int main(void) {
    int n;
    printf("n =");
    scanf_s("%d", &n);

    //1)

    for (int i = n; i <= n * 6; i+=n) {
        printf("%d\n", i);
    }

    //2)

    for (int i = 1; i <= 6; i++) {
        printf("n = %d\n", n * 1 );
    }

    return 0;
}