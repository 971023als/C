//****************
//	2023-05-19
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h> 



void print_patterns(int n) {
    if (1 <= n && n < 10) {

        printf("n = ");
        scanf_s("%d", &n);
        // Pattern 1
     
            for (int i = 1; i <= 5; i += 2) {
                for (int j = 0; j < i; j++)
                    printf("*");
                printf("\n");
            }
   
        printf("\n");


        printf("n = ");
        scanf_s("%d", &n);
        // Pattern 2
        for (int i = 1; i < 2 * n; i += 2) {
            for (int j = 0; j < i; j++)
                printf("*");
            printf("\n");
        }
        printf("\n");


        printf("n = ");
        scanf_s("%d", &n);
        // Pattern 3
        if (n >= 3) {
            for (int i = n; i > 0; i--) {
                for (int j = i; j > 0; j--)
                    printf("*");
                printf("\n");
            }
        }
        printf("\n");

        printf("n = ");
        scanf_s("%d", &n);
        // Pattern 4
        for (int i = n; i > 0; i--) {
            for (int j = i; j > 0; j--)
                printf("*");
            printf("\n");
        }
        printf("\n");

        
    }
    else {
        printf("1~9 사이 입력.\n");
    }
}

int main() {
    print_patterns(5);
    print_patterns(3);
    return 0;
}