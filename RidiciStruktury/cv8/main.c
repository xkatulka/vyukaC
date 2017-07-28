#include <stdio.h>

int main() {
    // cv 8 - podminky 1 a 2 jsou stejne
    int a;

    printf ("Zadejte cislo:");
    scanf("%d", &a); // nacte cislo
    if (a > 0){
        printf("Podminka 1. plati, a > 0\n");
    }

    if ((a > 0) != 0){
        printf("Podminka 2. plati, a > 0\n");
    }

    if (!(a > 0)){
        printf("Podminka 1. neplati, a <= 0\n");
    }

    if ((a > 0) == 0){
        printf("Podminka 2. neplati, a <= 0\n");
    }

    return 0;
}