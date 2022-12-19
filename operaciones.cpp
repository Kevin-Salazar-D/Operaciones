#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int  numero1,numero2;

    printf("Ingresa el primer numero ");
    scanf("%i",&numero1);

    printf("Ingresa el segundo numero ");
    scanf("%i",&numero2);

    printf("La suma de: %i + %i = %i \n",numero1,numero2,(numero1+numero2));
    printf("La resta de: %i - %i = %i \n",numero1,numero2,(numero1-numero2));
    printf("La multiplicacion de: %i * %i = %i \n",numero1,numero2,(numero1*numero2));
    printf("La division de: %i / %i = %f \n ",numero1, numero2, ((float)numero1/(float)numero2));
    printf("El residuo de : %i y %i = %i\n",numero1, numero2,(numero1%numero2));

    system("pause");
    return 0;

}
