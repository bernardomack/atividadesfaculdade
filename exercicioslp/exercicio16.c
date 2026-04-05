#include <stdio.h>

int main(){
    float n1, n2, n3;

    printf("Inclua as notas do semestre, respectivamente:\n");

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    printf("Aqui esta a media ponderada do seu semestre: %.2f", (n1*2 + n2*3 + n3*5)/10);
    return 0;
}