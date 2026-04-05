#include <stdio.h>
#include <math.h>

int main(){
    float comp, larg, alt, areaparede;

    printf("Imprima o comprimento da cozinha em metros:\n");
    scanf("%f", &comp);

    printf("Imprima a largura da cozinha em metros:\n");
    scanf("%f", &larg);

    printf("Imprima a altura da cozinha em metros:\n");
    scanf("%f", &alt);

    areaparede = comp*alt*2 + larg*alt*2;
    printf("O numero de caixas de azulejos necessarias para preencher a cozinha: %.0f", ceil(areaparede/1.5));

    return 0;
}