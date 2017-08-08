#include <stdio.h>
#define je_velke(c) (((c) >= 'A' && (c) <= 'Z')? 1 : 0)

int main() {
    int c;

    printf("Zadejte znak: ");
    c = getchar();
    if (je_velke(c) == 1)
        printf("Znak je velke pismeno: %c\n", c);
    else
        printf("Znak neni velke pismeno: %c\n", c);
    return 0;
}