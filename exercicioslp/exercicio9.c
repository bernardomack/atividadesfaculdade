#include <stdio.h>

int main(){
    float lado;

    printf("Insira o valor do lado do quadrado em metros:\n");
    scanf("%f", &lado);

    printf("Aqui esta o valor de sua area em metros quadrados: %2.f", lado*lado);
    printf("\nAqui esta o dobro do valor de sua area em metros quadrados: %2.f", 2*lado*lado);

    return 0;
}