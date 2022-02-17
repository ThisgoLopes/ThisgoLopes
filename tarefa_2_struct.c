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
    
     for(i=0;i<=n_pessoas; i++){
        printf("Nome: %s", dados_pp[i].nome);
        printf("Matrícula: %d \n", dados_pp[i].cpf);
        printf("Nascimento: %d/%d/%d \n", dados_pp[i].n_data.dia, dados_pp[i].n_data.mes, dados_pp[i].n_data.ano);
    }

    return 0; // Esta com um erro na hora de apresentar o resultado
}
