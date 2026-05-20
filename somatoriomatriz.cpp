#include <stdio.h>

int main(){
	int linhas, colunas;
	int i, j;
	int soma = 0;
	
	//Leitura da quantidade de linhas e colunas
	printf("Digite o número de linhas da matriz: ");
	scanf("%d", &linhas);
	printf("Digite o número de colunas da matriz: ");
	scanf("%d", &colunas);
	
	//Declaração da matriz após ler linhas e colunas
	int matriz[linhas][colunas];
	
	//Leitua dos elementos da matriz
	printf("\nDigite os elementos da matriz:\n");
	for(i = 0; i<linhas; i++){
		for(j = 0; j<colunas; j++){
			printf("Elemento [%d][%d]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		//Somatório dos elementos
		soma += matriz[i][j];
	}
}
//Impressão da matriz
printf("\nMatriz digitada:\n");
for(i=0; i<linhas; i++)
	for(j = 0; j<colunas; j++){
	printf("%d\t", matriz[i][j]);
	printf("\n");
}
//Impressão da soma
printf("\nSomatório dos elementos = %d\n", soma);
return 0;
}
