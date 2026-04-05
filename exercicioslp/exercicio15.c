#include <stdio.h>

int main(){
    float celsius, fahrenheit;

    printf("Temperatura em celsius a ser convertida:\n");
    scanf("%f", &celsius);

    fahrenheit = 9/5*celsius + 32;
    
    printf("Aqui está a temperatura: %f fahrenheits", fahrenheit);
    return 0;
}