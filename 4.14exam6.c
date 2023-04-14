//****************
//	2023-04-14
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    char input[4];
    int key;

    printf("암호문>> ");
    scanf("%s", input);
    printf("암호문: %s\n", input);

    printf("좌표: ");
    for (int i = 0; i < strlen(input); i++) {
        printf("%d", input[i] - 'A');
        if (i < strlen(input) - 1) {
            printf(", ");
        }
    }
    printf("\n");

    printf("암호문-암호키>> ");
    scanf("%s%d", input, &key);
    printf("암호문: %s\n", input);
    printf("암호키: %d\n", key);

    printf("좌표: ");
    for (int i = 0; i < strlen(input); i++) {
        int coordinate = (input[i] - 'A' + key) % 26;
        printf("%d", coordinate);
        if (i < strlen(input) - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}