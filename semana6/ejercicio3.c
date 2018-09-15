/*Creado por Elizabeth Mercado*/
#include<stdio.h>
#include<math.h>

int main()
{
FILE *funciones;
int n,e;
float x,esp, expo,logar, sn, cs, raiz,y,z;
int again;
funciones=fopen("evaluadas.txt","w");

again=1;
while(again==1)
{
	printf("Escribe el limite inferior:\n");
	scanf("%f", &y);
	printf("Escribe el limite superior: \n");
	scanf("%f", &z);
	printf("Introduce el espaciado que quieres:\n");
	scanf("%f", &esp);
n=((z-y)/esp);
for(e=0;e<=n;e++)
{

     x=(y+(esp*e));
     expo=exp(x);
     logar=log(x);
     sn=sin(x);
     cs=cos(x);
     raiz=sqrt(x);
     printf("El número es %f \n", x);
     printf("El exponente del número escrito es: %f \n", expo);
     printf("El logaritmo del  número escrito es:%f \n", logar);
     printf("El seno del número escrito es: %f \n", sn);
     printf("El coseno del número escrito es:%f \n", cs);
     printf("La raíz del número escrito es: %f \n", raiz);
}
pirintf("si quieres realizar otra conversion escribe 1 \n");
scanf("%i",&again);
}
return 0;
fclose(funciones);
}
