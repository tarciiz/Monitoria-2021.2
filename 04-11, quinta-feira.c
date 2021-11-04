#include <stdio.h>

int main(void) {
	//Trocando valor do vetor
	char palavra[10] = "ifba e bom";
	
	printf("Palavra antes de alterar =  %s\n", palavra);

	for(int i = 0; i < 10; i++){
		if(palavra[i] == 'b' && i == 2)
			palavra[i] = 'p';
	}

	printf("Palavra depois de alterar = %s", palavra);

	//posicao-> | 1 | 2 | 3 | 4 |
	//indice -> | 0 | 1 | 2 | 3 |
	//valor  -> | i | f | b | a |
	
	//Somando o vetor
	int numeros[5] = {9, 15, 16, 20, 48};

	int resultado = 0;

	for(int i = 0; i < 5; i++){
		resultado += numeros[i];
	}		

	printf("O resultado é: %i", resultado);
	

	//Encontrado o menor e maior valor

	float vet[5] = {5, 15, 16, 20, 48};
	float maior = 0;

	for(int i = 0; i < 5; i++){
		if(vet[i] > maior)
			maior = vet[i];
	}

	float menor = maior;

	for(int i = 0; i < 5; i++){
		if(vet[i] < menor)
			menor = vet[i];
	}

	printf("O menor é: %.2f\n", menor);
	printf("O maior é: %.2f", maior);


	int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for(int i = 0; i < 10; i++){
		if(i%2 == 1)
			printf("num[%i] = %i\n", i, num[i]);
	}

	return 0;
}