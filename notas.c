/*
 * Programa que: 
 * 1. Leia 4 notas de um aluno
 * 2. Calcule a média
 * 3. Determine se foi aprovado (média >= 7.0)
 */

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    printf("Digite a nota 4: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 7.0) {
        printf("A media foi: %.2f. Aprovado\n", media);
    } else {
        printf("A media foi: %.2f. Reprovado\n", media);
    }

    return 0;
}