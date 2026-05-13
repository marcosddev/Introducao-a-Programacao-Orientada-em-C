#include <stdio.h>
int main(void){
	int n;
	printf("Quantos elementos tem o seu vetor?\n");
	scanf("%d", &n);
	int vet[n];
	for(int i=0; i<n; i++){
		printf("Digite o %d elemento\n", i+1);
		scanf("%d", &vet[i]);
	}
	for(int i=0; i<n; i++){
		printf("%d\t", vet[i]);
	}
	int maior, menor;
	maior=vet[0];
	menor=vet[0];
	for(int i=1; i<n; i++){
		if(vet[i]>maior)
			maior=vet[i];
		if(vet[i]<menor)
			menor=vet[i];
	}
	printf("\nO maior numero do vetor e %d", maior);
	printf("\nO menor numero do vetor e %d", menor);
	return(0);
}
