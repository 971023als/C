//****************
//	2023-04-03
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	char a, b, c;
	printf("문자 세 개 입력>> ");
	scanf_s("%c%c%c", &a, 1, &b, 1, &c, 1);
	printf("a=%c b=%c c=%c\n", a, b, c);
	return 0;
}