#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcao;
    printf("************************ Menu Principal ******************************");
    printf("A - Op��o A");
    printf("B - Op��o B");
    printf("C - Op��o C");
    printf("F - Fim\n");
    printf("Opcao: ");
    scanf(" %c", &opcao);

    switch(opcao){
    case 'A':
    case 'a':

    break;

    case 'B':
    case 'b':
    break;

    case 'C':
    case 'c':
    break;

    default:
        printf("a opcao escolhida nao existe");
        break;

    }
    return 0;
}
