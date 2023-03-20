//****************
//	2023-03-20
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int x = 10; 

	int y = 10;
		
	int delta;


	printf("x = %d , y = %d\n", x, y);

	printf("delta = "); scanf_s("%d", &delta);
	x -= delta;
	y += delta;
	printf("\nx = %d , y = %d \n\n", x, y);
	

	printf("delta = "); scanf_s("%d", &delta);
	x -= delta;
	y += delta;
	printf("\nx = %d , y = %d \n\n", x, y);

	printf("delta = "); scanf_s("%d", &delta);
	x -= delta;
	y += delta;
	printf("\nx = %d , y = %d \n", x, y);

	return 0;
}