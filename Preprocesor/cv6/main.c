#include <stdio.h>
#define cti_int(i) (scanf("%d",&i) ? i : 0)

int main() {
    // cv 6
    int j, k;
    if((j = cti_int(k))== 0)
        printf("nula");
    else
        printf("j:%d | k:%d\n", j, k);
    return 0;
}