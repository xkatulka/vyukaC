#include <stdio.h>
#include <ctype.h>
#define EOLN '\n'

int main() {
    int c, pocetCislic = 0;

    while ((c = getchar()) != EOLN){
        if(isdigit(c))
            pocetCislic++;
        else
            if (isalpha(c)){
                c = toupper(c);
                printf("%c", c);
            }
    }

    printf("\nPocet cislic je %d\n", pocetCislic);
    return 0;
}