#include <stdio.h>

int main() {
    int pocet_cisel = 0, i, cislo, pocet_inteval = 0;

    printf("Zadej pocet cisel:");
    scanf("%d", &pocet_cisel);
    for (i = 1; i<= pocet_cisel; i++){
        printf("Zadej %d. cislo:", i);
        scanf("%d", &cislo); //nacte cislo z klavesnice
        if(cislo >= 25 && cislo <= 38)
           pocet_inteval++;
    }
    printf("Pocet cisel v intervalu <25,38> je: %d", pocet_inteval);
    return 0;
}