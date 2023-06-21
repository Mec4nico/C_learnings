/*
Bucles o Ciclos
La sentencia while

Sintaxis:
    while(algo){
        Instrucciones
    }
    
    for (incializaicon,condicion,incremento){
        Instrucciones
    }
    
    */

#include <stdio.h>

int main(){
    int i=99;

    while(i<=100){
        printf("El valor es %i\n",i);
        i++;
    }

    for(int i=0; i<=10; i++){
        printf("%i\n",i);
    }
}

