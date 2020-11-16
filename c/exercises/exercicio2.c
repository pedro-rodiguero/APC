#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int consumo;
    float valor, result;

    printf("Digite o valor e KW consumido: ");
    scanf("%d", &consumo);
    if (consumo <= 50){
        valor = 0.1918;
        result = consumo * valor;
        printf("Valor a ser pago:  R$%.2f \n", result);
    }   else if (consumo > 50 && consumo <= 100){
            valor = 0.3877;
            result = consumo * valor;
            printf("Valor a ser pago:  R$%.2f \n", result);
        }   else if (consumo > 100 && consumo <= 200){
                valor = 0.5566;
                result = consumo * valor;
               printf("Valor a ser pago:  R$%.2f \n", result);
            }   else if (consumo > 200){
                valor = 0.7834;
                result = consumo * valor;
               printf("Valor a ser pago:  R$%.2f \n", result);
            }
    return 0;
}