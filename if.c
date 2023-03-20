//****************
//	2023-03-20
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int x;

	printf(">> ");

	scanf_s("%d", &x);
	if (x > 10) {
		printf("%d은(는) 10보다 큽니다.\n", x);
	}

	else {
		printf("%d은(는) 10보다 작습니다.\n", x);
	}
	return 0;
}