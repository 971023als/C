//****************
//	2023-03-31
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	int n;
	printf("n = ");
	scanf_s("%d", &n);

	int x;

	for (int i = 1; i <= n; i++) {

		printf("\n\n정수를 입력하세요>>");
		scanf_s("%d", &x);;

		if (x > 0)
		{
			printf("\n%d은(는) 양의 정수.\n", x);
		}

		if (x == 0)
		{
			printf("\n0입니다.\n");
		}

		else if (x < 0)
		{
			printf("\n%d은(는) 음의 정수.\n", x);
		}

	}

	return 0;
}