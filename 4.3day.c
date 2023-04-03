//****************
//	2023-04-03
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {

    int a, b, larger = 0;

    while (true) {
        printf("a b >> ");
        scanf_s("%d %d", &a, &b);

        if (a == 0 && b ==0) {
            printf("종료합니다.\n");
            break;     
        }

        else if (a > b) {
            larger = a;     
        }

        else {
            larger = b;     
        }

        printf("%d\n", larger);
    }
    return 0;
}