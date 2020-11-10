#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void menu();

int main(){

    int i, cont = -1, regras_quebradas = 0, soma = 0;
    int x[100], maior = -1, menor = 101;
    int option;
    float media, result;

    printf("Quantos numeros deseja cadastrar? ");
    scanf("%d", &cont);

    for (i = 0; i < cont; i++){
        printf("Digite o numero: ");
        scanf("%d", &x[i]);
        
        while (x[i] < 0 || x[i] > 100 || x[i] % 3 == 0){
            printf("Numero invalido!! Tente novamente!! \n");
            regras_quebradas = regras_quebradas + 1;
            printf("Digite outro numero: ");
            scanf("%d", &x[i]);
        }   
        if (x[i] > maior){
            maior = x[i];
        } 
        if (x[i] < menor){
             menor = x[i];
        }
        soma = soma + x[i];
    }

    do {
        menu();
        scanf("%d", &option);
        switch (option){
            case 1:                                        //Total
                printf("Total de numeros digitados: %d \n", cont);
                break;

            case 2:                                        //Media
                media = soma / cont;
                printf("Media: %.2f \n", media);
                break;

            case 3:                                         //Maior
                printf("Maior numero digitado: %d \n", maior);
                break;
            
            case 4:                                         //Menor
                printf("Menor numero digitado: %d \n", menor);
                break;

            case 5:                                         //Qtde de regras quebradas
                printf("Regras quebradas: %d \n", regras_quebradas);
                break;
            
            case 6:                                         //Encerra o programa
                printf("Obrigado por participar!! Volte sempre!! \n");
                break;
            
            default:
                printf("Opcao invalida!! Tente novamente!! \n");
            }
    } while (option != 6);

    return 0; 
}

void menu (){
    printf("|--------------------------------| \n");
    printf("|               MENU             | \n");
    printf("|   1 - Total                    | \n");
    printf("|   2 - Media                    | \n");
    printf("|   3 - Maior                    | \n");
    printf("|   4 - Menor                    | \n");
    printf("|   5 - Qtde de regras quebradas | \n");
    printf("|   6 - Sair                     | \n");
    printf("|--------------------------------| \n");

    printf("Selecione uma das opcoes: ");
}
