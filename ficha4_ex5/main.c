#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    printf("Tamanho da letra N: ");
    scanf("%d", &t);
    for(int i=0; i<=t; i++){

        for(int y=0; y<=t; y++){
            if(y==0||y==t||y==i){
            printf("x");}
            else{
            printf(" ");}
        }
        printf("\n");
    }
    return 0;
}
