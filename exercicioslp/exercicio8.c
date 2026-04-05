#include <stdio.h>

int main() {
    float valor;

    printf("Digite o valor em metros para converte-lo em centimetros:\n");
    scanf("%f", &valor);

    printf("Aqui esta o valor: %.2fcm", 100*valor);

    return 0;
}