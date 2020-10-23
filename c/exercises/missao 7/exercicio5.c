#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    float medida, polegada, jarda, milha;

    printf("Digite uma medida em pes: ");
    scanf("%f", &medida);

    polegada = medida * 12;
    jarda = medida / 3;
    milha =  jarda / 1760;

    printf("%.2f polegadas, ", polegada);
    printf("%.2f jardas, ", jarda);
    printf("%.8f milhas\n", milha);
    
    
    return 0;
}