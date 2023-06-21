#include <stdio.h>

// Pedirle al usuario que digite la cantidad de años con las que se hara la conversion.
int main(){

    int años;
    int meses;
    int dias;
    int horas;

    printf("Introduce una cantidad de años:\n");
    scanf("%i",&años);

    meses = años * 12;
    dias = meses * 30;
    horas = dias * 24;

    printf("Serian %i meses.\n",meses);
    printf("Serian %i dias.\n",dias);
    printf("Serian %i horas.\n",horas);

    return 0;
}