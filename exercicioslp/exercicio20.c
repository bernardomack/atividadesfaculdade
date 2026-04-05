#include <stdio.h>

int main(){
    float kminicio, kmfinal, combustivel, valortotal;

    printf("Insira o valor do odometro no inicio do dia:\n");
    scanf("%f", &kminicio);

    printf("Insira o valor do odometro no final do dia:\n");
    scanf("%f", &kmfinal);

    printf("Insira o numero de litros de combustivel gastos:\n");
    scanf("%f", &combustivel);

    printf("Insira o valor total recebido dos passageiros:\n");
    scanf("%f", &valortotal);

    printf("Aqui esta a media do consumo: %f KM/L", (kmfinal-kminicio)/combustivel);

    printf("\nEsta tambem o valor liquido do dia: %.2f reais", combustivel*2.9);

    return 0;
}