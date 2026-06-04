//7) Fazer um programa que faz uma pesquisa com pessoas entre 18 e 80 anos. O programa deve solicitar a quantidade de pessoas a ser entrevistadas. Armazenar a idade dessas pessoas em um vetor e imprimir quantas pessoas de cada faixa etária foram entrevistadas de acordo com a tabela abaixo:  
//>= 18 e < 35  =  jovem 
//>=35 e <65  =  adulto  
//>= 65  = idoso  
//O programa deve imprimir o quantitativo de jovens, adultos e idosos. Desta forma essas variáveis que irão contar deverão ser inicializadas com zero. 

#include <stdio.h> 

int main() { 
    int qtd, i, idade; 
    int jovens = 0, adultos = 0, idosos = 0; 
    printf("Quantidade de pessoas entrevistadas: "); 
    scanf("%d", &qtd);
    int idades[qtd];
    for(i = 0; i < qtd; i++) { 
        printf("Digite a idade da pessoa %d: ", i + 1); 
        scanf("%d", &idades[i]); 
        idade = idades[i]; 
        if(idade >= 18 && idade < 35) 
            jovens++; 
        else if(idade >= 35 && idade < 65) 
            adultos++; 
        else if(idade >= 65) 
            idosos++; 
    } 
    printf("Jovens: %d\n", jovens); 
    printf("Adultos: %d\n", adultos); 
    printf("Idosos: %d\n", idosos); 
return 0; 
} 
