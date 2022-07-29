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
<br><br>
- Desafio 2:

Basicamente pára realizar o cáluclo do fatorial fiz um loop decompondo o "valor_n" em 1 enquanto ele for maior que zero e em cada loopada atribuir um o valor já multiplicando.
<br>
Fiz duas alterações no parâmentro da função "calc_fatorial(&vf,\*pv)", para que dentro da função seja possivel fazer a desreferenciação e atribuir valores, e já na váriavel "pv" fiz a dereferenciação já no parâmetro para que seja possivel ultilizar o valor inteiro. 

```c
void calc_fatorial(int *valor_ft, int valor_n)
{   
    *valor_ft = 1;

    while(valor_n > 0)
    {
        *valor_ft *= valor_n;
        valor_n--;
    }
}
```

<br>

- Desafio 3:
  
Para resolver o exercico eu basicamente ordenei o array por meio do algoritmo de insert_sort, após isso fui somando os index em ordem crescente até que o valor
da referencia não seja passado. E com base na quantidade de vezes que foi loopado é obtido o valor que precisamos.

```c
int maximo_elementos(int valor_ref, int* array, int tamanho_array)
{
    int aux = 0;
    int i = 0;
    bubble_sort(array, tamanho_array);

    for(i = 0; aux < valor_ref; i++)
        aux = aux + array[i];
    return(i - 1);
}
```
