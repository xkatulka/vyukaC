#include <stdio.h>

int main() {
    // cv 7
    FILE *fr1, *fr2; // soubory pro cteni
    int zw, zr, c1, c2, pocet = 0;

    if ((fr1 = fopen("../pismena.txt", "r")) == NULL){ // testovani spravnosti otevreni souboru
        printf("Soubor pismena.txt se nepodarilo otevrit!\n");
        return 1; // nastala chyba otevirani souboru, program konci
    }

    if ((fr2 = fopen("../pismena2.txt", "r")) == NULL){ // testovani spravnosti otevreni souboru
        printf("Soubor pismena2.txt se nepodarilo otevrit!\n");
        if((zr = fclose(fr1)) == EOF){
            printf("Soubor pismena.txt se nepodarilo zavrit!"); // tady by se mel jeste pokusit zavrit soubor pismena.txt
            return 1;
        }
        return 1; // nastala chyba otevirani souboru, program konci
    }

    while ((c1 = getc(fr1)) != EOF){
        if ((c2 = getc(fr2)) != EOF){
           if (c1 != c2)
               pocet++;
        }
        else
            break;
    }

    if (pocet == 0)
        printf("Soubory jsou shodne");
    else
        printf("Soubory se lisi v %d znacich", pocet);

    if((zw = fclose(fr2)) == EOF){
        printf("Soubor kolik.txt se nepodarilo zavrit!");
    }

    if((zr = fclose(fr1)) == EOF)
        printf("Soubor pismena.txt se nepodarilo zavrit!");

    if (zr == EOF || zw == EOF)
        return 1; // nastala chyba zavirani souboru, program konci, ale kdyby chyba nastala u prvniho, druhy by se nezavrel

    return 0;
}