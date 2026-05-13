#include <stdio.h>
#include <stdlib.h>

int main(void){
	int vet[10];
	int soma =0;
	for(int i=0; i<10; i++){
		printf("Digite o %d° elemento\n", i+1);
		scanf("%d", &vet[i]);
		soma = soma+vet[i];
	}
	for(int i=0; i<10; i++){
		printf("%d\t", vet[i]);
	}
	printf("\nO somtório dos elementos do vetor é %d", soma);
	return(0);
}
