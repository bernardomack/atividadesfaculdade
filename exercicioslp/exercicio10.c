#include <stdio.h>

int main(){
    float salarioh, horasmes;

    printf("Informe o seu salario por hora em R$/h: \n");
    scanf("%f", &salarioh);

    printf("Informe o total de horas que voce trabalha no mes:\n");
    scanf("%f", &horasmes);

    printf("Aqui esta o total de salario no mes em reais: %2.f", salarioh*horasmes);

    return 0;

}