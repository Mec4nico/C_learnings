#include <stdio.h>

int main(){

    int q;
    float w;
    char e[40];

    printf("Escribe el valor de la variable (float):\n");
    //introducir variables con scanf se indica el tipo de valor y un ampersan continuado del nombre de variable
    // para asignarla a ella una vez lo introduzca.
    scanf("%f",&w);

    printf("Escribe el valor de la variable (char):\n");
    gets(e);
    //scanf("%s",&e); solo lee hasta el primer espacio

    printf("El valor que escribiste es %f.3\n",w);
    printf("El valor que escribiste es %s\n",e);

    return 0;
}