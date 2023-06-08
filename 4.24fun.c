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

// 두 정수를 뺴는 함수
int sub(int, int);


int sum(int x, int y) {
    int res = x + y;
    return res;
}

int sub(int a, int b) {
    int result1 = a - b;
    return result1;
}

int main(void) {
    int result = sum(10, 20);
    printf("%d\n", result);

    int result1 = sub(20, 10);
    printf("%d\n", result1);

    return 0;
}