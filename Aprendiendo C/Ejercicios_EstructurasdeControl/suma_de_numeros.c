/*
Determinar suma de todos los numeros hasta el numero que de el usuario
*/

#include <stdio.h>

int main(){

    int numero,resultado;

    printf("Introduce un numero: \n");
    scanf("%i",&numero);

    for(int i=0;i <= numero;i++){
        resultado = i +i;
        printf("%i + %i = %i\n",i,i,resultado);
    }
    return 0;
}