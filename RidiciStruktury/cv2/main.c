#include <stdio.h>

int main() {
    //cv 2
    int x,y;

    printf("Zadejte 2 cela cisla: ");
    scanf("%d%d",&x, &y);
    x < y ? printf("Mensi cislo: %d\nVetsi cislo: %d", x, y):printf("Mensi cislo: %d\nVetsi cislo: %d", y, x);
    return 0;
}