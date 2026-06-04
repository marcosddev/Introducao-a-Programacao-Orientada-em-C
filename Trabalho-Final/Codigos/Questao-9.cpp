//9) Códigos folhas dia 13/05


//Código 1
#include <stdio.h>
// função para calcular média
float calcularmedia(float av1, float av2) {
    return (av1 + av2) / 2;
}
// função para verificar situação
void verificarsituacao(float media, char situacao[]) {
    if (media >= 7) {
        sprintf(situacao, "Aprovado");
    }
    else if (media >= 5) {
        sprintf(situacao, "Recuperacao");
    }
    else {
        sprintf(situacao, "Reprovado");
    }
}

void cadastraralunos(char nomes[][50], float av1[],
                     float av2[], float medias[],
                     char situacoes[][20], int qtd) {
    int i;
    for (i = 0; i < qtd; i++) {
        printf("\n--- Cadastro do Aluno %d ---\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", nomes[i]);

        printf("Nota AV1: ");
        scanf("%f", &av1[i]);

        printf("Nota AV2: ");
        scanf("%f", &av2[i]);
        // calcular média
        medias[i] = calcularmedia(av1[i], av2[i]);
        // verificar situação
        verificarsituacao(medias[i], situacoes[i]);
    }
}

void mostrartabela(char nomes[][50], float av1[],
                   float av2[], float medias[],
                   char situacoes[][20], int qtd) {
    int i;

    printf("\n============= TABELA DE ALUNOS =============\n");
    printf("%-20s %-10s %-10s %-10s %-15s\n",
           "NOME", "AV1", "AV2", "MEDIA", "SITUACAO");
    printf("--------------------------------------------------------------\n");
    for (i = 0; i < qtd; i++) {
        printf("%-20s %-10.2f %-10.2f %-10.2f %-15s\n",
               nomes[i],
               av1[i],
               av2[i],
               medias[i],
               situacoes[i]);
    }
}

int main() {
    int qtd;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtd);
    char nomes[qtd][50];
    float av1[qtd], av2[qtd], medias[qtd];
    char situacoes[qtd][20];
    // chamadas das funções
    cadastraralunos(nomes, av1, av2, medias, situacoes, qtd);
    mostrartabela(nomes, av1, av2, medias, situacoes, qtd);
 return 0;
}



//Código 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

//============================================
// FUNÇÃO PARA CALCULAR IMC
//============================================
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

//============================================
// FUNÇÃO PARA CLASSIFICAR IMC
//============================================
void classificarIMC(float imc, char classificacao[]) {
    if (imc < 18.5) {
        strcpy(classificacao, "Abaixo do peso");
    }
    else if (imc < 25) {
        strcpy(classificacao, "Peso normal");
    }
    else if (imc < 30) {
        strcpy(classificacao, "Sobrepeso");
    }
    else if (imc < 35) {
        strcpy(classificacao, "Obesidade I");
    }
    else if (imc < 40) {
        strcpy(classificacao, "Obesidade II");
    }
    else {
        strcpy(classificacao, "Obesidade III");
    }
}

//============================================
// FUNÇÃO PRINCIPAL
//============================================
int main() {
    char nomes[MAX][100];
    int idades[MAX];
    float pesos[MAX];
    float alturas[MAX];
    float imcs[MAX];
    char classificacoes[MAX][50];
    int i = 0;
    char continuar = 'S';

    printf("============================================\n");
    printf("              CALCULADORA DE IMC            \n");
    printf("============================================\n\n");

    // CADASTRO COM WHILE
    while ((continuar == 'S' || continuar == 's') && i < MAX) {
        printf("Paciente %d\n", i + 1);
        printf("Digite o nome: ");
        scanf(" %[^\n]", nomes[i]);
        printf("Digite a idade: ");
        scanf("%d", &idades[i]);
        printf("Digite o peso (kg): ");
        scanf("%f", &pesos[i]);
        printf("Digite a altura (m): ");
        scanf("%f", &alturas[i]);

        // VERIFICAÇÃO
        if (alturas[i] <= 0) {
            printf("Altura invalida!\n");
        }
        else {
            // CÁLCULO DO IMC
            imcs[i] = calcularIMC(pesos[i], alturas[i]);
            // CLASSIFICAÇÃO
            classificarIMC(imcs[i], classificacoes[i]);
            i++;
        }

        // CONTINUAR
        printf("\nDeseja cadastrar outro paciente? (S/N): ");
        scanf(" %c", &continuar);
        printf("\n");
    }

    // TABELA FINAL
    printf("==================== RELATORIO FINAL ====================\n");
    printf("%-20s | %-5s | %-8s | %-20s\n", "Nome", "Idade", "IMC", "Classificacao");
    printf("---------------------------------------------------------\n");
    int j = 0;
    while (j < i) {
        printf("%-20s | %-5d | %-8.2f | %-20s\n", nomes[j], idades[j], imcs[j], classificacoes[j]);
        j++;
    }
    printf("---------------------------------------------------------\n");

    printf("\nPrograma encerrado!\n");
    return 0;
}



//Código 3
#include <stdio.h>
#include <string.h>

#define TAM 5 // -> DEFINICAO DE CONSTANTE (Anotação manuscrita)

//============================================
// FUNÇÃO PARA CALCULAR DESCONTO
//============================================
float calcularDesconto(float preco, float desconto) {
    float valorFinal;
    valorFinal = preco - (preco * desconto / 100);
    return valorFinal;
}

//============================================
// FUNÇÃO PRINCIPAL
//============================================
int main() {
    char produtos[TAM][50];
    float precos[TAM];
    float descontos[TAM];
    float valorFinal[TAM];
    int i = 0;
    char continuar = 'S';

    printf("============================================\n");
    printf("              SISTEMA DE DESCONTO           \n");
    printf("============================================\n\n");

    while ((continuar == 'S' || continuar == 's') && i < TAM) {
        printf("Produto %d\n", i + 1);
        printf("Nome do produto: ");
        scanf(" %[^\n]", produtos[i]);
        printf("Preco do produto: ");
        scanf("%f", &precos[i]);
        printf("Percentual de desconto: ");
        scanf("%f", &descontos[i]);
        
        valorFinal[i] = calcularDesconto(precos[i], descontos[i]);
        i++;
        
        printf("\nDeseja cadastrar outro produto? (S/N): ");
        scanf(" %c", &continuar);
        printf("\n");
    }

    printf("\n==================== RELATORIO FINAL ====================\n");
    printf("---------------------------------------------------------\n");
    printf("| %-15s | %-10s | %-10s | %-10s |\n", "Produto", "Preco", "Desconto", "Valor Final");
    printf("---------------------------------------------------------\n");
    int j = 0;
    while (j < i) {
        printf("| %-15s | %-10.2f | %-9.2f%% | %-10.2f |\n", 
               produtos[j], 
               precos[j], 
               descontos[j], 
               valorFinal[j]);
        j++;
    }
    printf("---------------------------------------------------------\n");
    
    return 0;
}

