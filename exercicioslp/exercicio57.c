#include <stdio.h>

int main(){
    float n1, n2, n3;

    printf("Insira 3 numeros, na ordem que desejar:\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);


    if (n1 > n2 && n2 > n3){
        printf("Aqui esta em ordem decrescente: %2.f, %2.f e %2.f", n1, n2, n3);
    }

    else if (n1 > n3 && n3 > n2){
        printf("Aqui esta em ordem decrescente: %2.f, %2.f e %2.f", n1, n3, n2);
    }

    else if (n2 > n1 && n1 > n3){
        printf("Aqui esta em ordem decrescente: %2.f, %2.f e %2.f", n2, n1, n3);
    }

    else if (n2 > n3 && n3 > n1){
        printf("Aqui esta em ordem decrescente: %2.f, %2.f e %2.f", n2, n3, n1);
    }

    else if (n3 > n2 && n2 > n1){
        printf("Aqui esta em ordem decrescente: %2.f, %2.f e %2.f", n3, n2, n1);
    }

    else if (n3 > n1 && n1 > n2){
        printf("Aqui esta em ordem decrescente: %2.f, %2.f e %2.f", n3, n1, n2);
    }

    return 0;
    
}