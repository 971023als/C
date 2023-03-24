//****************
//	2023-03-24
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int score, day;
	printf("시험점수 결석일수 >>");
	scanf_s("%d%d", &score, &day);

	if (score >= 80 || day == 0 && score >= 60 && day <= 5) {
		printf("S"); 
	}

	else {
		printf("U");
	}

	return 0;
}