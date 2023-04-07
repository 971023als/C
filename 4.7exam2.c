//****************
//	2023-04-07
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	int age;
	printf("나이>> ");
	scanf_s("%d", &age);

	switch (age) {
	
	case 18:  printf("청소년입니다.\n"); break;

	case 20:  printf("성인입니다.\n"); break;

	case 65:  printf("노인입니다.\n"); break;

	default:  printf("모르겠습니다.\n");

	}

	return 0;
}