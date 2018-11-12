#include <stdio.h>
#include <stdlib.h>

void escolhaA();
void escolhaB();
void escolhaC();

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
                system("cls");
                escolhaA();
    break;

    case 'B':
    case 'b':
                printf("opção B\n");
                system("cls");
                escolhaB();
    break;

    case 'C':
    case 'c':
                printf("opção C\n");
                system("cls");
                escolhaC();

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

void escolhaA(int a){
    int saida;
    do{
    char opcao;

    saida=0;
    printf("************************ Menu Principal ******************************\n");
    printf("1 - Opção A.1\n");
    printf("2 - Opção A.2\n");
    printf("3 - Opção A.3\n");
    printf("0 - Voltar ao menu inicial\n\n");
    printf("Opcao: ");
    scanf("%d", &a);

    switch(a){
    case 1:
                printf("opção A\n");
                system("cls");
    break;

    case 2:
                printf("opção B\n");
                system("cls");
    break;

    case 3:
                printf("opção C\n");
                system("cls");
    break;

    case 0:
                saida=1;
    break;

    default:
        printf("a opcao escolhida nao existe");
        break;
    }
    }while(saida!=1);
    return a;
}

void escolhaB(int b){
int saida;
    do{
    char opcao;

    saida=0;
    printf("************************ Menu Principal ******************************\n");
    printf("1 - Opção B.1\n");
    printf("2 - Opção B.2\n");
    printf("3 - Opção B.3\n");
    printf("0 - Voltar ao menu inicial\n\n");
    printf("Opcao: ");
    scanf("%d", &b);

    switch(b){
    case 1:
                printf("opção A\n");
                system("cls");
    break;

    case 2:
                printf("opção B\n");
                system("cls");
    break;

    case 3:
                printf("opção C\n");
                system("cls");
    break;

    case 0:
                saida=1;
    break;

    default:
        printf("a opcao escolhida nao existe");
        break;
    }
    }while(saida!=1);
    return b;
}

void escolhaC(int c){
int saida;
    do{
    char opcao;

    saida=0;
    printf("************************ Menu Principal ******************************\n");
    printf("1 - Opção C.1\n");
    printf("2 - Opção C.2\n");
    printf("3 - Opção C.3\n");
    printf("0 - Voltar ao menu inicial\n\n");
    printf("Opcao: ");
    scanf("%d", &c);

    switch(c){
    case 1:
                printf("opção A\n");
                system("cls");
    break;

    case 2:
                printf("opção B\n");
                system("cls");
    break;

    case 3:
                printf("opção C\n");
                system("cls");
    break;

    case 0:
                saida=1;
    break;

    default:
        printf("a opcao escolhida nao existe");
        break;
    }
    }while(saida!=1);
    return c;
}
