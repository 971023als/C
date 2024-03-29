//****************
//	2023-06-12
//****************

// 필요한 표준 입력 및 출력 라이브러리를 포함시킵니다.
#include <stdio.h>

// 두 수의 최대값을 찾는 매크로를 정의합니다.
// 주의: 매크로 정의 뒤에 세미콜론을 사용하지 않습니다.
#define MAX(a, b) ((a) >= (b) ? (a) : (b))

// 프로그램 실행이 시작되는 main 함수입니다.
int main(void) {
    // 변수를 정의하고 초기화합니다.
    int a = 10;
    int b = 20;

    // MAX 매크로를 사용하여 a와 b 중 최대값을 출력합니다.
    printf("%d와 %d의 최대값은: %d\n", a, b, MAX(a, b));

    // 성공적인 실행을 나타내기 위해 0을 반환합니다.
    return 0;
}