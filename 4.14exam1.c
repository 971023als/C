//****************
//	2023-04-14
//****************

#include <stdio.h>
#include <string.h>

int main() {
    char title[50];
    char author[50];
    char publisher[50];

    printf("제목>> ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = 0;
    
    printf("저자>> ");
    fgets(author, sizeof(author), stdin);
    author[strcspn(author, "\n")] = 0;
    
    printf("출판사>> ");
    fgets(publisher, sizeof(publisher), stdin);
    publisher[strcspn(publisher, "\n")] = 0;

    printf("제목은 %s, 저자는 %s, 출판사는 %s입니다.\n", title, author, publisher);

    return 0;
}
