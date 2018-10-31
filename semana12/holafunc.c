#include <stdio.h>
#include "holamake.h"
#include<math.h>


void printholamake(){

printf("Hola make....!\n");

}

void raiz( ){

int n;
float x;


printf("Hola, este programa te calcula la raiz cuadrada de un numero entero\n");
printf("Escribe un numero entero el cual quieras calcular su raiz cuadrada\n");
scanf("%i",&n);

x=sqrt(n);

printf("La raiz cuadrada del numero deseado es: %f\n",x);


return ;
}

