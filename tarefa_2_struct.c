#include <stdio.h>

#define n_pessoas 2
#define max_nome 30

int main (){
    int i;

    typedef struct {
        int dia;
        int mes;
        int ano;
    } tp_data;

    typedef struct {
        char nome[max_nome];
        int cpf;
        tp_data; 
    } tp_dados;

    tp_dados info[n_pessoas]

    for (i=0; i<n_pessoas; i++){
        fflush(stdin);
        printf("\nInforme o nome: ");
        setbuf(stdin, NULL);
        fgets(dados_pp[i].nome, max_nome, stdin);
        printf("Qual seu CPF: ");
        scanf("%d", &dados_pp[i].cpf);
        printf("Digite o dia: ");
        scanf("%d", &n_data[i].dia);
        printf("Digite o mes: ");
        scanf("%d", &n_data[i].mes);
        printf("Digite o ano: ");
        scanf("%d", &n_data[i].ano);
    }
    
    for(i=0;i<=n_pessoas; i++){
        printf("\n-----Informacoes-----\n");
        printf("Nome: %s", info[i].nome);
        printf("CPF: %d \n", info[i].cpf);
        printf("Nascimento: %d/%d/%d \n", info[i].nascimento.dia, info[i].nascimento.mes, info[i].nascimento.ano);
    }

    return 0;
}
