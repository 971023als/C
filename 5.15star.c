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
        for (int j = 0; j < 10; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++) {
        printf("i = % d:", i);
        for (int j = 1; j <= i; j++) {
            printf("(% d, % d)", I, j);
        }
        printf("\n");
    }

    return 0;
}