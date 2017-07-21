#include <stdio.h>

int main() {
    //cv 5
    int sirka, delka;

    printf("Zadej delku a sirku:");
    scanf("%d%d", &delka, &sirka);
    printf("Obsah obdelnika o delce %d a sirce %d je %d.", delka, sirka, sirka*delka);
    return 0;
}