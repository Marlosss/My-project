// Escreva um programa  que receba do usuário um vetor com 20 valores
// inteiros e apresente o maior, o menor e suas respectivas posições
// em que os mesmos foram informados. Caso existam números iguais
// mostre a  posição da primeira ocorrência. 

#include<stdio.h>
#define TAM 20

int main (){
	
	int vet[TAM], i, maior, posMaior, menor, posMenor;
	
	// preenche o vetor
	
	for(i = 0; i< TAM; i++){
		scanf("%i", &vet[i]);
	}
	
	// Encontra  o maior vetor
	maior= vet[0];
	posMaior = 0;
	for(i = 1; i< TAM; i++){
		if(vet[i] > maior) {
			maior = vet[i];
			posMaior = i;
		}	
	}	
	
		// Encontra  o maior vetor
	menor= vet[0];
	posMenor = 0;
	for(i = 1; i< TAM; i++){
		if(vet[i] < menor) {
			menor = vet[i];
			posMenor = i;
		}	
	}	
	
	// Mostra o vetor
	printf("Vetor: ");
	for(i = 0; i< TAM; i++){
		printf("%i ", vet[i]);
	}
	
	printf("\nMaior valor: %i - posicao: %i", maior, posMaior+1);
	printf("\nMenor valor: %i - posicao: %i", menor, posMenor+1);
	
}
