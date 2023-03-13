/* 
* 계산기 ver 0.2
*/
#include <stdio.h>
int main(void) {
        int x, y;
        // 합, 차, 곱, 나눈 몫, 나머지
        int sum, diff, mult, quot, rem;

        x = 107; y = 88;
        sum = x + y;
        diff = x - y;
        mult = x * y;
        quot = x / y;
        rem = x % y;

        printf("%d 더하기 %d은(는) %d 입니다.\n", x, y, sum);
        printf("%d 빼기 %d은(는) %d 입니다.\n", x, y, diff);
        printf("%d 곱하기 %d은(는) %d 입니다.\n", x, y, mult);
        printf("%d을(를) %d로 나눈 몫은 %d 입니다.\n", x, y, quot);
        printf("%d을(를) %d로 나눈 나머지는 %d 입니다.\n", x, y, rem);

        return 0;
}