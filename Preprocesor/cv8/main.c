#include <stdio.h>
#define hlaska(i) printf("Zadej %d. cislo:", (i))
#define SOUBOR "../cisla.txt"

int main() {
    FILE *fr;
    int cislo, i, pocet_sudych = 0;
    fr = stdin;

#ifdef SOUBOR
    if((fr = fopen(SOUBOR, "r")) == NULL){
        printf("Soubor %s se nepodarilo otevrit!", SOUBOR);
        return 1;
    }
    printf("Nacitani cisel ze souboru, pouzivejte pouze ENTER\n");
#endif

    for (i = 1; i <= 10; i++){
        hlaska(i);
        while ((cislo = getchar()) != '\n') // ceka na enter
            ;
        fscanf(fr, "%d", &cislo);
        if ((cislo % 2) == 0)
            pocet_sudych++;
        printf("%d\n", cislo);
    }
    printf("Pocet sudych cisel je: %d", pocet_sudych);

#ifdef SOUBOR
    if(fclose(fr) == EOF){
        printf("Soubor %s se nepodarilo zavrit!", SOUBOR);
        return 1;
    }
#endif
    return 0;
}