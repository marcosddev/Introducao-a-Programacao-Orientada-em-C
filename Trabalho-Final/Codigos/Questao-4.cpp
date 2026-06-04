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
