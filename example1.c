//****************
//	2023-03-17
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int x, y, tmp;

	// 100, 200 을 저장
	x = 100;
	y = 200;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	tmp = x;
	x = y;
	y = tmp;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}