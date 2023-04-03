//****************
//	2023-04-03
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	char gender, initial;
	printf("성별과 이니셜 첫 글자를 입력하세요>> ");
	scanf_s("%c", &gender, 1); 
    getchar();
    scanf_s("%c", &initial, 1); 
	printf("당신의 성별은 %c이고 이니셜은 %c입니다.", 
		gender, initial);
	return 0;
}