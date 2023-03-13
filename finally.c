//****************
//	2023-03-13
//****************

#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>
int main(void) {
	int x, y, z, sum;
	printf("정수값 세 개를 입력하세요>> ");
	scanf_s("%d%d%d", &x, &y, &z);

	sum = x + y + z;

    printf("합은 % d입니다.\n", sum);
	return 0;
}