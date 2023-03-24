//****************
//	2023-03-24
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int k, r;
	printf("k r >>");
	scanf_s("%d%d", &k, &r);

	printf("%d\n", k); 

	printf("%d\n", k * r); 

	printf("%d\n", k * r * r); 

	printf("%d\n", k * r * r * r);

	printf("%d\n", k * r * r * r * r);

	return 0;
}