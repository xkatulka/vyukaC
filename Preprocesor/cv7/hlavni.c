//
// Created by Kateřina Gojová on 08.08.2017.
//
#include <stdio.h>
#include "makro.c"

int main() {
    // cv 6
    int j, k;
    if((j = cti_int(k))== 0)
        printf("nula");
    else
        printf("j:%d | k:%d\n", j, k);
    return 0;
}
