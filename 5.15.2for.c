//****************
//	2023-05-15
//****************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h> 


int main(void){
    int cnt = 0;
    int flag_exit = false;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 10; j++) {
            cnt++;
            printf("%3d", cnt);
            if (cnt == 25) {
                flag_exit = true;
                break;
            }
        }
        if (flag_exit) {
            break;
        }
        printf("\n");
    }

    int cn = 0;

    for (int k = 1; k <= 50; k++) {
        cn++;
        printf("%3d", cn);
        if (cn % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}