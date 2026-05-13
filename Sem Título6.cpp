#include <stdio.h>
int main(void){
	int n;
	printf("Digite a quantidade de elementos do vetor:\n");
	scanf("%d", &n);
	int vet[n];
	for(int i=0; i<n; i++){
		printf("Digite o %d° elemento\n", i+1);
		scanf("%d", &vet[i]);
	}
	for(int i=0;i<n; i++){
		printf("%d\t", vet[i]);
	}
	int cont=0;
	int elem;
	printf("Digite o número que deseja procurar no vetor: \n");
	scanf("%d", &elem);
	for(int i=0; i<n; i++){
		if(vet[i] == elem)
			cont++;
	}
if(cont == 0){
    printf("O número que você digitou não consta na lista");
} else {
    printf("\nO elemento %d apareceu %d vezes", elem, cont);
}
	return(0);
}
