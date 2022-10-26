//1. Considere a implementação do algoritmo Busca Sequencial apresentada na aula. 
//Faça uma versão deste algoritmo, trocando a estrutura de repetição for por while.

#include <stdio.h>
#include <stdlib.h>
#define size 10

int busca_seq(int vet[size], int item);

int main(){
	int vet[size], i, n;
	//criar o vetor
	for(i=0; i<10;i++){
		//preenche o vetor com numeros aleatorios de 0 a 100(pesquisei a funcao na internet para ficar mais rapido);
		vet[i] = rand() % 100;
	}
	
	//lista o vetor;
	for(i=0; i<10;i++){
		printf(" %d ", vet[i]);
	}
	
	//recebe a resposta da função exibe ao usuario a resposta;
	printf("Digite o numero a ser buscado: ");
	scanf("%d", &n);
	if(busca_seq(vet, n)!=-1){
		printf("o numero %d presente no array na posicao %d",n, busca_seq(vet, n));
	}else{
		printf("o numero %d nao esta presente no array", n);
	}
	
	return 0;
}
//execução da funcao;
int busca_seq(int vet[size], int item){
	int i=0;
	while(i<size){
		if(vet[i]==item){
			return i;
		}
	i++;
	}
	return -1;
}
