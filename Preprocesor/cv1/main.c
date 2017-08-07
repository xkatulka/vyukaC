#include <stdio.h>
#define N 12 //pocet scitanych cisel
int main() {
    int i, soucet = 0;

    for (i = 1; i <= N; i++)
        soucet += i;

    printf("Soucet prvnich %d-ti cisel je %d.\n", N, soucet);
    return 0;
}