//****************
//	2023-04-24
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>


// 두 정수를 더하는 함수
int sum(int, int);

int sum(int x, int y) {
    int res = x + y;
    return res;
}

int main(void) {
    int result = sum(10, 20);
    printf("%d\n", result);
    return 0;
}