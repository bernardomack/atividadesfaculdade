#include <stdio.h>

int main(){
    float n1, n2, opt, media;
   
    do{
        printf("Insira as notas (n1, n2 e optativa -1 se nao fez):\n");
        scanf("%f %f %f", &n1, &n2, &opt);
    }while(n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || (opt != -1 && (opt < 0 || opt > 10)));

    if (opt == -1){
        media = (n1 + n2) / 2;
    }
    else if (opt > n1 && n1 <= n2){
        media = (opt + n2) / 2;
    }
    else if (opt > n2 && n2 < n1){
        media = (opt + n1) / 2;
    }
    else{
        media = (n1 + n2) / 2;
    }

    if (media >= 6){
        printf("Aprovado\n");
    }
    else if (media >= 3){
        printf("Exame\n");
    }
    else{
        printf("Reprovado\n");
    }

    return 0;
}