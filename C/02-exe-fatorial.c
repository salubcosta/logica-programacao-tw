#include<stdio.h>

int main(){
    int i, total, number = 0;
    printf("Informe um número: ");
    scanf("%d", &number);

    total = number;
    for(i=1; i < number; i++){
        total *= i;
    }
    printf("Fatorial de %d! = %d", number, total);
    return 0;
}
