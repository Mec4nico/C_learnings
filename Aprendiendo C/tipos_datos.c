#include <stdio.h>
#include <stdbool.h> //libreria para usar booleanos


int main(){

    int a = 1.5; // 2 bytes  desde -32768 -> 32767
    char b = 'z'; // 1 byte Rango desde 0 -> 255 
    float c = 1.5; // 4 bytes
    double d = 1.555555555555555555555555555; // 8 bytes
    short e = 2; // 2 bytes desde -128 -> 127  
    long f = 2.15;
    long double g = 12.55555555555555555555555555555555;
    unsigned int h = 123; //solo puede ser positivo el entero (verdadero) rango desde 0 -> 65535


    printf("el valor entero es de %i\n", a);
    printf("el valor char es de %c\n", b);
    printf("el valor float es de %f\n", c);
    printf("el valor double es de %lf\n", d);
    printf("el valor short es de %i\n", e);
    printf("el valor long es de %li\n", f);
    printf("el valor unsigned int es de %i\n", h);

    return 0;
}