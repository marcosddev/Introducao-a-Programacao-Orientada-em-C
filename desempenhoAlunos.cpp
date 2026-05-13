#include <stdio.h>
int main() {
 int qtd, i;
 float n1, n2, n3, ME, MA;
 int A = 0, B = 0, C = 0, D = 0, E = 0;
 printf("Quantidade de alunos: ");
 scanf("%d", &qtd);
 for (i = 1; i <= qtd; i++) {
 printf("\nAluno %d\n", i);
 printf("Nota 1: ");
 scanf("%f", &n1);
 printf("Nota 2: ");
 scanf("%f", &n2);
 printf("Nota 3: ");
 scanf("%f", &n3);
 printf("Media dos exercicios (ME): ");
 scanf("%f", &ME);
 MA = (n1 + (n2 * 2) + (n3 * 3) + ME) / 7;
 printf("Media de Aproveitamento: %.2f\n", MA);
 if (MA >= 90) {
 printf("Conceito: A\n");
 A++;
 }
 else if (MA >= 75) {
 printf("Conceito: B\n");
 B++;
 }
 else if (MA >= 60) {
 printf("Conceito: C\n");
 C++;
 }
 else if (MA >= 40) {
 printf("Conceito: D\n");
 D++;
 }
 else {
 printf("Conceito: E\n");
 E++;
 }
 }
 printf("\n=== RESULTADO FINAL ===\n");
 printf("A: %d alunos\n", A);
 printf("B: %d alunos\n", B);
 printf("C: %d alunos\n", C);
 printf("D: %d alunos\n", D);
 printf("E: %d alunos\n", E);
 return 0;
}
