#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char string[20], string_criptographed[20], string_decriptographed[20], senha[20];
char senha_da_descriptografia[20];
int chave, cont = 0, option;


void menu();

int main (){


    do{
        menu();
        scanf("%d", &option);
        switch (option){
            case 1:
                printf("Digite a string que deseja criptografar: ");
                scanf(" %[^\n]s", string);
                getchar();
                printf("Digite a chave numerica: ");
                scanf("%d", &chave);
                printf("Digite a senha: ");
                scanf(" %[^\n]s", senha);
                getchar();

                for (int i = 0; i < strlen(string); i++){                 //Criptografando
                    string[i] = ((string[i] + chave) % 122) + 'a';
                    string_criptographed[i] = string[i];
                }

                printf("%s \n", string);
                break;
            
            case 2:
                printf("Digite a senha: ");
                scanf(" %[^\n]", senha_da_descriptografia);
                getchar();
                if (strstr(senha_da_descriptografia, senha)){
                    for (int i = 0; i < strlen(string); i++){               //Descriptografando
                        string[i] = ((string[i] - chave) % 122) - 'a';
                        string_decriptographed[i] = string[i];
                    }
                    printf("%s \n", string);
                } else{
                    printf("Senha invalida!!");
                    option = 3;
                }

                
                break;
            
            case 3:
                printf("Obrigado!! Volte sempre!! \n");
                break;
            default:
                printf("Opcao invalida!! Tente novamente!! \n");
        }


    } while (option != 3);

    return 0;
}

void menu(){

    printf("|-----------MENU------------|\n");
    printf("|  1 - Criptografar         |\n");
    printf("|  2 - Descripografar       |\n");
    printf("|  3 - Sair                 |\n");
    printf("|---------------------------|\n");

    printf("Escolha a opcao: ");

}
