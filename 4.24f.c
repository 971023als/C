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

// 정수 1개를 입력 받아서 3으로 나눈 나머지를 출력하는 함수
int per(int, int);

int sum(int x, int y) {
    int res = x + y;
    return res;
}

int sub(int a, int b) {
    int result1 = a - b;
    return result1;
}

int per(int c) {
    int result2 = c % 3 ;
    return result2;
}

int main(void) {
    int result = sum(10, 20);
    printf("%d\n", result);

    int result1 = sub(20, 10);
    printf("%d\n", result1);

    scanf_s("%d", &c);
    int result2 = per(c);
    printf("%d\n", result2);

    return 0;
}