//****************
//	2023-04-07
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	char a, c;
	int b, d;

	for (int i = 1; i <= 5; i++) {
		printf("문자-정수-문자-정수 입력>>");
		scanf(" %c%d%c%d", &a, &b, &c, &d); // %c 앞에 공백을 추가하여 이전 입력에서 남은 줄바꿈 문자를 무시합니다.
		printf("입력한 값은 [%c] [%d] [%c] [%d] 입니다.\n", a, b, c, d);
	}

	return 0;
}