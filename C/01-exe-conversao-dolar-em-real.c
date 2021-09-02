#include <stdio.h>

int main(){
    float valor = 0;

    printf("Informe um valor em USD: ");
    scanf("%f", &valor);

    printf("O valor informe convertido para real: %.2f", (valor*3.85));
    return 0;
}
