#include <stdio.h>

/*Un alumno desea saber cual sera su calificaicon final en la materia de Algoritmos.

Dicha calificacion se compone de los siguientes porcentajes:

55% del promedio de su tres calificaciones parciales.
30% de la calificacion del examen final.
15% de la calificacion de un trabajo final.*/

int main(){
    float parcial1,parcial2,parcial3,final,trabajo,calificacion;

    printf("Introduce las notas del parcial1,parcial2,parcial3,final y el trabajo separadas por espacio en este orden.\n");
    scanf("%f %f %f %f %f", &parcial1,&parcial2,&parcial3,&final,&trabajo);

    parcial1 = (parcial1 + parcial2 + parcial3)/3;

    printf("La media de los parciales es %.2f\n",parcial1);

    calificacion= parcial1*0.55 + final*0.30 + trabajo*0.15;

    printf("La nota final es %.2f\n",calificacion);

    return 0;
}



