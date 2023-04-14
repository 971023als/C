//****************
//	2023-04-14
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main() {

    char A = 'A';
    int num1 = A;
    printf("문자 %c의 아스키 코드 값은 %d\n", A, num1);

    char Z = 'Z';
    int num2 = Z;
    printf("문자 %c의 아스키 코드 값은 %d\n", Z, num2);
    printf("알파벳 대문자의 아스키코드 값 범위는 %d ~ %d\n",
        num1, num2);

    char a = 'a';
    int num3 = a;
    printf("문자 %c의 아스키 코드 값은 %d\n", a, num3);

    char z = 'z';
    int num4 = z;
    printf("문자 %c의 아스키 코드 값은 %d\n", z, num4);
    printf("알파벳 소문자의 아스키코드 값 범위는 %d ~ %d\n",
        num3, num4);

    char zero = '0';
    int num5 = zero;
    printf("문자 %c의 아스키 코드 값은 %d\n", zero, num5);

    char nine = '9';
    int num6 = nine;
    printf("문자 %c의 아스키 코드 값은 %d\n", nine, num6);
    printf("숫자의 아스키코드 값 범위는 %d ~ %d\n",
        num5, num6);

    return 0;
}