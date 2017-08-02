#include <stdio.h>

int main() {
    // cv 5
    FILE  *fr; // soubor pro cteni
    int i, pocet = 0;
    double cislo = 0, soucet = 0;

    if ((fr = fopen("../cisla.txt", "r")) == NULL){ // testovani spravnosti otevreni souboru
        printf("Soubor cisla.txt se nepodarilo otevrit!\n");
        return 1; // nastala chyba otevirani souboru, program konci
    }

    //pokud je na zacatku pred cislem $, pak se to zapise i s $, mezera pred nevadi, bez $ nefunguje, \n nevadi
    while (fscanf(fr,"$%lf\n", &cislo) > 0 || fscanf(fr,"$%lf ", &cislo) > 0){ // pokud mam cisla oddelena mezerou nebo koncem radku, musim testovat oboje
       pocet++;
       soucet += cislo;
    }
    printf("%lf\n", soucet/pocet);

    if(fclose(fr) == EOF){
        printf("Soubor cisla.txt se nepodarilo zavrit!");
        return 1;
    }

    return 0;
}