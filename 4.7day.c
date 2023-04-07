//****************
//	2023-04-07
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	int x, y, result;
	char op;
	bool is_div_by_0;

	while (1) {
		is_div_by_0 = false;
		printf("\n수식 입력>> ");
		scanf_s("%d%c%d", &x, &op, 1, &y);
		if (x == 0 && y == 0) {
			printf("계산기 프로그램을 종료합니다.\n");
			break;
		}
		switch (op) {

		case '+':  result = x + y; break;
		case '-':  result = x - y; break;
		case '*': result = x * y; break;
		case '/':
			if (y != 0) {
				result = x / y;
			}
			else {
				printf("div by 0");
				is_div_by_0 = true;
			}
			break;

		default:  printf("잘못된 연산자입니다.\n");
			continue; // +-*/가 아닐 때도 일단 무시
		}
		if (!is_div_by_0) {
			printf("%d %c %d = %d\n", x, op, y, result);
		}
	}
	return 0;
}