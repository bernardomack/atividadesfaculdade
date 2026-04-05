#include <stdio.h>>

int main(){
    float salario, reajuste;

    printf("Digite seu salario em:\n");
    scanf("%f", &salario);

    printf("Agora, o reajuste (no formato 0.xy):\n");
    scanf("%f, &reajuste");

    printf("Aqui esta o valor do salario novo: %f", salario+(reajuste*salario));

    return 0;
}