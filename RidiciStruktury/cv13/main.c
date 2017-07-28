#include <stdio.h>

int main() {
    int pocet_cisel = 0, i;
    int c;

    printf("Zadejte pocet cisel:");
    scanf("%d", &pocet_cisel);

    for(i = 1; i <= pocet_cisel; i++){
       if((c = getchar())== '\n') {
            printf("Pokud si prejete jedno cislo preskocit stisknete P a potvrdte ENTER\nPokud si prejete vypis ukoncit stisknete X a potvrdte ENTER\nPro pokracovani dale stiknete ENTER\n");
       }
       else {
            if (c == 'P') //preskoci vypis jednoho cisla (skoci na hned na dalsi provadeni cyklu)
                continue;
            else {
                if (c == 'X') //ukonci vypisovani (vyskoci z cyklu)
                    break;
            }
       }
        printf("%d\n", i);
    }
    return 0;
}
