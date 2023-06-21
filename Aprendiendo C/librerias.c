//Directivas de preprocesador y variables

#include <stdio.h>//libreria
#include <string.h>
#include <math.h>
#include <stdlib.h>


//Macros - Declarar variables que usaremos en el programa
#define PI 3.1416 // Macro no se pone punto y coma al final.


int y = 5; //Variable Global 

int main(){

    int x = 10;

    float suma = 0;
    
    suma = PI + x;

    printf("La suma es: %.2f\n",suma);

    return 0;
}

