//****************
//	2023-03-20
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int x, sum = 0;

	printf("x = "); scanf_s("%d", &x);
	sum += x;
	printf("sum= %d\n", sum);

	printf("x = "); scanf_s("%d", &x);
	sum += x;
	printf("sum= %d\n", sum);

	printf("x = "); scanf_s("%d", &x);
	sum += x;
	printf("sum= %d\n", sum);

	return 0;
}