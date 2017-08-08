#include <stdio.h>
#define na_treti(x) ((x)*(x)*(x))
int main() {
    int i, j;

    i = 2;
    j = 3;
    printf("na_treti(3) = %d\n", na_treti(3));
    printf("i = %d na_treti(%d) = %d\n", i, i, na_treti(i));
    printf("na_treti(2 + 3) = %d\n", na_treti(2 + 3));
    printf("i = %d j = %d na_treti(%d * %d + 1) = %d\n", i, j, i, j, na_treti(i * j + 1));
    return 0;
}