#include <stdio.h>

int main() {
    // cv14 - napište program, který pro zadané číslo vypočte faktoriál, použijte typ long int - vypočítá správně max faktoriál 13 :(
    unsigned int i, cislo = 0;
    long int faktorial = 1;

    printf("Zadejte cislo:");
    scanf("%d", &cislo);
    printf("Faktorial cisla %d: ", cislo);

    for (i = cislo; i>=1; i--){
        faktorial *= i;
        if (i == cislo)
            printf("%d",i);
        else
            printf(" * %d", i);
    }
    printf(" = %ld", faktorial);
    return 0;
}