#include <stdio.h>

int main(){

    float precio, descuento, compradescuento;

    printf("Dame el precio del producto:\n");
    scanf("%f", &precio);

    compradescuento = 0.75;
    
    descuento = precio * compradescuento;
    
    printf("El precio era %.2f y ahora es %.2f.\n",precio,descuento);


}