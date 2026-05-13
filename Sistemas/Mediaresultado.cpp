
#include <stdio.h>

int main()
{
    float av1, av2, media;
    int aprovado;
    printf("digite a nota da av1 do aluno:");
    scanf("%f", &av1);
    printf("\ndigite a nota da av2 do aluno:");
    scanf("%f",&av2);
    media=(av1+av2)/2;
    if(media>=6){
    	aprovado = 1;
    	printf("\nAluno aprovado com media %.2f", media);
	}
	else{
		aprovado = 0;
		printf("\nAluno reprovado media %.2f",media);
	}
	return 0;
}
}          
