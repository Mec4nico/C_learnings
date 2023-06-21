#include <stdio.h>

int main(){

    int num1,num2;

    printf("Introduce 2 números y te diremos el mayor:\n");
    scanf("%i %i", &num1,&num2);

    if(num1>num2){
        printf("%i  es mayor que %i. \n",num1,num2 );
    } else if(num2>num1){
        printf("%i  es mayor que %i. \n",num2,num1 );
    } else {
        printf("%i  es igual que %i. \n",num1,num2 );
    }




    return 0;
}