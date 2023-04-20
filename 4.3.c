//****************
//	2023-04-03
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	char gender;

	printf("성별>>");
	scanf_s("%c", &gender, 1);

	switch (gender) {

	case 'M': printf("남자입니다."); break;
	case 'm': printf("남자입니다."); break;
	case 'f': printf("여자입니다."); break;
	case 'F': printf("여자입니다."); break;

	default: printf("잘못 입력했습니다.\n"); break;

	}

	return 0;
}