#include <stdio.h>
#include <string.h>
int main(){
	float av1, av2, media;
	char situacao[20];
	printf("Digite a nota da AV1 do aluno: ");
	scanf("%f", &av1);
	printf("Digite a nota da AV2 do aluno: ");
	scanf("%f", &av2);
	media = (av1 +av2)/2;
	if (media >= 6){
		strcpy(situacao, "Aprovado");
	}else{
		strcpy(situacao, "Reprovado");
	}
	
	//Exibição em formato de tabela
	
	printf("\n =*20\n");
	printf(" BOLETIM DO ALUNO\n");
	printf("\n ==============================\n");
	printf("|AV1 | AV2 |MEDIA|SITUACAO|\n");
	printf("\n --------------------------------\n");
	printf("|%-5.2f| %-5.2f| %-6.2f| %9s|\n", av1, av2, media, situacao);
		printf("\n ==============================\n");
	
	return 0;
	
 }

