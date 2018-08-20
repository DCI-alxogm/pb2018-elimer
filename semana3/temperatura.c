/*Creado el 20 de Agosto del 2018 por Elizabeth Mercado*/

#include<stdio.h>
#include<float.h>

int main ()

{
float K, C, F;
printf("Escriba los °C que quiera convertir \n");
scanf("%f",C,F,K);
K=C + 273.15;
printf("\nLa temperatura en Kelvin es: %f \n",K);
F= K*1.8 -459.67;
printf("\nLa temperatura en °F es: %f \n",F);
C=(F-32)/1.8;
printf("\nLa temperatura es: %f \n",C);
return 0;

}

