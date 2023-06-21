#include <stdio.h>

void sumar();
void menu();
void restar();
void multiplicar();
void dividir();

int main(){
    menu();
    return 0;
}
void menu(){

    int opcion;
    do {
        printf("1) Sumar\n2)Restar\n3)Multiplicar\n4)Dividir\n5)Salir\n");
        printf("Opcion\n");
        scanf("%i",&opcion);

        switch(opcion){

            case 1: sumar();
            break;
            case 2: restar();
            break;
            case 3: multiplicar();
            break;
            case 4: dividir();
            break;
            case 5: printf("Saliendo...\n");
            break;
            default :printf("El valor introducido no es correcto.\n"); break;

        }

    } while(opcion!=5);


}
void sumar(){
    int valor1, valor2, resultado;
    printf("Introduce los valores a sumar:\n");
    scanf("%i %i", &valor1,&valor2);
    resultado = valor1 + valor2;
    printf("El resultado de %i + %i es %i\n\n",valor1,valor2,resultado);
}
void restar(){
    int valor1, valor2, resultado;
    printf("Introduce los valores a restar:\n");
    scanf("%i %i", &valor1,&valor2);
    resultado = valor1 - valor2;
    printf("El resultado de %i - %i es %i\n\n",valor1,valor2,resultado);
}
void multiplicar(){
    int valor1, valor2, resultado;
    printf("Introduce los valores a multlipicar:\n");
    scanf("%i %i", &valor1,&valor2);
    resultado = valor1 * valor2;
    printf("El resultado de %i * %i es %i\n\n",valor1,valor2,resultado);
}
void dividir(){
    int valor1, valor2, resultado;
    printf("Introduce los valores a dividir:\n");
    scanf("%i %i", &valor1,&valor2);
    resultado = valor1 / valor2;
    printf("El resultado de %i / %i es %i\n\n",valor1,valor2,resultado);
}