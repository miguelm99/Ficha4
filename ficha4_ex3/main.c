#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salto=0, soma=0, t=0, m=0, maior=0, menor=999;
    do{
    printf("Indique o comprimento do salto: ");
    scanf("%i", &salto);
    soma=soma+salto;
    t=t+1;
    if(maior < salto){
        maior=salto;
    }
    if(salto!=0 && salto<menor){
        menor=salto;
    }
    }while(salto!=0);
    m=soma/t;
    printf("Maior saltos: %i \n", maior);
    printf("Menor saltos: %i \n", menor);
    printf("Num de saltos: %i \n", t-1);
    printf("media de salto: %i", m);
    return 0;
}
