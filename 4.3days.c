//****************
//	2023-04-03
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	char ch;
	printf("성별을 입력하세요(M/F)>> ");
	scanf_s("%c", &ch, 1);
	printf("당신의 성별은 %c입니다\n", ch);
	return 0;
}