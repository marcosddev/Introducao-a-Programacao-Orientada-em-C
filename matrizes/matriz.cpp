#include<stdio.h>

//Função para ler a matriz

void lerMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
	int i, j;
	for(i=0; i<linhas; i++){
	for(j=0; j<colunas; i++){
	printf("Elemento [%d][%d]: ", i+1, j+1);
	scanf("%d", &matriz[i][j]);	
	}	
}
}

//Função para imprimir a matriz

void imprimirMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
	int i,j;
	printf("\nMatriz:\n");
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; i++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
}
}

//Função para calcular o somatório

int somatorio(int linhas, int colunas, int matriz[linhas][colunas]){
	int i, j, soma=0;
	
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; i++){
		soma += matriz[i][j];	
}
}
return soma;
}

//Função para calcular o produtório

int produtorio(int linhas, int colunas, int matriz[linhas][colunas]){
	int i, j, produto = 1;
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; i++){
		produto *= matriz[i][j];	
		}
}
return produto;
}

//Função para diagonal principal

void diagonalPrincipal(int linhas, int colunas, int matriz[linhas][colunas]){
	int i;
	if(linhas !=colunas){
		printf("\nA matriz nao e quadrada!\n");
		return;
	}
	printf("\nDiagonal Principal: ");
	for (i=0; i<linhas; i++){
		printf("%d", matriz[i][j]);
	}
	printf("\n");
}

//Função para o maior elemento

int maiorElemento(int linhas, int colunas, int matriz[linhas][colunas]){
	int i, j, maior = matriz[0][0];
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; i++){
			if(matriz[i][j]>maior){
			 maior = matriz[i][j];
			}
		}
}
return maior;
}

//Função para menor elemento

int menorElemento(int linhas, int colunas, int matriz[linhas][colunas]){
	int i,j, maior = matriz[0][0];
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; i++){
		if(matriz[i][j]>maior){
			maior = matroz[i][j];
		}	
	}
}
return menor;
}

//Função para buscar elemento

void buscarElemento(int linhas, int colunas, int matriz[linhas][colunas], int valor){
	int i, j, encontrado = 0;
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; i++){
			if(matriz[i][j] == valor){
				printf("\nElemento encontrado na posicao [%d][%d]\n", i, j);
				encontrado = ++
			}
		}
}
if(!encontrado){
	printf("\nElemento nao encontrado!\n")
}
printf("\nValor encontrado %d vezes", encontrado);
}

//Main

int naub(){
	int linhas, colunas;
	int opcao;
	int valorBusca;
//Entrada das dimensões
printf("Digite o número de linhas: ");
scanf("%d", &linhas);
printf("Digite o número de colunas: ");
scanf("%d", &colunas);
int matriz [linhas][colunas];
//Leitura da matriz
lerMatriz(linhas, colunas, matriz);

do{
	printf("\n====== MENU ======");
	printf("1. Imprimir matriz\n");
	printf("2. Somatorio dos elementos\n");
	printf("3. Produtorio dos elementos\n");
	printf("4. Mostrar diagonal principal\n");
	printf("5. Maior elemento\n");
	printf("6. Menor elemento\n");
	printf("7. Buscar elemento\n");
	printf("0. Sair\n");
	printf("Escolha uma opcao: \n");
	scanf("%d", &opcao);
	
switch(opcao){
	
	case 1:
	imprimirMatriz(linhas, colunas, matriz);
	break;
	
	case 2:
	printf("\nSomatorio = %d\n", somatorio((linhas, colunas, matriz));
	break;
	
	case 3: 
	printf("\nProdutorio = %d\n", produtorio((linhas, colunas, matriz))
	break;
	
	case4:
	diagonalPrincipal(linhas, colunas, matriz);
	break;
	
	case 5:
	printf("\nMaior elemento =%d\n", maiorElemento(linhas, colunas, matriz));
	break;
	
	case 6:
	printf("\nMenor elemento = %d\n", menorElemento(linhas, colunas, matriz));
	break;
	
	case 7:
	printf("\nDigite o elemento para busca: ");
	scanf("%d", %valorBusca)
	
	buscarElemento(linhas, colunas, matriz);
	break;
	
	default:
		printf("\nOpcao invalida!\n");
	}
} while(opcao !=0);

return 0;

}
