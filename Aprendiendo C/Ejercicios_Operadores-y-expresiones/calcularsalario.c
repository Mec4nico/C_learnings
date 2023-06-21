/* Dadas las horas trabajadas de una persona y el valor por hora.
Calcula su salario e imprimelo. */
#include <stdio.h>

int main(){

    float horas,costo_h, salario;

    printf("Introduceme la cantidad de horas trabajadas:\n");
    scanf("%f",&horas);
    printf("Introduceme el valor de la h:\n");
    scanf("%f",&costo_h);

    salario = horas * costo_h;

    printf("Tu salario es de: %.2f\n",salario);

    return 0; 
}