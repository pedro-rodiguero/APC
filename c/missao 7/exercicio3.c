#include <stdio.h>
#include <math.h>

int main(){

    int num, quadrado, cubo, raiz_quadrada;

    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num <=0) {
        printf("0 , 0 , 0");
    }   else{
        quadrado = num * num;
        printf("%d", quadrado);
        cubo = num * num * num;
        printf(" , %d", cubo);
        raiz_quadrada = sqrt(num);
        printf(" , %d \n", raiz_quadrada);
    }

    return 0;
}