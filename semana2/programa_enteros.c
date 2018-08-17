/*Creado el 15 de Agosto del 2018 por Elizabeth Mercado*/

#include<stdio.h>

int main()

{
int a,b,c,d,e;
printf("Escriba cuatro números enteros \n");
scanf("%i" " %i" " %i" " %i", &a, &b, &c, &d);

e=(a+b)*c/d;
printf("\nEl resultado de la operacion e=(a+b)*c/d es %i \n",e);
e=((a+b)*c)/d;
printf("\nEl resultado de la operación e=((a+b)*c)/d es %i \n"e);
e=(a+b)*c/d;
printf("\nEl resultado de la operación e=(a+b)*c/d es %i \n"e);
e=a+(b*c)/d;
printf("\nEl resultado de la operación e=a+(b*c)/d es %i \n"e);
return 0;

}
