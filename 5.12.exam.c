//****************
//	2023-05-12
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>

int main(void) {

    int num, sum = 0;

    for (int i = 0; i < 5; i++) {
        printf("정수>>");
        scanf("%d", &num);

        if (num < 0) {
            printf("음수가 입력되어 종료합니다.\n");
            break;
        }

        sum += num;
    }

    printf("%d\n", sum);

    return 0;
}