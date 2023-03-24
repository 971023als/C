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

	if (a <= b) {		
		printf("a = %d, b = %d", a, b); 
	}

	if (a > b) {		

		tmp = a;
		a = b;
		b = tmp;

		printf("a = %d, b = %d", a, b); 
	}

	return 0;
}