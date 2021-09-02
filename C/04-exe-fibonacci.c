#include<stdio.h>

int main(){
    int i, numero = 0;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    int sequencia[numero];

    for(i = 0; i < numero; i++){
        if(i < 2){
            sequencia[i] = 1;
        } else {
            sequencia[i] = sequencia[i-2] + sequencia[i-1];
        }
    }

    for(i = 0; i < numero; i++) {
        printf("%d ", sequencia[i]);
    }

    return 0;
}
