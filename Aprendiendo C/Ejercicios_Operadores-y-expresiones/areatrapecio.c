//calcula area de trapecio a=(a+b)h/2

#include <stdio.h>

int main(){

    float a,b,h,area;
    
    printf("Introduce el cateto a:\n");
    scanf("%f",&a);
    printf("Introduce el cateto b:\n");
    scanf("%f",&b);
    printf("Introduce la altura:\n");
    scanf("%f",&h);

    area = ((a+b)*h/2);

    printf("El area es %.2f m².\n",area);




    return 0;
}