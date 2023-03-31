//****************
//	2023-03-31
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main() {
    int id;

    while (1) {
        printf("ID>> ");
        scanf("%d", &id);

        int first_digit = id / 10000;

        if (first_digit == 1) {
            printf("학생\n");
        }
        else if (first_digit == 2) {
            printf("교수\n");
        }
        else if (first_digit == 3) {
            printf("직원\n");
        }
        else {
            printf("강사\n");
        }
    }

    return 0;
}