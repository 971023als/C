//****************
//	2023-03-20
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int a;

	int b;

	printf("a b >> ");

	scanf_s("%d %d", &a, &b);
	if (b == 0) {
		printf("0으로 나눌 수 없습니다\n");
	}

	else {
		printf("%d  \n", a / b );
	}

	return 0;
}