#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int in_hora, in_min, in_sec;
    int fm_hora, fm_min, fm_sec;
    int x, y, z;

    printf ("\nQual horario de inicio da ligacao (Hora Minuto Segundo): \n");
    scanf("%d %d %d", &in_hora, &in_min, &in_sec);

    printf("\nQual horario de fim da ligacao (Hora Minuto Segundo): \n");
    scanf("%d %d %d", &fm_hora, &fm_min, &fm_sec);

    x = fm_hora - in_hora;
    y = fm_min - in_min;
    z = fm_sec - in_sec;

    if (x < 1)
    {
        x = x * -1;
    }
    if (y < 1)
    {
        y = y * -1;
    }
    if (z < 1)
    {
        z = z * -1;
    }
    
    printf ("A duracao da chamada foi: %d:%d:%d", x, y, z);
    
    return 0;
}
