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

void print_title(void);

void print_title1(void);

int get_int(void) {
    return 0;
}

// 인트로
void print_title(void)
{
    printf("===두 정수를 더하는 프로그램===\n\n");
}

int sum(int x, int y) {
    int res = x + y;
    return res;
}

// 인트로 1
void print_title1(void)
{
    printf("===두 정수를 뺴는 프로그램===\n\n");
}

int sub(int a, int b) {
    int result1 = a - b;
    return result1;
}

int main(void) {

    print_title();

    int n1 = get_int();
    int n2 = get_int();
    int result = sum(n1, n2);
    printf("%d\n", result);

    print_title1();


    int n3 = get_int();
    int n4 = get_int();
    int result1 = sub(n3, n4);
    printf("%d\n", result1);

    return 0;
}