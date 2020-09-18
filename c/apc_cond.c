#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int n1, n2, n3, n4, n5;
    printf("Type the first number: ");
    scanf("%d", &n1);
    
    printf("Type the second number: ");
    scanf("%d", &n2);
    
    printf("Type the third number: ");
    scanf("%d", &n3);    
    
    printf("Type the fourth number: ");
    scanf("%d", &n4);
    
    printf("Type the fifth number: ");
    scanf("%d", &n5);

    if(n1 + n2 < n3 && n4 + n5 > n3){
        printf("Value accepted!!\n");
    }   else
        printf("Value not accepted!!\n");
    

    return 0;
}