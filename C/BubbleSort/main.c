#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];
    int i, numero, alteracoes = 0;

    for(i=0; i<5; i++) {
        printf("Informe um núermro: ");
        scanf("%d", &numero);
        vetor[i] = numero;
    }

    printf("Vetor antes da ordenação: ");
    for(i=0; i<5; i++){
        printf("%d", vetor[i]);
    }

    alteracoes = 1;
    int temp = 0;
    while(alteracoes >0) {
        alteracoes = 0;
        for(i = 0; i < 4; i++){
            if(vetor[i]>vetor[i+1]){
                temp = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = temp;
                alteracoes++;
            }
        }
    }

    printf("Vetor ordenados: ");
    for(i=0; i<5; i++){
        printf("%d", vetor[i]);
    }

    return 0;
}
