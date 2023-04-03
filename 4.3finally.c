//****************
//	2023-04-03
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	char ch;
	printf("문자 한 개 입력>> ");
	scanf("%c", &ch);
	printf("입력 받은 문자는 %c 입니다.\n", ch);
	return 0;
}