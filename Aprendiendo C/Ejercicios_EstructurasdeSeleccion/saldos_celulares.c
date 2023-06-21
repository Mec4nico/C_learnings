/*Calcular tarifas de saldo en celulares
y poner precios
de 1000 a 1500 premium
de 500 a 999 intermedia
de 100 a 499 basica
*/

#include <stdio.h>

#define Tarifa1 "Premium"
#define Tarifa2 "Intermedia"
#define Tarifa3 "Basica"

int main(){

    int presupuesto;

    printf("Cuanto esta dispuesto a pagar por su tarifa?\n");
    scanf("%i",&presupuesto);

    if(presupuesto>=1000){
        printf("Su tarifa recomendada es %s\n",Tarifa1);
    } else if(presupuesto>=500 && presupuesto<1000) {
        printf("Su tarifa recomendada es %s\n",Tarifa2);
    } else if(presupuesto>=100 && presupuesto<500) {
        printf("Su tarifa recomendada es %s\n",Tarifa3);
    }
    

    return 0;
}