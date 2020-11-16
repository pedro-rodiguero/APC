#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void menu();
int primo_verify (int x);
char * regra_mais_quebrada (int regra_triplo, int regra_positivo, int regra_primo);

int main(){

    int i, cont = -1, regras_quebradas = 0, soma = 0;
    int x[100], maior = -1, menor = 101, divisor, primo = 0;
    int option, regra_positivo = 0, regra_triplo = 0, regra_primo = 0;
    float media, result;

    printf("Quantos numeros deseja cadastrar? ");
    scanf("%d", &cont);

    for (i = 0; i < cont; i++){
        printf("Digite o numero: ");
        scanf("%d", &x[i]);
        
        while (x[i] < 0 || x[i] > cont * 3 || (primo_verify(x[i]) == 1 && x[i] != 1)){
            printf("Numero invalido!! Tente novamente!! \n");
            regras_quebradas++;
            
            if (x[i] < 0){
                regra_positivo++;
            } else if (x[i] > cont * 3){
                regra_triplo++;
            } else if (primo_verify(x[i]) == 1 && x[i] != 1){
                regra_primo++;
            }

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
            case 1:                                        //Total de numeros validos
                printf("Total de numeros digitados: %d \n", cont);
                break;

            case 2:                                        //Total de numeros invalidos
                media = soma / cont;
                printf("Foram digitados %d numeros errados. \n", regras_quebradas);
                break;

            case 3:                                         //Media
                printf("Media: %.2f \n", media);
                break;
            
            case 4:                                         //Maior
                printf("Maior numero digitado: %d \n", maior);
                break;

            case 5:                                         //Menor
                printf("Menor numero digitado: %d \n", menor);
                break;
            
            case 6:                                         //Regras mais critica
                printf("A regra que causou mais problema foi: %s \n", regra_mais_quebrada(regra_triplo, regra_primo, regra_positivo));
                break;
            
            case 7:                                         //Finalizar o programa
                printf("Obrigado por participar!! Volte sempre!! \n");
                break;
            default:
                printf("Opcao invalida!! Tente novamente!! \n");
            }
    } while (option != 7);

    return 0; 
}

void menu (){
    printf("|-----------------------------------| \n");
    printf("|               MENU                | \n");
    printf("|   1 - Total de numeros validos    | \n");
    printf("|   2 - Total de numeros invalidos  | \n");
    printf("|   3 - Media                       | \n");
    printf("|   4 - Maior                       | \n");
    printf("|   5 - Menor                       | \n");
    printf("|   6 - Regras mais critica         | \n");
    printf("|   7 - Sair                        | \n");
    printf("|-----------------------------------| \n");

    printf("Selecione uma das opcoes: ");
}

int primo_verify (int x){

    int i, verify = 1;

    for (i = 2; i <= x / 2; i ++){
        if (x % i == 0){
            verify = 0;
            break;
        }
    }

    return verify;
}

char * regra_mais_quebrada (int regra_triplo, int regra_positivo, int regra_primo){

    printf("%d \n", regra_positivo);
    printf("%d \n", regra_triplo);
    printf("%d \n", regra_primo);
    if (regra_triplo > regra_positivo && regra_triplo > regra_primo){
        return "Regra triplo de N";
    } else if (regra_positivo > regra_triplo && regra_positivo > regra_triplo){
        return "Regra positivo";
    } else if (regra_primo > regra_triplo && regra_primo > regra_positivo){
        return "Regra do numero primo";
    }
}
