//****************
//	2023-04-14
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

int main() {

    int zip;
    char city[50];
    char district[50];
    char neighborhood[50];
    char address[50];

    printf("주소>>");
    scanf_s("%d", &zip);
    getchar(); // 입력 버퍼에 남아 있는 개행 문자를 처리합니다.

    scanf_s("%s", city, sizeof(city));
    scanf_s("%s", district, sizeof(district));
    scanf_s("%s", neighborhood, sizeof(neighborhood));
    getchar(); // 입력 버퍼에 남아 있는 개행 문자를 처리합니다.
    fgets(address, sizeof(address), stdin);
    address[strcspn(address, "\n")] = 0; // 개행 문자를 제거합니다.

    printf("주소는 %d %s %s %s %s.\n",
        zip, city,
        district, neighborhood,
        address);

    return 0;
}