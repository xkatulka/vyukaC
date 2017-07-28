#include <stdio.h>

int main() {
    /* cv 4 Napište program, který přečte dva znaky v rozsahu 0-9 nebo A-F.
    Pozor - nečtěte  jedno hexadecimální číslo! Tyto dva znaky pak považujte
     za hexadecimální číslo a jeho hodnotu vypište dekadicky.
     */
    short int i, a, b;

    for (i = 0; i < 2; i++){
        switch(getchar()){
            case '0':
                if (i == 0) a = 0; else b = 0;
                break;
            case '1':
                if (i == 0) a = 1; else b = 1;
                break;
            case '2':
                if (i == 0) a = 2; else b = 2;
                break;
            case '3':
                if (i == 0) a = 3; else b = 3;
                break;
            case '4':
                if (i == 0) a = 4; else b = 4;
                break;
            case '5':
                if (i == 0) a = 5; else b = 5;
                break;
            case '6':
                if (i == 0) a = 6; else b = 6;
                break;
            case '7':
                if (i == 0) a = 7; else b = 7;
                break;
            case '8':
                if (i == 0) a = 8; else b = 8;
                break;
            case '9':
                if (i == 0) a = 9; else b = 9;
                break;
            case 'A':
                if (i == 0) a = 10; else b = 10;
                break;
            case 'B':
                if (i == 0) a = 11; else b = 11;
                break;
            case 'C':
                if (i == 0) a = 12; else b = 12;
                break;
            case 'D':
                if (i == 0) a = 13; else b = 13;
                break;
            case 'E':
                if (i == 0) a = 14; else b = 14;
                break;
            case 'F':
                if (i == 0) a = 15; else b = 15;
                break;
            default:
                a = 0;
                b = 0;
                break;
        }
    }
    printf("Hexadecimalni cislo %X%X = %d\n",a,b,a*16+b);
    return 0;
}