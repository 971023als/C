//****************
//	2023-03-24
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int a, b, c;

	printf("정수입력 >>");
	scanf_s("%d", &a);
	printf("product = %d\n", a);

	printf("정수입력 >>");
	scanf_s("%d", &b);
	printf("product = %d\n", a * b);

	printf("정수입력 >>");
	scanf_s("%d", &c);
	printf("product = %d\n", a * b *c);


	return 0;
}