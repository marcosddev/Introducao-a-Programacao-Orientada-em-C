//2) Ler um número inteiro e imprimir seu sucessor e seu antecessor.  

#include <stdio.h> 

int main(){ 
    int numero; 
    printf("Digite um numero inteiro: "); 
    scanf("%d", &numero); 
    printf("Antecessor: %d\n", numero - 1); 
    printf("Sucessor: %d\n", numero + 1); 
return 0; 
} 

//3) Escreva um programa em linguagem C que calcule a autonomia de um veículo. O programa deve solicitar ao usuário a quantidade de combustível (em litros) no tanque e o consumo médio do veículo (em km/l). Com esses dados, o programa deve calcular e exibir quantos quilômetros o veículo ainda pode percorrer com o combustível disponível.  
//Exemplo de entrada:  
//Litros no tanque: 40  
//Consumo médio (km/l): 12  
//Saída esperada:  
//Autonomia: 480 km  

#include <stdio.h> 
int main(){ 
    float litros, consumo, autonomia; 
    printf("Litros no tanque: "); 
    scanf("%f", &litros); 
    printf("Consumo medio (km/l): "); 
    scanf("%f", &consumo); 
    autonomia = litros * consumo; 
    printf("Autonomia: %.2f km\n", autonomia); 
  return 0; 
}  

//4) Fazer um programa que solicite a largura e comprimento de terreno em metros e imprima a área do terreno. A área é o produto entre a largura e o comprimento,  

#include <stdio.h> 

int main() { 
    float largura, comprimento, area; 
    printf("Digite a largura do terreno: "); 
    scanf("%f", &largura); 
    printf("Digite o comprimento do terreno: "); 
    scanf("%f", &comprimento); 
    area = largura * comprimento; 
    printf("Area do terreno: %.2f m²\n", area); 
  return 0;
} 

//5) Faça um programa que solicite o número de elementos de vetor, solicite os elementos e armazeno-os no vetor, e imprimia a quantidade de elementos pares e ímpares  

#include <stdio.h> 

int main() { 
    int n, i, pares = 0, impares = 0;
    printf("Quantidade de elementos: "); 
    scanf("%d", &n); 
    int vetor[n]; 
    for(i = 0; i < n; i++) { 
        printf("Digite o elemento %d: ", i + 1); 
        scanf("%d", &vetor[i]); 
        if(vetor[i] % 2 == 0) 
            pares++; 
        else 
            impares++; 
    } 
    printf("Quantidade de pares: %d\n", pares); 
    printf("Quantidade de impares: %d\n", impares); 
  return 0; 
} 

//6) Desenvolver um algoritmo que leia dez números inteiro e verifique e imprima quantos são divisíveis por 5 e por 3 ao mesmo tempo.  

#include <stdio.h> 

int main() { 
    int numero, i, contador = 0; 
    for(i = 1; i <= 10; i++) { 
        printf("Digite o %dº numero: ", i); 
        scanf("%d", &numero); 
        if(numero % 3 == 0 && numero % 5 == 0) 
            contador++; 
    } 
    printf("Quantidade divisivel por 3 e 5 ao mesmo tempo: %d\n", contador); 
 return 0; 
} 

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

//8) Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor de referência inteiro e:  
//imprima os números do vetor que são maiores que o valor referência  
//retorne quantas vezes o valor de referência aparece no vetor  

#include <stdio.h> 

int main() { 
    int vetor[10]; 
    int i, referencia, contador = 0; 
    for(i = 0; i < 10; i++) { 
        printf("Digite o numero %d: ", i + 1); 
        scanf("%d", &vetor[i]); 
    }  
    printf("Digite o valor de referencia: "); 
    scanf("%d", &referencia);   
    printf("Numeros maiores que o valor de referencia:\n"); 
    for(i = 0; i < 10; i++) { 
        if(vetor[i] > referencia) 
            printf("%d\n", vetor[i]); 
        if(vetor[i] == referencia) 
            contador++; 
    } 
    printf("O valor de referencia aparece %d vez(es).\n", contador); 
return 0; 
} 
















































