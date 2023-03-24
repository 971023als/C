//****************
//	2023-03-24
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int a, b, c;
	printf("세 변의 길이 >>");
	scanf_s("%d%d%d", &a, &b, &c);

	if (a == b || b == c || c == a) {		
		printf("이등변삼각형이 입니다"); 
	}

	else {
		printf("이등변삼각형이 아닙니다");
	}

	return 0;
}