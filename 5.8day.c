//****************
//	2023-05-08
//****************

#include <stdio.h>
#include <string.h>
#include <limits.h>
#define _CRT_SECURE_NO_WARNINGS

int weight[5] = { 0 };

int min(void) {
    int result = INT_MAX;
    for (int i = 0; i < 5; i++) {
        if (result > weight[i]) {
            result = weight[i];
        }
    }
    return result;
}

int main(void) {
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &weight[i]);
    }

    printf("몸무게: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", weight[i]);
    }

    printf("\n");

    int result = min();
    printf("가장 가벼운 사람은 %d\n", result);

    return 0;
}
