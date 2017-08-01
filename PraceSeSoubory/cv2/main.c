#include <stdio.h>

int main() {
    // cv 2

    FILE *fr, *fw ; // soubor pro cteni, soubor pro zapis
    int c, zr, zw ; // znak

    if ((fr = fopen("../pismena.txt", "r")) == NULL){ // testovani spravnosti otevreni souboru
        printf("Soubor pismena.txt se nepodarilo otevrit!\n");
        return 1; // nastala chyba otevirani souboru, program konci
    }

    if ((fw = fopen("../velky.txt", "w")) == NULL){ // testovani spravnosti otevreni souboru
        printf("Soubor velky.txt se nepodarilo otevrit!\n");
        if((zr = fclose(fr)) == EOF){
            printf("Soubor pismena.txt se nepodarilo zavrit!"); // tady by se mel jeste pokusit zavrit soubor pismena.txt
            return 1;
        }
        return 1; // nastala chyba otevirani souboru, program konci
    }

    while((c = getc(fr)) != EOF){
        printf("%c", c);
        fputc((c >= 'a' && c <= 'z' ? c = c + 'A' - 'a' : c), fw); // zapis do souboru a zaroven prevod na velka pismena

    }

    if((zw = fclose(fw)) == EOF){
        printf("Soubor velky.txt se nepodarilo zavrit!");
    }

    if((zr = fclose(fr)) == EOF)
        printf("Soubor velky.txt se nepodarilo zavrit!");

    if (zr == EOF || zw == EOF)
        return 1; // nastala chyba zavirani souboru, program konci, ale kdyby chyba nastala u prvniho, druhy by se nezavrel

        return 0;
}
