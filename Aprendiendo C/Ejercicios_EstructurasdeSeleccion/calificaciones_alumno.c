#include <stdio.h>

int main(){

    int nota;

    printf("Escribe tu nota:\n");
    scanf("%i",&nota);

    switch(nota) {
        case 0: printf("Puedes mejorar.\n"); break;
        case 1: printf("Puedes mejorar.\n"); break;
        case 2: printf("Puedes mejorar.\n"); break;
        case 3: printf("Puedes mejorar.\n"); break;
        case 4: printf("Puedes mejorar.\n"); break;
        case 5: printf("Puedes mejorar.\n"); break;
        case 6: printf("Puedes mejorar.\n"); break;
        case 7: printf("Eres un estudiante regular.\n"); break;
        case 8: printf("Muy bien, puedes mejorar.\n"); break;
        case 9: printf("Excelente, sigue así.\n"); break;
        case 10: printf("Excelente, sigue así.\n"); break;
        default: printf("No es una opcion valida.\n");
    }


    return 0;
}