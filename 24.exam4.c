//****************
//	2023-03-24
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int a, b, tmp;
	printf("a b >>");
	scanf_s("%d%d", &a, &b);

	if (a <= b) {		//b가 0이면
		printf("a = %d, b = %d", a, b); // 0으로 추력
	}

	if (a > b) {		//b가 0이면

		tmp = a;
		a = b;
		b = tmp;

		printf("a = %d, b = %d", a, b); // 0으로 추력
	}

	return 0;
}