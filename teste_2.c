//-------------------------------------------------------------------------------------------------------
/*
* @2 
* Desenvolva a função que retorna o valor fatorial no parâmetro 'valor_ft' 
*
*/
//-------------------------------------------------------------------------------------------------------

#include <stdio.h>

void calc_fatorial(int *valor_ft, int valor_n)
{    
    *valor_ft = 1;

    while(valor_n > 0)
    {
        *valor_ft *= valor_n;
        valor_n--;
    }
}

int main() 
{
    int v; 
    int vf = 0;
    int *pv = &v;
 
    scanf("%d", &v);
    calc_fatorial(&vf, *pv);
    printf("Valor fatorial de: [%d] é [%d]", v, vf);
 
    return 0;
}
