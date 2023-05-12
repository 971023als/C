//****************
//	2023-05-12
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h> 

// 최소 나이와 키
#define MIN_AGE 6
#define MIN_HEIGHT 140

// 입장 가능한지 확인하는 함수
int check_entry(int ages[], int heights[]) {
    for (int i = 0; i < 4; i++) {
        if (ages[i] < MIN_AGE || heights[i] < MIN_HEIGHT) {
            return i + 1;
        }
    }
    return 0;
}

int main(void) {
    int ages[4], heights[4];
    printf("4명의 나이와 키를 입력하십시오. 각각의 나이와 키는 공백으로 구분합니다.\n");
    for (int i = 0; i < 4; i++) {
        printf("입장객 %d: ", i + 1);
        scanf("%d%d", &ages[i], &heights[i]);
    }

    int result = check_entry(ages, heights);
    if (result == 0) {
        printf("이 팀은 입장 가능합니다.\n");
    }
    else {
        printf("입장객 %d 때문에 팀은 입장할 수 없습니다.\n", result);
    }

    return 0;
}