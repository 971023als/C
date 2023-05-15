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
    int num[5] = { 1, 2, 3, 4, 5 };

    int sum = 0;
    for (int j = 0; j < 5; j++) {
        sum += num[j];
        printf("%d", num[j]);
    }
    printf("\n");
    printf("sum = %d\n", sum);
    return 0;
}