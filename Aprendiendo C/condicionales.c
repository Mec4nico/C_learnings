#include <stdio.h>

int main(){

    int a,b,c;

    printf("Escribe el numero a:\n");
    scanf("%i",&a);
    printf("Escribe el numero b:\n");
    scanf("%i",&b);

    c=a+b;

    if(a+b==5){
        printf("El resultado es igual a 5 \n");
    } else {
        printf("El resultado es %i \n",c);
    }

    return 0;
}