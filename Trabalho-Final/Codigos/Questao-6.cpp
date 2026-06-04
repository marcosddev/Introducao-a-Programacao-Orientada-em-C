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
