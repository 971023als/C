//****************
//	2023-03-27
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	int m,n;

	printf("몇 번 반복합니까? ");
	scanf_s("%d", &m);

	for (int i = 1; i <= m; i++) {
		printf("정수를 입력하세요>> ");
		scanf_s("\n%d", &n);
		printf("%d\n",n);
	}

	return 0;
}