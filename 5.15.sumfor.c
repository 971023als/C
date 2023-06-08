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
        int num[5] = { 1, 2, 3, 4, 5 };

        int sum = 0;
        for (int j = 0; j < 5; j++) {
            printf("num[%d] =", j);
            scanf_s("%d", &num[j]);
            sum += num[j];
        }
        printf("\n");
        printf("sum = %d\n", sum);
    }
    return 0;
}