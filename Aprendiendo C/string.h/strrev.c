// Invertir una cadena con la funcion strrev().

#include <stdio.h>
#include <string.h>

int main(){

	char cadena[] = "Jorge";
	
	//Invertimos la cadena con la funcion strrev
	strrev(cadena);

	printf("Cadena Invertida: %s",cadena);
	//mostramos la cadena invertida
	
	
	return 0;
}
