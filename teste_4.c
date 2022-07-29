#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int calcular_maximum_bitwise(int v1, int v2)
{
    //Não consegui desenvolver o algoritmo do zero 
    int result = v1 ^ ((v1 ^ v2) & -(v1 < v2)); 
    return(result);
}

int main()
{
    int valor_1, valor_2, maior_valor;
    printf("Informe os valores.\n");
    scanf("%d %d", &valor_1, &valor_2);
    maior_valor =  calcular_maximum_bitwise(valor_1, valor_2);

    printf("O maior valor e: %d .\n", maior_valor);

    return 0;
}
