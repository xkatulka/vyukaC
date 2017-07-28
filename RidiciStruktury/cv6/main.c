#include <stdio.h>

int main() {
    // cv 6
    int c;

    if ((c = getchar())>= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9')
        printf("Alfanumericky znak\n");
    else
        printf("Interpunkcni znak\n");
    return 0;
}