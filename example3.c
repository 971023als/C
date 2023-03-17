//****************
//	2023-03-17
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char negative_sign = '-';
	int sqr, circle, tri, fun;
	printf("네모 %c 동그라미 * 세모 = ?\n", 
	            negative_sign);
	printf("네모, 동그라미, 세모에 들어갈 정수를 입력하세요>>");
	scanf_s("%d%d%d", &sqr, &circle, &tri);

	fun = sqr - circle * tri;

	printf("%d - %d * %d = %d입니다.\n",
	            sqr, circle, tri, fun);
	
	return 0;
}