#include <stdio.h>

int main() {

    int a,b,c;
    printf("Escribe tres numeros\n");
    scanf("%d %d %d",&a,&b,&c);

    ascendente(a,b,c);

    return 0;
}

void ascendente (int a,int b,int c){

    if (a>=b && a>=c){
        if (b>=c){
            printf("%d %d %d",c,b,a);
        }else{
            printf("%d %d %d",b,c,a);
        }
    }
    if (b>=a && b>=c){
        if (a>=c){
            printf("%d %d %d ",c,a,b);
        }else
        {
            printf("%d %d %d ",a,c,b);
        }
    }
    if (c>=a && c>=b){
        if (b>=a)
        {
            printf("%d %d %d",a,b,c);
        }else
        {
            printf("%d %d %d ",b,a,c);
        }
    }
}