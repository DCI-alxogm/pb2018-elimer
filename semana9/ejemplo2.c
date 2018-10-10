/*Creado el 10 de octubre del 2018 por Elizabeth Mercado*/

#include<stdio.h>

float cuadrado(float h); //con argumentos de entrada y con argumentos de salida 
int main(){
	float x,x2;
	printf("Introduce un numero\n");
	scanf("%f",&x);
	x2=cuadrado(x);
	printf("El cuadrado de %f es %f\n",x,x2);
	return 0;
}
float cuadrado(float h){
	return h*h;
}
