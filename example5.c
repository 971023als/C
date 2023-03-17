//****************
//	2023-03-17
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int day,year, month, lastday;
	printf("무인도에 며칠동안 표류했습니까?");
	scanf_s("%d", &day);

	year = day / 360;   // 750 =

	month = (day / 30) - (year * 12);

	lastday = day - (year * 360) - (month * 30) ;

	printf("%d일은 %d년 %d개월 %d일입니다.\n", 
                day, year ,month, lastday);

	return 0;
}