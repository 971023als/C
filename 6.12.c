//****************
//	2023-06-12
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    int x = 10, y = 20;

    int smaller = (x < y) ? x : y;

    printf("작은 값 %d\n", smaller);

    return 0;
}