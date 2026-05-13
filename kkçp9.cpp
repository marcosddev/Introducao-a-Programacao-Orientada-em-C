#include <stdio.h>

int main(){
	float imcnum2;
	
	printf("Digite o primeiro número: ");
	scanf("%f", &num1);
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
	if (num1 > num2) {
        printf("%.2f maior que %.2f", num1, num2);
    } else if (num2 > num1) {
        printf("%.2f maior que %.2f", num2, num1);
    } else {
        printf("Os dois sao iguais\n");
    }

    return 0;
}
