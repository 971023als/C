//****************
//	2023-05-08
//****************

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    for (int i = -20; i <= 20; i++) {
        if (i > 0) {
            printf("+%d ", i);
        }
        else {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}