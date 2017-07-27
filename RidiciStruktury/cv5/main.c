#include <stdio.h>

int main() {
    // cv 5
    int c;

  /*  //se zavorkami - porovnava se nacteny znak
    if((c=getchar()) >= 'A' && c <= 'Z')
        printf("%d\n",c);
*/
    // bez zavorek - porovnava se promenna c, potom se do ni nacte znak = nefunguje tak, jak ma
    if(c=getchar() >= 'A' && c <= 'Z')
        printf("%d\n",c);
    return 0;
}