//-------------------------------------------------------------------------------------------------------
/*
* @1
* Desenvolver a função: ‘maior_valor’; que recebe quatro valores do tipo inteiro e retorna o maior valor.
* 
*/
//-------------------------------------------------------------------------------------------------------

#include <stdio.h>

int maior_valor(int v1, int v2, int v3, int v4)
{ 
    int maiorNumero;
    int i;

	maiorNumero = v1;
    i = 0;
    while (i < 4)
	{
		if (v2 > maiorNumero)
			maiorNumero = v2;
		else if (v3 > maiorNumero)
			maiorNumero = v3;
		else if (v4 > maiorNumero)
			maiorNumero = v4;
        i++;
	}
	return (maiorNumero);
}

int main()
{ 
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int valor = maior_valor(a, b, c, d); 
	printf("%d", valor); 
	return 0;
}