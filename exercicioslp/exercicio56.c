#include <stdio.h>

int main(){
    float n1, n2;
    int operacao;

    do{
        printf("Escolha 1 para adiçao, 2 para subtraçao, 3 pra divisao e 4 pra multiplicaçao:\n");
        scanf("%d", &operacao);
    } while(operacao <1 || operacao >4 );

    printf("Escolha os valores os quais voce quer operar:\n");
    scanf("%f", &n1);
    scanf("%f", &n2);

    if (operacao==1){
        printf("O resultado: %2.f", n1+n2);
    }
    if (operacao==2){
        printf("O resultado: %2.f", n1-n2);
    }
    if (operacao==3){
        if (n2==0){
            printf("Indefinido");
        }
        else{
        printf("O resultado: %2.f", n1/n2);
        }
    }
    if (operacao==4){
        printf("O resultado: %2.f", n1*n2);
    }

    return 0;
}