/* 
 * Criar um programa que: * 1. Solicite nome, idade e curso do usuário 
 * 2. Exiba uma mensagem de boas-vindas personalizada 
 * 3. Calcule em que ano a pessoa nasceu 
 */

#include <stdio.h>

int main() {
    char nome[100], curso[100];
    int idade, ano_nascimento;

    printf("=== PROGRAMA DE APRESENTACAO ===\n");

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu curso: ");
    scanf(" %99[^\n]", curso); // Lê string com espaços

    // Cálculo
    ano_nascimento = 2025 - idade;

    // Saída
    printf("\n=== BEM-VINDO(A) ===\n");
    printf("Ola, %s", nome);
    printf("Voce tem %d anos e estuda %s.\n", idade, curso);
    printf("Voce nasceu aproximadamente em %d.\n", ano_nascimento);

    return 0;
}