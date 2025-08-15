/* 
 * Criar uma calculadora que: 
 * 1. Leia dois números 
 * 2. Realize as quatro operações básicas 
 * 3. Exiba os resultados formatados 
 */

#include <stdio.h>

int main() {
    float a, b;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    printf("Soma: %.2f\n", a + b);
    printf("Subtracao: %.2f\n", a - b);
    printf("Multiplicacao: %.2f\n", a * b);

    if (b == 0) {
        printf("Erro, divisao por zero.\n");
    } else {
        printf("Divisao: %.2f\n", (float)a / b);
    }

    return 0;
}