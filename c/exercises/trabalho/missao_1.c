#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    float weight, height, MCI;
    int num;
    int option;
    float num_1, num_2, product, result;

    do {

        printf("|---------------------------| \n");
        printf("|            MENU           | \n");
        printf("|   1 - Info                | \n");
        printf("|   2 - Calculate MIC       | \n");
        printf("|   3 - Odds or even        | \n");
        printf("|   4 - Multiply            | \n");
        printf("|   5 - Division            | \n");
        printf("|   6 - Exit                | \n");
        printf("|---------------------------| \n");

        printf("Select one of the menu options: ");
        scanf("%d", &option);
        if (option > 6 || option < 1)
        printf("Invalid option!! Please, try again!! \n");
    switch (option){
        case 1:
            printf("Student: Pedro Menezes Rodiguero \n");
            printf("Registration: 190139323 \n");
            break;

        case 2:
            printf("Enter the height in meters: ");
            scanf("%f", &height);
            printf("Enter the weight in kilograms: ");
            scanf("%f", &weight);
            MCI = weight / (height * height) ;
            printf(" MCI: %.2f \n", MCI);
            break;
        case 3:
            printf("Enter the number to be evaluated: ");
            scanf(" %d", &num);
            if (num % 2 == 0)
                printf("Even \n");
            else {
                    printf("Odd \n");
            }
            break;
        case 4:
            printf("Enter the number to be multiplied: ");
            scanf(" %f", &num_1);
            printf("Enter the number to be multiplied: ");
            scanf(" %f", &num_2);
            product = num_1 * num_2;
            printf(" %.2f \n", product);
            break;
        case 5: 
            printf("Enter the number to be divided: ");
            scanf(" %f", &num_1);
            printf("Enter the number to be divided by: ");
            scanf(" %f", &num_2);
            result = num_1 / num_2;
            printf(" %.2f \n", result);
            break;
        case 6:
            printf("Thank you for participating!! Come back always!! \n");

        }

        } while (option != 6);
    return 0; 
}