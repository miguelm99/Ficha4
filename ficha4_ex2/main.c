#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont, soma;
    do{
    printf("Introduza um número inteiro: ");
    scanf("%i", &num);
    if(num<0){
        printf("Insere um numero positivo");
    }
    for(cont=0;cont<=5;cont++){
        cont = cont + num;
    }

    }while();
    return 0;
}
