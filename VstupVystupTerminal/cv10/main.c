#include <stdio.h>

int main() {
    int x=-1; //se znamenkem
    unsigned y; //bez znamenka

    printf("Maximelni neznamenkovy: %u\n",y = x);
    printf("Maximalni znamenkovy: %u\n",y/2);
    return 0;
}