#include <stdio.h>

int main() {
    int c, cislo=0, i;

    c = 'A';
    while (c == 'a' || c =='A'){
        for (i=1; i<=10; i++){
            cislo++;
            printf("%d\n", cislo);
        }
        printf("Mam pokracovat? [A/N]");
        c = getchar();
        while(getchar() != '\n') // precte cely zbytek radku
            ;
        // dokud uzivatel macka neco jineho nez A nebo N, tak ho to bude otravovat
        while (c != 'a' && c!= 'A' && c!= 'n' && c!= 'N'){
            printf("Mam pokracovat? [A/N]");
            c = getchar();
            while(getchar() != '\n')
                ;
        }
    }
    return 0;
}