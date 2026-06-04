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
