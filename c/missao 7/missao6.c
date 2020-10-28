#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    float peso, altura, IMC;
    int num;
    int option;
    float num_1, num_2, produto, result;

    do {

        printf("|---------------------------| \n");
        printf("|            MENU           | \n");
        printf("|   1 - Informacoes         | \n");
        printf("|   2 - Calcular IMC        | \n");
        printf("|   3 - Par ou impar        | \n");
        printf("|   4 - Multiplicar         | \n");
        printf("|   5 - Dividir             | \n");
        printf("|   6 - Sair                | \n");
        printf("|---------------------------| \n");

        printf("Selecione uma das opcoes: ");
        scanf("%d", &option);
        switch (option){
            case 1:                                        //Informações do aluno
                printf("Aluno: Pedro Menezes Rodiguero \n");
                printf("Matricula: 190139323 \n");
                break;

            case 2:                                        //Calcular IMC
                printf("Digite a altura em m (ex: 1.90): ");
                scanf("%f", &altura);
               
                printf("Digite o peso em kg: ");
                scanf("%f", &peso);
                IMC = peso / (altura * altura);
                printf("IMC: %.2f \n", IMC);
                break;

            case 3:                                         //Par ou impar
                printf("Digite um numero: ");
                scanf(" %d", &num);
                if (num < 1){
                    printf("Numero invalido!! \n");
                }   else{
                        if (num % 2 == 0)
                        printf("Par \n");
                            else {
                            printf("Impar \n");
                            }
                    }
                break;
            
            case 4:                                         //Multiplicação
                printf("Digite um numero: ");
                scanf(" %f", &num_1);
               
                printf("Digite outro numero: ");
                scanf(" %f", &num_2);
               
                produto = num_1 * num_2;
                printf(" %.2f \n", produto);
                break;

            case 5:                                         //Divisão
                printf("Digite o dividendo: ");
                scanf(" %f", &num_1);
                printf("Digite o divisor: ");
                scanf(" %f", &num_2);
                if (num_1 == 0 || num_2 == 0){
                    printf("Numero invalido!! \n");
                    break;
                }
                result = num_1 / num_2;
                printf(" %.2f \n", result);
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