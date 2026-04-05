#include <stdio.h>

int main(){
    float n1, n2, n3;

    do{
        printf("Insira os valores dos angulos do triangulo:\n");
        scanf("%f", &n1);
        scanf("%f", &n2);
        scanf("%f", &n3);
    } while(n1+n2+n3 != 180 || n1 <= 0 || n2 <= 0 || n3 <= 0);

    if (n1 > 90 || n2 > 90 || n3 > 90){
        printf("O TRIANGULO EH OBTUSANGULO!");
    }

    else if (n1==90 || n2==90 || n3==90){
        printf("O TRIANGULO EH RETO!");
    }

    else if (n1<90 || n2 < 90 || n3 < 90){
        printf("O TRIANGULO EH ACUTANGULO!");
    }

    return 0;
}