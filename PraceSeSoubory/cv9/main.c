#include <stdio.h>

int main() {
    // cv 9
    FILE *fr, *fw;
    int c;

    if((fr = fopen("../pismena.txt", "r")) == NULL){
        printf("Soubor pismena.txt se nepodarilo otevrit!\n");
        return 1;
    }

    printf("Vyberte:\nO - pro vypis na obrazovku\ncokoliv jineho - zapis do souboru\n a potvrdte ENTER\n");

    //cteni vstupu uzivatele
    c = getchar();
    while (getchar() != '\n')
        ;

    if (c == 'O' || c == 'o'){
        fw = stdout;
    }
    else{
        // uzivatel si zvolil soubor
        if((fw = fopen("../novy.txt", "w")) == NULL){
            printf("Soubor novy.txt se nepodarilo otevrit!\n");
            if(fclose(fr) == EOF){
                printf("Soubor pismena.txt se nepodarilo zavrit!\n");
                return 1;
            }
            return 1;
        }
        printf("Zapisuji do souboru\n");
    }

    while((c = fgetc(fr)) != EOF){
        fputc(c,fw);
    }

    if (fw != stdout){
        if(fclose(fw) == EOF){
            printf("Soubor novy.txt se nepodarilo zavrit!\n");
            if(fclose(fr) == EOF){
                printf("Soubor pismena.txt se nepodarilo zavrit!\n");
                return 1;
            }
            return 1;
        }
    }

    if(fclose(fr) == EOF){
        printf("Soubor pismena.txt se nepodarilo zavrit!\n");
        return 1;
    }
    return 0;
}