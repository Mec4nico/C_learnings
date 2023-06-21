//Aumentar el salario en una empresa el 10%

#include <stdio.h>

int main(){

    char nombre[40];
    float salario;

    printf("Inserte su nombre porfavor:\n");
    gets(nombre);

    printf("Su nombre es %s\n",nombre);
    printf("Inserte su salario porfavor:\n");
    scanf("%f",&salario);

    salario *= 1.10;

    printf("Su salario aumentado es %.2f\n",salario);
    



    return 0;
}
