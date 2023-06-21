#include <stdio.h>

int main(){

    char dia;

    puts("Selecciona un numero de los dias de la semana del 1 al 7\n");
    scanf("%c",&dia);


/*
    switch(dia){

        case 1: printf("Seleccionaste el lunes.\n");
        break;
        case 2: printf("Seleccionaste el martes.\n");
        break;
        case 3: printf("Seleccionaste el miercoles.\n");
        break;
        case 4: printf("Seleccionaste el jueves.\n");
        break;
        case 5: printf("Seleccionaste el viernes.\n");
        break;
        case 6: printf("Seleccionaste el sabado.\n");
        break;
        case 7: printf("Seleccionaste el domingo.\n");
        break;
        default: puts("Esa opcion no es valida\n");
        break;
    }
*/
    switch(dia){

        case 'l': printf("Seleccionaste el lunes.\n");
        break;
        case 'm': printf("Seleccionaste el martes.\n");
        break;
        case 'x': printf("Seleccionaste el miercoles.\n");
        break;
        case 'j': printf("Seleccionaste el jueves.\n");
        break;
        case 'v': printf("Seleccionaste el viernes.\n");
        break;
        case 's': printf("Seleccionaste el sabado.\n");
        break;
        case 'd': printf("Seleccionaste el domingo.\n");
        break;
        default: puts("Esa opcion no es valida\n");
        break;
    }
    return 0;
}