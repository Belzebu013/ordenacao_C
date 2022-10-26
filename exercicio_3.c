//3. Altere o método de busca binária para que, a cada divisão do vetor, ele imprima quantos elementos foram descartados na busca.

#include <stdio.h>
#include <stdlib.h>
#define size 10


void ordena(int vet[size], int n)
{
	int i, j, aux, min;
	for(i = 0; i < n-1; i++) {
	min = i;
	for(j = i+1; j < n; j++) {
		if(vet[j] < vet[min]) {
		min = j;
	}
	}
	aux = vet[i]; vet[i] = vet[min]; vet[min] = aux; //troca
	}
	}

int busca_bin(int vet[size], int item);

int main(){
	int vet[size], i, n;
	//criar o vetor
	for(i=0; i<size;i++){
		//preenche o vetor com numeros aleatorios de 0 a 100(pesquisei a funcao na internet para ficar mais rapido);
		vet[i] = rand() % 50;
	}
	
	//ordena o vetor;
	ordena(vet, size);
	printf("\n");
	
	//exibe vetor ordenado
	for(i=0; i<size;i++){
  	printf(" %d ", vet[i]);
  }
	
	printf("\nDigite o numero a ser buscado: ");
	scanf("%d", &n);
	
	//tratando a resposta da funcao
	if(busca_bin(vet, n)!=-1){
		printf("o valor %d esta presente no array na posicao %d", n, busca_bin(vet, n));
		
	}else{
		printf("o valor %d nao esta presente no array", n);
	}
	
	return 0;
}


//execução da funcao de busca e alteração para o exercicio 3;
int busca_bin(int vet[size], int item){
	int aux=0,  div1 = 1, div2 = 1;
	int begin = 0;
	int end = size - 1;
	while(begin <= end){
		int i = (begin + end) /2;
		if(vet[i] == item){
			return i;
			
		}
	//mostra o numero de posicoes perdidas a cada divisao
	//nao consegui ditar a duplicata, entao esta aparecendo 2x a msm informação.
		if(vet[i] < item){
			begin = i + 1;
			aux = i - vet[0];
			printf("Descartados: %d | divisao: %d\n", aux, div1);
			div1++;
		}else{
			end = i;
			aux = (size-1) - i;
			printf("Descartados: %d | divisao: %d\n", aux, div2);
			div2++;
		}
		
	}
	return -1;
	
}
