//****************
//	2023-03-31
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {

	int x, mult, n;

	n = 5;

	mult = 1;
	printf("곱 = %d\n ",mult);

	for (int i = 1; i <= n; i++) {
		printf("정수를 입력하세요>>");
		scanf_s("%d", &x);
		mult *= x;
		printf("곱 = %d\n", mult);
	}

	return 0;
}