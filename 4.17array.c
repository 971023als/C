//****************
//	2023-04-17
//****************

#include <stdio.h>
#include <string.h>

int main() {

    //입력
    int nums[5];

    for (int i = 0; i < 5; i++) {
        printf("정수>> ");
        scanf_s("%d", &nums[i]);
    }

    // 계산
    // 배열의 각 원소에 10을 곱하기
    for (int i = 0; i < 5; i++) {
        nums[i] *= 10;
    }

    //출력
    printf("\n입력 받은 정수(*10): ");
    for (int i = 0; i < 5; i++) {
        printf("%d", nums[i]);
    }
    printf("\n");

    return 0;
}