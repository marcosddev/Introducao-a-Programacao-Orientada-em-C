#include <stdio.h>

int main() {
    float IMC, altura, peso;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    if (IMC < 18.5) {
        printf("Abaixo do peso\n");
    } 
    else if (IMC >= 18.5 && IMC < 25) {
        printf("Peso normal\n");
    } 
    else if (IMC >= 25 && IMC < 30) {
        printf("Sobrepeso\n");
    } 
    else if (IMC >= 30 && IMC < 35) {
        printf("Obesidade grau 1\n");
    } 
    else if (IMC >= 35 && IMC < 40) {
        printf("Obesidade grau 2\n");
    } 
    else {
        printf("Obesidade grau 3\n");
    }

    return 0;
}
