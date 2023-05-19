//****************
//	2023-05-19
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h> 

int sum_1_to_n(int); 

int sum_1_to_n(int n) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result += i;
    }
    return result;
 }



int main(void) {
    int m, n = 0;

    printf("m = ");
    scanf_s("%d", &m);

    for (int i = 0; i < m; i++) {
        printf("n = ");
        scanf_s("%d", &n);
        int result = sum_1_to_n(n);
        printf("%d\n", result);
    }

    return 0;
}