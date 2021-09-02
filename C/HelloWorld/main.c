#include <stdio.h>
#include <stdlib.h>

int main()
{
int tamanho = 7;
int count = 1;
int colunas = 1;
while(count <= tamanho){
    colunas = 1;
    while(colunas <= count) {
        printf("*");
        colunas++;
    }
    printf("\n");
    count++;
}
count--;
colunas = tamanho;
while(count-1 >= 0){
    while(colunas-1 > 0) {
        printf("*");
        colunas--;
    }
    printf("\n");
    count--;
    colunas = count;
}

/*
int codigoBarras = 2;
switch(codigoBarras){
    case 1:
        printf("Leite Integral - 3,80");
        break;
    case 2:
        printf("Manteiga - 5,98");
        break;
    default:
        printf("Produto não cadastrado");
    }*/
    /*float salario = 1000, alimentacao = 350, moradia = 500, saude = 100, outros = 150;
    printf("Alimentação %.0f%\n", (alimentacao * 100 / salario));
    printf("Moradia %.0f%\n", (moradia * 100 / salario));
    printf("Saúde %.0f%\n", (saude * 100 / salario));
    printf("Outros %.0f%\n", (outros * 100 / salario));
*/
    /*int idade = 0;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Sua idade é: %d", idade);

    return 0*/;
}
