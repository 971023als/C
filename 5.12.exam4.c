//****************
//	2023-05-12
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h> 


int main(void) {

    //1)

    for (int i = 1; i <= 15; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    //2)

    for (int i = 10; i >= 1; i -= 1) {
        printf("%d ", i);
    }

    printf("\n");

    //3)

    for (int i = 4; i <= 32; i += 4) {
        printf("%d ", i);
    }

    printf("\n");

    //4)

    for (int i = 18; i >=0; i -= 3) {
        printf("%d ", i);
    }

    printf("\n");

    //5)

    for (int i = 80; i >= -100; i -= 30) {
        printf("%d ", i);
    }

    printf("\n");

    //6)

    for (int i = 3; i <=729; i *= 3) {
        printf("%d ", i);
    }

    printf("\n");

    //7)

    for (int i = 256; i <= 1; i /= 2) {
        printf("%d ", i);
    }

    return 0;
}