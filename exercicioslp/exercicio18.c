#include <stdio.h>
#include <math.h>

int main(){
    float pot, larg, comp, ndelampadas;

    printf("Comprimento do comodo em metros:\n");
    scanf("%f", &comp);

    printf("Largura do comodo em metros:\n");
    scanf("%f", &larg);

    printf("Potencia da lampada em watts:\n");
    scanf("%f", &pot);

    ndelampadas = ceil(larg*comp*18/pot);

    printf("O número de lâmpadas necessárias será: %2.f", ndelampadas);

    return 0;
}