#include <stdio.h>
#define lze_tisknout(c) ((c) >= 32 && (c) <= 126)

int main() {
    int c;
    short int i, j;

    for (i = 0; i < 16; i++){ // zakladni Ascii tabulka rozdelena do sloupcu :)
        for (j = 0; j < 8; j++){
            c = 16*j + i;
            if (lze_tisknout(c))
                printf("%d %c |", c, c);
            else
                printf("%d  |", c);
        }
        printf("\n");
    }
    return 0;
}