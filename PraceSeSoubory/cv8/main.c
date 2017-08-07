#include <stdio.h>

int main() {
    FILE *fr;
    int c;

    if((fr = fopen("XXX.txt", "r"))== NULL){
        printf("Soubor se nepodarilo otevrit, pravdepodobne neexistuje!\n");
        return 1;
    }

    if (fclose(fr) == EOF){
        printf("Soubor se nepodarilo uzavrit\n");
        return 1;
    }

    printf("Je to OK.\n");
    return 0;
}