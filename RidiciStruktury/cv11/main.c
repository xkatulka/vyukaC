#include <stdio.h>

int main() {
    short int mala = 0, velka = 0;
    char c;

    while((c = getchar()) != '\n'){
        if(c >= 'A' && c <= 'Z')
            velka++;
        else {
            if(c >= 'a' && c <= 'z')
                mala++;
        }
    }
    printf("Pocet malych: %d\nPocet velkych: %d", mala, velka);
    return 0;
}