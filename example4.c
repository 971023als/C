//****************
//	2023-03-17
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int width, height, area_tri, area_rect;
	printf("너비(밑변)의 길이는 얼마입니까?");
	scanf_s("%d", &width);
	printf("높이는 얼마입니까?");
	scanf_s("%d", &height);

	area_tri = width * height * 1/2;

	area_rect = width * height;

	printf("밑변이 %d, 높이가 %d인 삼각형의 넓이는 %d입니다.\n", 
	                width, height, area_tri);

	printf("밑변이 %d, 높이가 %d인 사각형의 넓이는 %d입니다.\n", 
	               width, height, area_rect);

	return 0;
}