/* 
 * Criar uma calculadora que: 
 * 1. Leia dois números 
 * 2. Realize as quatro operações básicas 
 * 3. Exiba os resultados formatados 
 */

#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);

    if (b == 0) {
        printf("Erro, divisao por zero.\n");
    } else {
        printf("Divisao: %.2f\n", (float)a / b);
    }

    return 0;
}