//****************
//	2023-03-24
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int x = 10, y = 20;

	printf("10은 20보다 크다: %d \n", 10 > 20);

	printf("x는 0보다 크다: %d\n", x > 0);

	printf("x는 50과 같다: %d\n", x == 50);

	printf("x는 100보다 작거나 같다: %d\n", x <= 100);

	printf("(x + 1)은 (y * 2)와 다르다: %d\n", (x + 1) != (y * 2));

	return 0;
}