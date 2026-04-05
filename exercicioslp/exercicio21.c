#include <stdio.h>

int main() {
    float comprimento_pista_m, consumo_km_l;
    int total_voltas, reabastecimentos;

    printf("Comprimento da pista (em metros): ");
    scanf("%f", &comprimento_pista_m);

    printf("Numero total de voltas: ");
    scanf("%d", &total_voltas);

    printf("Numero de reabastecimentos: ");
    scanf("%d", &reabastecimentos);

    printf("Consumo do carro (Km/L): ");
    scanf("%f", &consumo_km_l);

    float comprimento_pista_km = comprimento_pista_m / 1000.0;
    int trechos = reabastecimentos + 1;
    float voltas_por_trecho = (float) total_voltas / trechos;
    float distancia = voltas_por_trecho * comprimento_pista_km;
    float litros = distancia / consumo_km_l;

    printf("Litros necessarios ate o primeiro reabastecimento: %.2f\n", litros);

    return 0;
}