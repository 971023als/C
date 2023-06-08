//****************
//	2023-05-15
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h> 


int main(void){

    for (int i = 0; i < 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 6; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 6; i++) {
        for (int j = 1; j <= 5-i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d", j + i);
        }
        printf("\n");
    }

    return 0;
}