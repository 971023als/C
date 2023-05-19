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
    for (int i = 3; i <= 5; i++) {
        printf("<구구단 %d단>\n", i);
        for (int j = 1; j <= 19; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}