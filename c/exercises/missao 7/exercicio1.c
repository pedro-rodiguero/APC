#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    float celcius, fah;
    printf("Digite a temperatura em Celcius: ");
    scanf("%f", &celcius);
    fah = (celcius * 9/5)+32;
    printf("Temp. em fah: %.1f \n", fah);

    return 0;
}