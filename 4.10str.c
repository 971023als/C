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
	scanf_s("%s", str, sizeof(str));
	printf("문자 배열 str에 저장된 문자열은 : %s\n", str);
	return 0;
}