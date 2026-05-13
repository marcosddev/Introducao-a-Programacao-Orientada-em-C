#include<stdio.h>

float calcularmedia(float av1, float av2){
	return(av1 + av2)/2;
}
void verificarsituacao(float media, char situacao[]){
	if(media>=7){
		sprintf(situacao,"Aprovado");
	}
	else if(media>=5){
		sprintf(situacao,"Reprovado");
	}
}
void cadastraralunos(char nomes[][50], float av1[], float av2[], float medias[], char situacao[][20], int qtd){
	int i;
	for(int i=0;i<qtd;i++){
		printf("\n--- Cadastro do Aluno %d---\n",i+1);
		printf("Nome: ");
		scanf("%[^\n]", nomes[i]);
		printf("Nota AV1: ");
		scanf("%f", &av1[i]);
		printf("Nota AV2: ");
		scanf("%f", &av2[i]);
		
		medias[i]=calcularmedia(av1[i], av2[i]);
		
		verificarsituacao(medias[i], situacao[i]);
	}
}
void mostrartabela(char nomes[][50], float av1[], float av2[], float medias[], char situacoes[][20], int qtd){
	int i;
	printf("\n==========TABELA DE ALUNOS==========\n");
	printf("%-20s %-10s %-10s %-15s\n", "NOME", "AV1", "AV2", "MEDIA", "SITUACAO");
	printf("--------------------------------------\n");
	for(i=0; i<qtd; i++){
		printf("%-20s %-10.2fs %-10.2f %-10.2f %-15s\n", nomes[i], av1[i], av2[i], medias[i], situacoes[i]);
	}
}
int main(){
	int qtd;
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &qtd);
	char nomes[qtd][50];
	float av1[qtd], av2[qtd], medias[qtd];
	char situacoes[qtd][20];
	
	cadastraralunos(nomes, av1, av2, medias, situacoes, qtd);
	mostrartabela(nomes, av1, av2, medias, situacoes, qtd);
	return(0);
}
