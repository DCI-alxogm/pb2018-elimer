/*Creado el 10 de septiembre de 2018 por Elizabeth Mercado*/

#include<stdio.h>

float cuadrado(); //sin argumentos de entrada y con argumentos de salida
int main(){
	float xx;
	//printf("Introduce un número\n");
	//scanf("%f",&a);
	xx=cuadrado();
	
	printf("El cuadrado es %f\n",xx);
	return 0;
}
float cuadrado(){
	float x,x2;
	printf("Introduce un número\n");
	scanf("%f",&x);
	x2=x*x;
	//printf("El cuadrado de %f es %f\n",x,x2);
	return x2;
}
