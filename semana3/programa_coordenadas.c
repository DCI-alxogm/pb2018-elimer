/*Creado el 20 de Agosto del 2018 por Elizabeth Mercado*/

#include<stdio.h>
#include<math.h>

int main ()
{

	float d,y,z,r,a,p;
	printf("Este es un programa para convertir coordenadas cartesianas");
	printf("Escribe un valor para x \n");
	scanf("%f",&d);
	printf("Introduce un valor para y \n");
	scanf("%f",&y);
	printf("Escribe un valor para z \n");
	scanf("%f",&z);
	r=sqrt((pow(d,2))+(pow(y,2))+(pow(z,2)));
	y=(180/3.1416)*y;
	z=(180/3.1416)*z;
	d=(180/3.1416)*d;
	a=acos(z/r);
	p=atan(y/d);
	d=(3.1416/180)*d;
	z=(3.1416/180)*z;
	y=(3.1416/180)*y;
	printf("El valor de la primer coordenada (r) es:%f\n",r);
	printf("El valor de la segunda coordenada (theta) es:%f\n",a);
	printf("El valor de la tercer coordenada (phi) es:%f\n", p);
	printf("La coordenada inicial para x fue:%f\n",d);
	printf("La coordenada inicial para x fue:%f\n",y);
	printf("La coordenada inicial para x fue:%f\n",z);
	return 0;
}


