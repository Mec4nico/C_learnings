/*Ver si un alumno va a pasar de año o no
Un alumno solo tiene derecho a reprobar 3 materias para poder pasar de año
si reprueba 4 materias no peude pasar de año y recursa.*/

#include <stdio.h>

int main(){
    
    int materiasR;

    printf("¿Cuantas materias suspendiste?\n");
    scanf("%i",&materiasR);

    if(materiasR>3){
        printf("No puedes pasar de año has supendido demasiadas.\n");
    } else if(materiasR<=3) {
        printf("Puedes pasar de año.\n");
    }

    return 0;
}