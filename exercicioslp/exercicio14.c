#include <stdio.h>

int main() {
    float salariofixo, comissao_por_carro, total;
    int ndecarros;

    printf("Digite o salario fixo: ");
    scanf("%f", &salariofixo);

    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &ndecarros);

    printf("Digite a comissao por carro: ");
    scanf("%f", &comissao_por_carro);

    total = salariofixo + (ndecarros * comissao_por_carro);
    total = total * 1.05;

    printf("\nResumo:\n");
    printf("Carros vendidos: %d\n", ndecarros);
    printf("Salario fixo: R$ %.2f\n", salariofixo);
    printf("Comissao por carro: R$ %.2f\n", comissao_por_carro);
    printf("Salario total: R$ %.2f\n", total);

    return 0;
}