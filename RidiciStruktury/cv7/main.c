#include <stdio.h>

int main() {
    int c;

    if ((c = getchar())>= 'A' && c <= 'Z') {
        printf("Velke pismeno: '%c'\n", c);
    }
    else {
        if (c >= 'a' && c <= 'z') {
            printf("Male pismeno: '%c'\n", c);
        }
        else{
            if (c >= '0' && c <= '9')
                printf("Cisice: '%c'\n", c);
            else
                printf("Interpunkcni znak: '%c'\n", c);
        }

    }
    return 0;
}