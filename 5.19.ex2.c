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

    for (int i = 2; i < 12; i += 3) {
        printf("%d\n", i);
    }

    for (int i = 2; i <= 12; i += 3) {
        printf("%d\n", i);
    }

    return 0;
}