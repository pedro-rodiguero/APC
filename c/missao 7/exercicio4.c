#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3, soma_peso, verificacao;

    verificacao = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite o peso 1: ");
    scanf("%d", &peso1);

/******************************************************************/
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite o peso 2: ");
    scanf("%d", &peso2);

/******************************************************************/
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite o peso 3: ");
    scanf("%d", &peso3);
    
    soma_peso = peso1 + peso2 + peso3;
    
    if(soma_peso != 10 || nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10){
        printf("ERRO \n");
        }   else{
                media = (nota1 / peso1) + (nota2 / peso2) + (nota3 / peso3);
                 printf("Media: %.2f \n", media);
        }
    return 0;
}