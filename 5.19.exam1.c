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
    // 3단부터 5단까지
    for (int i = 2; i <= 8; i++) {
        if (i % 2 == 0) {
            printf("<구구단 %d단>\n", i);
            for (int j = 1; j <= 19; j++) {
                printf("%d * %d = %d\n", i, j, i * j);
            }
            printf("\n");
        }
    }
    return 0;
}