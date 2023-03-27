//****************
//	2023-03-27
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int age;
	printf("나이>> ");
	scanf_s("%d", &age);
	if (age <= 18) {
		printf("청소년입니다.\n");
	}
	else if (age < 65) {
		printf("성인입니다.\n");
	}
	else {
		printf("노인입니다.\n");
	}
}