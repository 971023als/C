//****************
//	2023-04-07
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	int num =0;

	for (int i = 1; i <= 10; i++) {
		num = i * 2; // '=' 대신에 사용해야 합니다.

		if (num % 8 != 0) { // '==' 비교 연산자를 사용해야 합니다.
			printf("%d ",  num); // print를 printf로 바꾸고, 출력 형식을 수정했습니다.
		}
	}
    print("\n");
	return 0;
}