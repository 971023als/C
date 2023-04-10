//****************
//	2023-04-10
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	char name[100];
	printf("본인 이름을 입력하세요>> ");
	scanf_s("%s", name, 100);
	printf("당신의 이름은 %s입니다.\n", name);
	return 0;
}