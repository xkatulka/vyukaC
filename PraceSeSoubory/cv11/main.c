#include <stdio.h>

int main() {
    FILE *fr;
    int c, hodnota, soucet = 0;

    if ((fr = fopen("../cisla.txt", "r")) == NULL){
        printf("Soubor cisla.txt se nepodarilo otevrit!");
        return 1;
    }

    // precte vsechny $
    while ((c = getc(fr)) != EOF){
        while ((c = getc(fr)) == '$')
            ;
        ungetc(c, fr); // vrati prvni cislici zpet, aby se dala nacist
        fscanf(fr, "%d", &hodnota); // nacte cislo
        soucet += hodnota;
    }

    if (fclose(fr) == EOF){
        printf("Soubor cisla.txt se nepodarilo zavrit!");
        return 1;
    }

    printf("Soucet cisel v souboru je: %d\n", soucet);
    return 0;
}