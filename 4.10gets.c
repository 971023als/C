//****************
//	2023-04-10
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	char str[100];
	printf("문자열 입력>> ");
	gets_s(str, sizeof(str));
	printf("<%s>\n", str);
	return 0;
}