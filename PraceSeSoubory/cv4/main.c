#include <stdio.h>

int main() {
    // cv 3 Vytvorte program, ktery precte soubor pismena.txt po radcich. Kazdou radku presne opise do souboru kolik.txta na nove radce uvede, kolik znaku na ni bylo.

    FILE *fr, *fw; // soubor pro cteni, soubor pro zapis
    int i, c, zw, zr, pocet = 0, pocet2 = 0, cislice, desitky; // znak

    if ((fr = fopen("../../cv2/pismena.txt", "r")) == NULL){ // testovani spravnosti otevreni souboru
        printf("Soubor pismena.txt se nepodarilo otevrit!\n");
        return 1; // nastala chyba otevirani souboru, program konci
    }

    if ((fw = fopen("../kolik.txt", "w")) == NULL){ // testovani spravnosti otevreni souboru
        printf("Soubor kolik.txt se nepodarilo otevrit!\n");
        if((zr = fclose(fr)) == EOF){
            printf("Soubor pismena.txt se nepodarilo zavrit!"); // tady by se mel jeste pokusit zavrit soubor pismena.txt
            return 1;
        }
        return 1; // nastala chyba otevirani souboru, program konci
    }

    while((c = getc(fr)) != EOF){
        ungetc(c, fr); // vratim prvni precteny znak, aby mi to spravne pocitalo
        pocet = 0;

        while ((c = getc(fr)) != '\n'){
            pocet ++;
            putc(c, fw);
        }
        putc('\n', fw);
        // to cislo musim prevest na jednotlive cislice a pak teprve zapsat pomoci putc a ve spravnem poradi
        // napred zjistim o jak velke cislo se jedna
        desitky = 0;
        pocet2 = pocet;

        while (pocet2 >= 1) {
            pocet2 = pocet2 / 10;
            desitky++;
        }

        while (desitky >= 1){
            cislice = pocet;
            for(i = 1; i < desitky; i++){
                cislice/=10;
            }
            pocet = pocet - cislice * 10;
            desitky--;
            putc(cislice + '0', fw);
        }
        putc('\n', fw);
    }

    if((zw = fclose(fw)) == EOF){
        printf("Soubor kolik.txt se nepodarilo zavrit!");
    }

    if((zr = fclose(fr)) == EOF)
        printf("Soubor pismena.txt se nepodarilo zavrit!");

    if (zr == EOF || zw == EOF)
        return 1; // nastala chyba zavirani souboru, program konci, ale kdyby chyba nastala u prvniho, druhy by se nezavrel

    return 0;
}