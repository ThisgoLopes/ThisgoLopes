#include <stdio.h>

#define n_pessoas 2
struct data{
    int dia;
    int mes;
    int ano;
} n_data[n_pessoas];


struct pessoa{
    int cpf;
    n_data; 
} dados_pp[n_pessoas];

int main ()
{
    int i;

    for (i=0; i<n_pessoas; i++){
        {
        printf("CPF: ");
        scanf("%d", &dados_pp[i].cpf);
        printf("Digite o dia: ");
        scanf("%d", &n_data[i].dia);
        printf("Digite o mes: ");
        scanf("%d", &n_data[i].mes);
        printf("Digite o ano: ");
        scanf("%d", &n_data[i].ano);
    }
/* Falta fazer a forma como ele apresenta os elementos */

    for (i=0; i<n_pessoas; i++){

        printf("Pessoa ")
    }
}
