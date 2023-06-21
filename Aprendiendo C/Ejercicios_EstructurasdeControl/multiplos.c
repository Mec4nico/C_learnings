#include <stdio.h>

int main(){

    int n,resultado;
    printf("Introduce un número: \n");
    scanf("%i",&n);


    for(int i=1;i<=n;i++){
        
        resultado=i*5;

        printf("El resultado de %i * 5 es %i.\n",i,resultado);
    }

    return 0;
}