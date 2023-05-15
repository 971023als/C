//****************
//	2023-05-15
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h> 


int main(void) {
    for (int i = 1; i <= 3; i++) {
        printf("i=%d:", i);
        for (int j = 1; j <= 2; j++) {
            printf("i=%d: (%d, %d)\n ", i, i, j);
        }
        printf("\n");
    }
    return 0;
}