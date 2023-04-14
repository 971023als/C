//****************
//	2023-04-14
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>

int main() {

    for (int i = 0; i < 4; i++) {
        char input;
        char input2;
        printf("알파벳 입력>> ");
        scanf(" %c", &input);

        if (isupper(input)) {
            input2 = tolower(input);
        }

        else if (islower(input)) {
            input2 = toupper(input);
        }

        printf("'%c' -> '%c'\n", input, input2);
    }

    return 0;
}