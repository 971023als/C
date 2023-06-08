//****************
//	2023-04-03
//****************

/*
* 계산기 ver 0.5
* 수식을 직접 입력 받아서 +, -, *, / 연산을 수행
* y가 0인 경우, 연산자가 틀린 경우는 일단 무시
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main(void) {
	int x, y, result;
	char op;
	while (1) {

		printf("수식 입력>> ");
		scanf_s("%d", &x);
		getchar();
		scanf_s("%c", &op);
		getchar();
		scanf_s("%d", &y);

		if (x == 0 && y == 0) {
			printf("계산기 프로그램을 종료합니다.\n");
			break;
		}

		if (op == '+') { result = x + y; }

		else if (op == '-') { result = x - y; }

		else if (op == '*') { result = x * y; }

		else if (op == '/') {
			if (y != 0) {
				result = x / y;
			} else {
				printf("0으로 나눌 수 없습니다.\n");
				continue;
			}
		}

		else { result = 0; } // +-*/가 아닐 때도 일단 무시

		printf("%d%c%d = %d\n", x, op, y, result);
	}
	return 0;
}
