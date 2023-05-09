//****************
//	2023-05-08
//****************

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int weight[5] = { 55, 48, 105, 67, 79 };

    //Q : 100kg 이상인 사람이 있는가?
    bool flag = false; //없다
    for (int i = 0; i < 5; i++) {
        if (weight[i] >= 100) {
            flag = true;
            break;
        }
    }

    // 한명도 없으면 false 아니면 true

    if (flag) puts("있다");
    else      puts("없다");
    return 0;

}