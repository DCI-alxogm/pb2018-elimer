/*Creado el 20 de Agosto por Elizabeth Mercado*/

#include<stdio.h>
#include<math.h>
#include<float.h>

int main()
{
	float x,y, pi=3.1416;
	printf("Escriba una coordenada para x \n");
	scanf("%f",&x,&y);
	y=exp(-1*x);
	printf("Escriba una coordenada para x \n")
	x=(x*(pi/180));
	printf("Escriba una coordenada para x \n")
	y=(cos(x) + 2*tan(x/2));
	printf("Escriba una coordenada para x \n")
	y=(log(x)+3*(pow(x,2)));
	printf("\nLos resultados en y son: %f \n",x);
       return 0;
}       

