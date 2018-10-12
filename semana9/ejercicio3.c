/*Ejercicio 3 de la semana 9 hecho por Elizabeth Mercado*/

#include<stdio.h>
#include<math.h>
void raiz1();
float raiz2(float h);
void raiz3(float x);
float raiz4();

int main()
{
	int e;
	float x,x2;
	float a;
	float xx;
	printf("Este es un programa que calcula la raiz cuadra\n");
	printf("Elige como quieres que se calcule el programa: \t (1) sin argumentos de entrada y sin argumentos de salida \t (2) con argumentos de entrada y con argumentos de salida\t (3) con argumentos de entrada y sin argumentos de salida \t (4) sin argumentos de entrada y con argumentos de salida\n");
	scanf("%i",&e);

	if(e==1)
	//sin argumentos de entrada y sin argumentos de salida
	raiz1();
	return 1;


	if(e==2)
	//con argumentos de entrada y con argumentos de salida 
	
	printf("Introduce un numero para calcular la raiz cuadrada: \n");
	scanf("%f",&x);
	x2=raiz2(x);
	printf("La raiz cuadrada de %f es %f\n",x,x2);
	return 2;

	if(e==3)
	//con argumentos de entrada y sin argumentos de salida
	
	printf("Introduce un numero para calcular la raiz cuadrada: \n");
	scanf("%f",&a);
	raiz3(a);
	return 3;


	if(e==4)
	//sin argumentos de entrada y con argumentos de salida
	xx=raiz4();
	
	printf("La raiz cuadrada de %f es %f\n",xx);
	return 4;

return 0;
}
void raiz1()
{
	float x,x2;
	printf("Introduce un número para calcular la raiz cuadrada\n");
	scanf("%f",&x);
	x2=sqrt(x);
	printf("La raiz cuadrada de %f es %f\n",x,x2);
}
float raiz2(float h)
{
	return sqrt(h);
}
void raiz3(float x)
{
	float x2;
	x2=x*x;
	printf("La raiz cuadrada de %f es %f\n",x,x2);
	
}
float raiz4()
{
	float x,x2;
	printf("Introduce un número para calcular la raiz cuadrada: \n");
	scanf("%f",&x);
	x2=sqrt(x);
	return x2;
}
