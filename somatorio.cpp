#include<stdio.h>
int main() {
int qtd, i, num;
int somatorio = 0;
printf("Digite a quantidade de números: ");
scanf("%d", &qtd);
printf("===============================\n");
printf(" Leitura de %d números\n", qtd);
printf("===============================\n");
for (i = 1; i <= qtd; i++) {
printf("Digite o %d º número", i );
scanf("%d", &num);
somatorio += num;
}
printf("===============================\n");
printf("Somatório: %d\n", somatorio);
printf("===============================\n");
return 0;
}
