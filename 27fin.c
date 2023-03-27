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

	int sum = 0, x;
	printf("초기값: sum=%d\n", sum);

	for (int i = 1; i <= n; i++) {
		printf("정수를 입력하세요>>", x);
		scanf_s("%d", &x);
		sum +=x ;
		printf("\nsum=%d\n", sum);
	}

	return 0;
}
