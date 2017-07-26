#include <stdio.h>

int main() {
    int i;

    i=5;
    printf("Odpoved na otazku i se rovna 8, ale  i ma hodnotu 5, takze nepravda, ciselne 0: %d\n",  i == 8);
    printf("Prirazeni hodnoty 8 do promenne i. Vrati hodnotu promenne i: %d\n",  i = 8);
    printf("Odpoved na otazku i se rovna 8, i jsme priradili 8,  takze pravda, ciselne 1: %d\n",  i == 8);
    return 0;
}