#include <stdio.h>

#define NUMERO_DE_ALUNOS 10
/*Usei o #define no inicio programa para poder testar ele com uma quantidade menor de alunos e 
não precisar digitar 10 vezes sempre que fosse testar*/

#define TAMANHO_MAXIMO_DO_NOME 30

struct aluno
{
    char nome[TAMANHO_MAXIMO_DO_NOME];
    int matricula;
    float notas;
}inf_aluno[NUMERO_DE_ALUNOS];

int main()
{
  int i;
  float total;

  for(i=0;i<NUMERO_DE_ALUNOS;i++)
  {
    fflush(stdin);

    printf("\nInforme o nome do aluno %d: ", i+1);
    fgets(inf_aluno[i].nome, TAMANHO_MAXIMO_DO_NOME, stdin);

    printf("Informe a matricula de %s: ", inf_aluno[i].nome);
    scanf("%d", &inf_aluno[i].matricula);

    printf("Insira a nota de %s: ", inf_aluno[i].nome);
    scanf("%f", &inf_aluno[i].notas);
    fflush(stdin);
  }

  //calculando a média turma
  for(i=0,total=0.0;i<NUMERO_DE_ALUNOS;i++)
    total+=inf_aluno[i].notas;

  printf("\nA media da turma eh: %2.f", total/NUMERO_DE_ALUNOS);


  printf("\n\n");
  return 0;
}
