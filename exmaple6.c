//****************
//	2023-03-17
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int junhee_apples = 5;
	int hiyeon_apples = 10;
	int minsu_apples = 15;

	printf("준희 = %d, 희연 = %d, 민수 = %d \n", 
		junhee_apples, hiyeon_apples, minsu_apples);

	// 희연이 준희에게 사과 5개 준다.
	hiyeon_apples = hiyeon_apples - 5;
	junhee_apples = junhee_apples + 5;

	printf("준희 = %d, 희연 = %d, 민수 = %d \n", 
		junhee_apples, hiyeon_apples, minsu_apples);

	// 민수는 준희에게 사과 3개를 준다.
	minsu_apples = minsu_apples - 3;
	junhee_apples = junhee_apples + 3;

	printf("준희 = %d, 희연 = %d, 민수 = %d \n", 
		junhee_apples, hiyeon_apples, minsu_apples);

	// 민수는 희연이에게 4개를 준다.
	minsu_apples = minsu_apples - 4;
	hiyeon_apples = hiyeon_apples + 4;

	printf("준희 = %d, 희연 = %d, 민수 = %d \n",
		junhee_apples, hiyeon_apples, minsu_apples);

	return 0;
}