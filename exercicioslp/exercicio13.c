#include <stdio.h>
int main(){
    float valorcar;
    printf("Imprima o custo de fabrica do carro: ");
    scanf("%f", &valorcar);
    printf("\nAqui esta o valor total do carro em reais: %.2f", valorcar + 0.28*valorcar + 0.45*valorcar);
    return 0; 
}