#include <stdio.h>

int main() {
    // cv 5

    FILE  *fw; // soubor pro zapis
    int i;
    double cislo = 0;

    if ((fw = fopen("../cisla.txt", "w")) == NULL){ // testovani spravnosti otevreni souboru
        printf("Soubor cisla.txt se nepodarilo otevrit!\n");
        return 1; // nastala chyba otevirani souboru, program konci
    }

    // zapis cisel do souboru
    for(i = 1; i <= 20; i++){
        cislo = 3.14*i;
        fprintf(fw, "$%2.2f\n", cislo);
    }

    if(fclose(fw) == EOF){
        printf("Soubor cisla.txt se nepodarilo zavrit!");
        return 1;
    }

    return 0;
}