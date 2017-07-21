#include <stdio.h>

int main() {
    //cv 9
    char p1, p2, p3;

    scanf("%c%c%c", &p1, &p2, &p3);
    printf("%c%c%c", p3-=32,p2-=32,p1-=32);
    return 0;
}