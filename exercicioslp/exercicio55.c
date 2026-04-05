#include <stdio.h>

int main(){
    int ndelados;

    printf("Insira o numero de lados: ");
    scanf("%d", &ndelados);

    if (ndelados < 3){
        printf("NAO E UM POLIGONO\n");
    }
    else if (ndelados == 3){
        printf("Triangulo\n");
    }
    else if (ndelados == 4){
        printf("Quadrado\n");
    }
    else if (ndelados == 5){
        printf("Pentagono\n");
    }
    else{
        printf("POLIGONO NAO IDENTIFICADO\n");
    }

    return 0;
}