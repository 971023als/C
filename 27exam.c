//****************
//	2023-03-27
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int score;

	printf("평균 점수>> ");

	scanf_s("%d", &score);

	if (score < 70) {
		printf("평점은 F입니다.\n");
	}

	else if (70 <= score && score < 80) {
		printf("평점은 C입니다.\n");
	}

	else if (80 <= score && score < 90) {
		printf("평점은 B입니다.\n");
	}
	
	else if (90 <= score) {
		printf("평점은 A입니다.\n");
	}
}