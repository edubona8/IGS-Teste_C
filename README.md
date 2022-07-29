# IGS-Teste_C
Teste de conhecimento na linguagem C.

---

## Como utilizar:

### Criar executaveis

Para compilar e gerar os arquivos executáveis é só inserir o seguinte comando dentro do diretório do repositório: 

```
$ make
```
Após isso todos os arquivos compilados vão ser gerados. Assim basta executar seu respectivo arquivo objeto. Por exemplo:

```
$ ./teste_1.o
```

---

## Lógica ultilizada em cada exercício:


- Desafio 1:
```c
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
```
- Desafio 2:

```c
void calc_fatorial(int *valor_ft, int valor_n)
{    
    /* Basicamente para realizar o cálculo do fatorial fiz um loop decompondo o valor_n em 1 enquanto ele for maior que zero
     e atribuimos na váriavel *valor_ft já multiplicando.
    */
    /* Fiz duas alterações nos parâmentros da função "calc_fatorial(&vf, *pv)" atribuindo o endereço na váriavel "vf", para que dentro da função ser possivel fazer a    desreferenciação para atribuir valores, e já na váriavel "pv" fiz a desreferencição já no paramentro para que seja possivel ultilizar o valor dela.
     */
    
    *valor_ft = 1;

    while(valor_n > 0)
    {
        *valor_ft *= valor_n;
        valor_n--;
    }
}
```

