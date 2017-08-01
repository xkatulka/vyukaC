#include <stdio.h>

int main() {
    // cv 3

    FILE *fr; // soubor pro cteni, soubor pro zapis
    int c, pocet = 0; // znak

    if ((fr = fopen("../../cv2/pismena.txt", "r")) == NULL){ // testovani spravnosti otevreni souboru
        printf("Soubor pismena.txt se nepodarilo otevrit!\n");
        return 1; // nastala chyba otevirani souboru, program konci
    }

    while((c = getc(fr)) != EOF){
        pocet ++;
    }
    printf("Celkovy pocet znaku v souboru je: %d", pocet);

    if(fclose(fr) == EOF){
        printf("Soubor velky.txt se nepodarilo zavrit!");
        return 1; // nastala chyba zavirani souboru, program konci
    }

    return 0;
}