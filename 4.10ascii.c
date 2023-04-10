//****************
//	2023-04-10
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) { // 1번

	char ch1;

	printf("알파벳 대문자 입력>>");
	scanf_s("%c", &ch1, 1); // '1'
	char ch2 = ch1 + 32;
	printf("알파벳 '%c'의 소문자는 '%c'입니다.", ch1, ch2);

	return 0;
}