#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n,  i;
    float somatorio = 0;
    printf("Introduza os valores de limite inferior: ");
    scanf("%i", &m);
    printf("Introduza os valores de limite superior: ");
    scanf("%i", &n);
    if(n<m){
    printf("o limite inferior nao pode ser maior que o limite superior\n");
    printf("Introduza os valores de limite superior");
    scanf("%i", &n);
    }
    printf("limite inferior %i\n", m);
    printf("limite superior %i\n", n);
    for (i = 0; i <= n; i++){
        somatorio += 2.0*m / (5.0 + m*m);
    }
    printf("Somatorio = %f\n", somatorio);

    return 0;
}
