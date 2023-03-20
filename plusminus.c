//****************
//	2023-03-20
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int x = 10, y = 10;

	printf("x=%d, y=%d\n", x, y);
	x++; y--;

	printf("x=%d, y=%d\n", x, y);
	x++; y--;

	printf("x=%d, y=%d\n", x, y);
	x++; y--;

    printf("x=%d, y=%d\n", x, y);
    
    printf("x=%d, y=%d\n", ++x, --y);
    
    printf("x=%d, y=%d\n", ++x, --y);
    
    printf("x=%d, y=%d\n", ++x, --y);


	return 0;
}