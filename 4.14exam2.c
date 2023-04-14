//****************
//	2023-04-14
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main() {
    
    for (int i = 1; i < 10; i++) {
        printf("%d",i);
        getchar();
        printf("계속하려면 엔터 키를 입력하세요...\n");
    }

    return 0;
}