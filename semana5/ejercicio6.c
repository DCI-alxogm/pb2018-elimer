/*Creado el 5 de septiembre del 2018*/
#include <stdio.h>

int main()
{
    int a, e, i, o;
    int again;
    again=1;

    while(again==1)
    {
    printf("escriba dos numeros para un intervalo de: ");
    scanf("%d %d", &a, &e);

    printf("Los numeros primos que existen  entre %d y %d son= ", a, e);

    while (a < e)
    {
        o = 0;

        for(i = 2; i <= a/2; ++i)
        {
            if(a % i == 0)
            {
                o = 1;
                break;
            }
        }

        if (o == 0)
            printf("%d ", a);

        ++a;
    }
printf("Escriba 1 si desea relizar otra conversion \n");
scanf("%i",&again);
    }
    return 0;
}
