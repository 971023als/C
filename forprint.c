//****************
//	2023-03-27
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	int n;
	printf("n = ");
	scanf_s("%d", &n);
	int x = 0;
	printf("초기값: x=%d\n", x);
	printf("===반복문 시작===\n");

	for (int i = 1; i <= n; i++) {
		x++;
		printf("x=%d\n", x);
	}

	return 0;
}