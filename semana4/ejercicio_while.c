/*Creado el 29 de Agosto del 2018*/

#include<stdio.h>
#include<math.h>

int main()
{
	int start;
	int o;
	float d,y,r,a;
	float C,F,K;

	start=1;
	while(start==1){

printf("¿Qué deseas hacer, convertir coordenadas cartesianas a polares o convertir temperaturas? \n");
printf("Teclea 1 para convertir coordenadas\n");
printf("Teclea 2 para convertir temperaturas\n");
scanf("%i",&o);
switch (o)
{ case 1:
printf("Este es un programa que convierte coordenadas cartesianas a coordenadas polares \n");
printf("Escribe el valor para x\n");
scanf("%f",&d);
printf("Escribe el valor para y\n");
scanf("%f",&y);
r=sqrt((pow(d,2))+(pow(y,2)));
y=(180/3.1416)*y;
d=(180/3.1416)*d;
a=atan(y/d);
if(d>=0 && y>=0)
{a=a;}
else if(d<0 && y>=0)
{a=a+90;}
else if(d<0 && y<0)
{a=a+180;}
else if(d>=0 && y<0)
{a=a+240;}
d=(3.1416/180)*d;
y=(3.1416/180)*y;
printf("El valor de la  1er coordenada r es:%f\n",r);
printf("El valor de la  2da coordenada teta es:%f\n",a);
printf("La coordenada inicial para x era:%f\n",d);
printf("La coordenada inicial para y era:%f\n",y);
  break;
case 2:
  printf("Este es un programa que convierte temperaturas de grados centigrados a kelvin y farenheit \n");
printf("¿Cuál es la temperatura en C° quieres convertir? \n");
scanf("%f",&C);
F=(9/5*C)+32;
K=273+C;
printf("La temperatura equivalente en F° es:%f\n",F);
printf("La temperatura equivalente en K es:%f\n",K);
printf("La temperatura inicial en C° es:%f\n",C);
  break;
default:
printf("Opcion invalida\n");
break;
}
printf("Presiona 1 si quieres realizar otra conversión\n");
        scanf("%i",&start);
        }

return 0;
}
