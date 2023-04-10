//****************
//	2023-04-10
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) { // 1번

	char ch;

	printf("문자 하나를 입력하세요>>");
	scanf_s("%c", &ch, 1); // '1'
	printf("문자 %c의 아스키 코드는 %d입니다.", ch, ch);

	return 0;
}