/*Creado el 10 de septiembre de 2018 por Elizabeth Mercado*/

#include<stdio.h>

void cuadrado(); //sin argumentos de entrada y sin argumentos de salida
int main(){
	cuadrado();
	return 0;
}
void cuadrado(){
	float x,x2;
	printf("Introduce un número\n");
	scanf("%f",&x);
	x2=x*x;
	printf("El cuadrado de %f es %f\n",x,x2);
}
