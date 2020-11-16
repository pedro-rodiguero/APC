#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int i, cont, cont_primo;
    int nao_primo, primo[i], flag, y;
    int n[i];

    cont = 0;
    flag = 0;
    cont_primo = 0;
    nao_primo = 0;

    scanf("%d", &n[i]);
    cont = cont + 1; 
    
    while (n[i] > 1){
        scanf("%d", &n[i]);
        cont = cont + 1;    
        for (y = 2; y <= n[i] / 2; ++y) {
            if (n[i] % y == 0) {
                flag = 1;
                nao_primo = nao_primo + 1;
            }   else{
                    flag = 0;
            }
        }
    }

    cont_primo = cont - nao_primo;

    printf("Numeros digitados: %d \n", cont);
    printf("Numeros primos: %d \n", cont_primo);

    return 0;
}