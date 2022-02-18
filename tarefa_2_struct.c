#include <stdio.h>

#define n_pessoas 2 //Utilizei a mesma ideia de definir um numero menor para testes
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
        tp_data nascimento; 
    } tp_dados;

    tp_dados info[n_pessoas];

    for (i=0; i<n_pessoas; i++){
        printf("\nInforme o nome: ");
        setbuf(stdin, NULL);
        fgets(info[i].nome, max_nome, stdin);
        fflush(stdin);
        printf("Qual seu CPF: ");
        scanf("%d", &info[i].cpf);
        printf("Digite o dia: ");
        scanf("%d", &info[i].nascimento.dia);
        printf("Digite o mes: ");
        scanf("%d", &info[i].nascimento.mes);
        printf("Digite o ano: ");
        scanf("%d", &info[i].nascimento.ano);
    }
    for(i=0;i<=n_pessoas; i++)
    {
        printf("\n-----Informacoes-----\n");
        printf("Nome: %s", info[i].nome);
        printf("CPF: %d \n", info[i].cpf);
        printf("Nascimento: %d/%d/%d \n", info[i].nascimento.dia, info[i].nascimento.mes, info[i].nascimento.ano);
    }

    /* Esta dando um erro na hora de mostrar os dados, ela mostra 1 dado a mais do que foi pedido com os campos de informações 
    sem preencher ou com numeros aleatórios*/

    return 0;
}
