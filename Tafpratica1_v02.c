#include <stdio.h>
#include <stdlib.h>

struct inicio
{
    int hora;
    int min;
    int seg;
} lig_init;

struct fim
{
    int hora_fim;
    int min_fim;
    int seg_fim;
} lig_fim;


int main()
{
    int x, y, z;

    printf("\nQual horario a ligação iniciou (Hora Minuto Segundo): ");
    scanf("%d %d %d", &lig_init.hora, &lig_init.min, &lig_init.seg, stdin);

    printf("\nQual horario a ligação terminou (Hora Minuto Segundo): ");
    scanf("%d %d %d", &lig_fim.hora_fim, &lig_fim.min_fim, &lig_fim.seg_fim, stdin);
    
    x = lig_fim.hora_fim - lig_init.hora;
    y = lig_fim.min_fim - lig_init.min;
    z = lig_fim.seg_fim - lig_init.seg;

    if (x < 1 || y < 1 || z < 1)
    {
        x = x * -1;
        y = y * -1;
        z = z * -1;
        printf("\nA duração da ligação foi: %d:%d:%d", x, y, z);
    }
    else
    {
        printf("\nA duração da ligação foi: %d:%d:%d", x, y, z);
    }

  return 0;
}
