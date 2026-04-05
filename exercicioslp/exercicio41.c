#include <stdio.h>

int main(){
    float n1, n2;

    printf("Imprima 2 valores:\n");

    scanf("%f", &n1);
    scanf("%f", &n2);

    if (n1==n2)
        printf("Valores iguais!");
    if (n1>n2)
        printf("O primeiro é maior!");
    if (n2>n1)
        printf("O segundo é maior!");

    return 0;
}