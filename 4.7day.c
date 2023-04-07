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
	while (1) {
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
		case '/':  result = x / y; break;
		default:  result = 0; break; // +-*/가 아닐 때도 일단 무시
		}

		printf("%d %c %d = %d\n", x, op, y, result);
	}
	return 0;
}