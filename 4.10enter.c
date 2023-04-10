//****************
//	2023-04-10
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	int x = 1;
	printf("x = %d\n", x);
	printf("엔터 키를 누르세요...");
	getchar();
	x = x + 1;
	printf("x = %d\n", x);
	printf("엔터 키를 누르세요...");
	getchar();
	x = x + 1;
	printf("x = %d\n", x);
	return 0;
}