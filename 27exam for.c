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
	for (int i = 1; i <= 3; i++) {
		printf("정수를 입력하세요>> ");
		scanf_s("\n%d", &n);
		printf("%d\n",n);
	}

	return 0;
}