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
