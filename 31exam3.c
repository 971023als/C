//****************
//	2023-03-31
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {

	int k, x, n;

	n = 5;

	printf("k>> ");
	scanf_s("%d", &k);

	for (int i = 1; i <= n; i++) {

		printf("\n정수를 입력하세요>>");
		scanf_s("%d", &x);
		if(x % 4 == 0)
		{
			printf("%d은(는) %d의 배수가 입니다\n\n", x, k);
		}

		else if (x % 4 != 0)
		{
			printf("%d은(는) %d의 배수가 아닙니다\n\n", x, k);
		}
			
		
	}

	return 0;
}