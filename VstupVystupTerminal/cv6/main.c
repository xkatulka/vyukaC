#include <stdio.h>

int main() {
    //cv 6
    int a=2, b=2, c=1, d=0, e=4, vypocet;
    
    //printf("Vysledek: a++ / ++c * --e = %d\nKontrola: a /(c + 1)*(e - 1) = %d\n", a++ / ++c * --e, a /(c+1)*(e-1));
    //printf("Vysledek: --b * c++ - a = %d\nKontrola: (b - 1) * c - a  = %d\n", --b * c++ - a, (b - 1) * c - a);
    //printf("Vysledek: -b - --c = %d\nKontrola: -b - (c - 1) = %d\n",  -b - --c , -b - (c - 1));
    d = 1 + e / 2;
    b = d;
    a = a % b;
    a %= b = d = 1 + e / 2;
    printf("Vysledek: a = %d\n",a);
    return 0;
}