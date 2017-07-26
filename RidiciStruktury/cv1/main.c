#include <stdio.h>

int main() {
    //cv 1
    int i, j;
    double f;

    f =(i = 5, j = 2, (double)i /(double)j);
    printf("%1.1f",f);
    return 0;
}