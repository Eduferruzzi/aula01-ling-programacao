/*
 * Criar um conversor que:
 * 1. Converta temperatura (Celsius para Fahrenheit)
 * 2. Converta distância (metros para quilômetros) 
 * 3. Converta peso (quilos para libras) 
 */

#include <stdio.h>

int main() {
    float celsius, fahrenheit, metros, quilometros, quilos, libras;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Digite a distancia em metros: ");
    scanf("%f", &metros);
    quilometros = metros / 1000;

    printf("Digite o peso em quilos: ");
    scanf("%f", &quilos);
    libras = quilos * 2.20462;

    printf("\nRESULTADOS\n");
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
    printf("Distancia em Quilometros: %.2f\n", quilometros);
    printf("Peso em Libras: %.2f\n", libras);

    return 0;
}
