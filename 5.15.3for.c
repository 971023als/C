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
    // 3단부터 5단까지
    for (int i = 0; i < 3; i++) {
        printf("i = %d:\n", i);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k <= 4; k++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}