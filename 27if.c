//****************
//	2023-03-27
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int n, abs;

	printf("n = ");

	scanf_s("%d", &n);

	if (n < 0) {
		abs = -n;
		printf("%d는 음수입니다.\n", n);
	}

	else {
		abs = n;

		if (n > 0)
			printf("%d는 양수입니다.\n", n);

		else
			printf("0입니다.\n");

	}
	printf("%d의 절댓값은 %d입니다.\n", n, abs);

}