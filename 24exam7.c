//****************
//	2023-03-24
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int a, b, c, d, odd_cnt;

	odd_cnt = 0;

	printf("정수입력 >>");
	scanf_s("%d", &a);

	if (a % 2 == 1) {
		odd_cnt = odd_cnt + 1;
	}

	printf("정수입력 >>");
	scanf_s("%d", &b);

	if (b % 2 == 1) {
		odd_cnt = odd_cnt + 1;
	}

	printf("정수입력 >>");
	scanf_s("%d", &c);

	if (c % 2 == 1) {
		odd_cnt = odd_cnt + 1;
	}

	printf("정수입력 >>");
	scanf_s("%d", &d);

	if (d % 2 == 1) {
		odd_cnt = odd_cnt + 1;
	}

	printf("홀수는 %d개입니다.", odd_cnt);

	return 0;
}