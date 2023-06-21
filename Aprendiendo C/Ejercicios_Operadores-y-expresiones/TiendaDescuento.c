/*
En un supermercado por la cuarentena quieren 
disminuir los precios al 15% para
ayudar a las personas y que no se queden los productos en la tienda.
Debes de dar el precio y el programa debe de dar los precios con el descuento y el descuento
*/

#include <stdio.h>
int main(){
	
	float precio,descuento,compraDescuento;
	
	printf("Dame el precio del producto\n");
	scanf("%f",&precio);
	
	descuento = precio*0.15;
	compraDescuento = precio-descuento;
	
	printf("El precio del producto con el descuento es de %.2f\nEl total descontado es %.2f\nGracias por usar este programa",compraDescuento,descuento);
	
	
	
	
	return 0;
}
