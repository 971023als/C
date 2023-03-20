//****************
//	2023-03-20
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int a, b;

	printf("a b >> ");

	scanf_s("%d %d", &a, &b);
	if (b == 0) {		//b가 0이면
		printf("0으로 나눌 수 없습니다\n"); // 0으로 추력
	}

	else {			// b가 0이 아니면
		int quot = a / b;		// a를 b로 나눠서 출력
		printf("%d / %d = %d \n", a, b, quot );
	}

	return 0;
}