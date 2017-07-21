#include <stdio.h>

int main() {
    //cv 4
    float cena;

    printf("Zadejte cenu bez dane: ");
    scanf("%f",&cena);
    printf("Prodejni cena s dani (25%%):%5.0f",cena*1.25);
    return 0;
}