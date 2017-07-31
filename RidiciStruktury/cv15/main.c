#include <stdio.h>

int main() {
    //cv 15
    float f, g;
    int i;

    scanf("%f%f", &f,  &g);
    for(i = (int)f; i <= (int)g; i++){
        if ((i % 2) == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}