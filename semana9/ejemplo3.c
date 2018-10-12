/*Creado el 10 de septiembre de 2018 por Elizabeth Mercado*/

#include<stdio.h>

void cuadrado(float x); //con argumentos de entrada y sin argumentos de salida
int main(){
	float a;
	printf("Introduce un numero: \n");
	scanf("%f",&a);
	cuadrado(a);
	
	//printf("El cuadrado de %f es %f\n",a,xx);
	return 0;
}
void cuadrado(float x){
	float x2;
	//printf("Introduce un número\n");
	//scanf("%f",&x);
	x2=x*x;
	printf("El cuadrado de %f es %f\n",x,x2);
	//return x2;
}
