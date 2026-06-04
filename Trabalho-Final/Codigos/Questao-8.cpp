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
