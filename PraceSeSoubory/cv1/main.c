#include <stdio.h>

int main() {
    // cv 1

    FILE *fr; // soubor pro cteni
    int c; // znak

    if ((fr = fopen("../znaky.txt", "r")) == NULL){ // testovani spravnosti otevreni souboru
        printf("Soubor znaky.txt se nepodarilo otevrit!\n");
        return 1; // nastala chyba otevirani souboru, program konci
    }
    do{
        c = getc(fr);
        printf("%c", c);
    }while (c != 'q');

    if(fclose(fr) == EOF){
        printf("Soubor znaky.txt se nepodarilo zavrit!");
        return 1; // nastala chyba zavirani souboru, program konci
    }
    return 0;
}