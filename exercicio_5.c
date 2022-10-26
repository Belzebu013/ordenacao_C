//5. Implemente a função recursiva da busca binária.


#include <stdio.h>
#include <stdlib.h>
#define size 20

//funcao de ordenação
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

//declaração da funcao 
int busca_binaria_recursiva(int vet[size], int begin, int end, int item);

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
	if(busca_binaria_recursiva(vet, 0, (size-1),n)!=-1){
		printf("o valor %d esta presente no array na posicao %d", n, busca_binaria_recursiva(vet, 0, (size-1),n));
	}else{
		printf("o valor %d nao esta presente no array", n);
	}
	
	return 0;
}

//realizando a funcao recursiva da busca binaria
int busca_binaria_recursiva(int vet[size], int begin, int end, int item){

    int i = (begin + end) / 2;

    if (begin > end) {
        return -1;
    }

    if (vet[i] == item) {
        return i;
    }

    if (vet[i] < item) {
        return busca_binaria_recursiva(vet, i + 1, end, item);

    } else {  // vector[i] > item
        return busca_binaria_recursiva(vet, begin, i - 1, item);
    }
}
