/*do-while
sintaxis:

do{
    instrucciones
} while(condicion)

La gracia es que se ejecuta el menos 1 vez.
*/
// Muestra los 20 primeros numeros.

#include <stdio.h>

int main(){

    int i=1;

    do{
        printf("%i,\n",i);
        i++;
    } while (i<=20);
    return 0;
}