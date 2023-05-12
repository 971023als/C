//****************
//	2023-05-12
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h> 


int count_mult(int n, int m, int k) {
    int count = 0;
    for (int i = n; i <= m; i++) {
        if (i % k == 0) {
            count++;
        }
    }
    return count;
}

int main(void) {
    int n, m, k;
    printf("양의 정수 n, m, k를 입력하십시오: ");
    scanf("%d%d%d", &n, &m, &k);

    int result = count_mult(n, m, k);
    printf("[%d, %d]에서 %d의 배수는 %d개\n", n, m, k, result);

    return 0;
}