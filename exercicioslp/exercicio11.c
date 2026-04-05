#include <stdio.h>

int main(){
    int brancos, nulos, validos;

    printf("Digite a quantidade, respectivamente, de votos brancos, nulos e validos:\n");
    scanf("%d", &brancos);
    scanf("%d", &nulos);
    scanf("%d", &validos);

    printf("Aqui esta o percentual de votos brancos: %d %%", brancos*100/(brancos+nulos+validos));
    printf("\nAqui esta o percentual de votos nulos: %d %%", nulos*100/(brancos+nulos+validos));
    printf("\nAqui esta o percentual de votos nulos: %d %%", validos*100/(brancos+nulos+validos));

    return 0;
}