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

## Lógica usada em cada exercício:

<br>

- Exercício 1:
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
- Exercício 2:

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

<br><br>

- Exercício 3:
  
Para resolver o exercico eu basicamente ordenei o array por meio do algoritmo de insertion sort, após isso fui somando os índices em ordem crescente até que o valor
da referencia não seja passado. E com base na quantidade de vezes que foi loopado é obtido o valor que precisamos.

```c
int maximo_elementos(int valor_ref, int *array, int tamanho_array)
{
    insertionSort(array,tamanho_array);
    int aux;
    int i;
     
    aux = 0;
    i = 0;
    while(aux < valor_ref)
    {
        aux += array[i];
        i++;
    }
    return(i - 1);
}
```
<br><br>

- Exercício 4:
  
 Achei o exercicio mais dificil, por mais que já tenha ultilizado operadores de "bitwise" em alguns projetos, não consegui desenvolver uma lógica do zero.
 Procurei na internet e consegui achar a solução.

```c
int calcular_maximum_bitwise(int v1, int v2)
{
    int result = v1 ^ ((v1 ^ v2) & -(v1 < v2)); 
    return(result);
}
```

<br><br>


- Exercício 5:
  
 Á lógica que foi utilizada, foi pegar o primeira primeira posição da cartela, comparar com todas as outras posições do sorteio e verificar se em algum indice é igual, se for é colocado o "X" na marcação se não "O", depois é feito a mesma coisa com todos os outros indices da cartela.

```c
void avaliar_marcacao(int *sorteio, int tam_sorteio, int *cartela, char* marcacao, int tam_marcacao) {

    int i;
    int j;

    i = 0;
    while(cartela[i])
    {
        j = 0;
        while (sorteio[j])
        {
            if (sorteio[j] == cartela[i])
            {
                marcacao[i] = 'X';
                break;
            }
            else
                marcacao[i] = 'O';
            j++;
        }
        i++;
    }
}
```
