//****************
//	2023-05-08
//****************

#include <stdio.h>
#include <string.h>

int add(int, int);

int add(int x, int y) {
    int result = x + y;
    return result;
}

int main() {
    int x = add(10, 20);
    printf("%d\n", x);
    return 0;
}