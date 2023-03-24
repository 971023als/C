//****************
//	2023-03-24
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int a, b;
	printf("a b >>");
	scanf_s("%d%d", &a, &b);

	if (a > b) {		//b가 0이면
		printf("%d", a); // 0으로 추력
	}
		
	if (a == b) {		//b가 0이면
		printf("a,b 값이 일치합니다 "); // 0으로 추력
	}

	if (a < b) {		//b가 0이면
		printf("%d", b); // 0으로 추력
	}

	return 0;
}