#include <stdio.h>
#include <stdlib.h>

int main()
{   int saida;
    do{
    char opcao;

    saida=0;
    printf("************************ Menu Principal ******************************\n");
    printf("A - Op��o A\n");
    printf("B - Op��o B\n");
    printf("C - Op��o C\n");
    printf("F - Fim\n\n");
    printf("Opcao: ");
    scanf(" %c", &opcao);

    switch(opcao){
    case 'A':
    case 'a':
                printf("op��o A\n");
    break;

    case 'B':
    case 'b':
                printf("op��o B\n");
    break;

    case 'C':
    case 'c':
                printf("op��o C\n");
    break;

    case 'F':
    case 'f':
                saida=1;
    break;

    default:
        printf("a opcao escolhida nao existe");
        break;
    }
    }while(saida!=1);

    return 0;
}
