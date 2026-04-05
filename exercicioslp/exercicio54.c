#include <stdio.h>

int main(){
    int ndelados;
    float lado;

    do{
        printf("Insira o valor do lado de um dos pologonos (entre 3 e 5)\n");
        scanf("%d", &ndelados);
        printf("Insira o comprimento do lado do poligono:\n");
        scanf("%f", &lado);
    } while(ndelados <3 || ndelados > 5 && lado > 0);
    
    if (ndelados ==3 ){
        printf("Triangulo de perimetro: %2.f", lado*ndelados);
    }

    if (ndelados ==4){
        printf("Quadrado de area: %2.f", lado*lado);
    }

    if (ndelados ==5){
        printf("Pentagono");
    }
    return 0;
}