/*Creado el 15 de Agosto del 2018 por Elizabeth Mercado*/

#include<stdio.h>

float main()

{
float a, b, c, d, e;
printf("Escriba cuatro números enteros \n");
scanf("%f" " %f" " %f" " %f", &a, &b, &c, &d);

e=(a+b)*c/d;
printf("\nEl resultado de la operacion e=(a+b)*c/d es %f \n",e);
e=((a+b)*c)/d;
printf("\nEl resultado de la operación e=((a+b)*c)/d es %f \n"e);
e=(a+b)*c/d;
printf("\nEl resultado de la operación e=(a+b)*c/d es %f \n"e);
e=a+(b*c)/d;
printf("\nEl resultado de la operación e=a+(b*c)/d es %f \n"e);
return 0;
