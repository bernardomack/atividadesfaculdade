#include <stdio.h>

int main(){
    float raio;

    printf("Insira o valor do raio do circulo em metros: ");
    scanf("%f", &raio);

    printf("O valor da area de tal circulo: %f metros quadrados", 3.14*raio*raio);

    return 0;
}