//4. Analise a função a seguir:
//a) O que essa função retorna?
//b) Quantas vezes a comparação 1 é realizada?
//c) Quantas vezes a comparação 2 é realizada?
//d) Qual é o total de comparações?

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

int descubra(int vet[], int n, int k);
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
	
	printf("a) A funcao retorna o valor: %d\n", descubra(vet, 10, n));
	
	printf("b) Nao consegui fazer\n");
	printf("c) Nao consegui fazer\n");
	printf("d) Nao consegui fazer\n");
	
	
	
	
	return 0;
}

int descubra(int vet[], int n, int k){
	int i;
	int x=0;
	int y=0;
	
	for(i=0; i<size; i++){
		if(vet[i]<k){
			x+=vet[i];
		}
		printf("%d", i);
		if(vet[i]>k){
			y+=vet[i];
		}
			
		return y-x;
	}
}

