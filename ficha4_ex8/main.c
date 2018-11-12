#include <stdio.h>
#include <stdlib.h>

int main()
{   int saida;
    do{
    char opcao;

    saida=0;
    printf("************************ Menu Principal ******************************\n");
    printf("A - Opção A\n");
    printf("B - Opção B\n");
    printf("C - Opção C\n");
    printf("F - Fim\n\n");
    printf("Opcao: ");
    scanf(" %c", &opcao);

    switch(opcao){
    case 'A':
    case 'a':
                printf("opção A\n");
    break;

    case 'B':
    case 'b':
                printf("opção B\n");
    break;

    case 'C':
    case 'c':
                printf("opção C\n");
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
