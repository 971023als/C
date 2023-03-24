//****************
//	2023-03-24
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int x, y;
	printf("x y >>");
	scanf_s("%d%d", &x, &y);

	bool cond1 = x == y || x > (y + 2);
	bool cond2 = x != y && (x * 2) <= y;
	printf(" 1) x와 y가 같거나 x가 (y+2)보다 크다.: %d \n", 
		cond1);

	printf(" 2) x와 y가 다르고 (x * 2)는 y보다 작거나 같다: %d\n",
		cond2);

	printf(" 3) 1) 또는 2)이다.: %d\n",
		cond1 || cond2);

	return 0;
}