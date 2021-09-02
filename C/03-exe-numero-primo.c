#include<stdio.h>

int main(){
    int i, qtd = 0, numero = 0;


    printf("Informe um numero: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++) {
        if(numero % i == 0) {
            qtd++;
        }
    }
    if(qtd > 2) {
        printf("Numero NAO eh primo!");
    } else {
        printf("Numero eh primo!");
    }
    return 0;
}
