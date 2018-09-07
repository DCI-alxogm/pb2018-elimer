/*Creado el 5 de Septiembre del 2018*/
#include<stdio.h>
#include<math.h>
#include<complex.h>

int main()
{
	int n;
       int fac=1;
       int again;
       int a=1;

	       again=1;

while(again==1)
{
	printf("Escribe un número para calcular su factorial:\n");
	scanf("%d",&n);
if (n>0){
	for (a=1;a<=n;++a)
	{
		fac=n*fac;
	}
	
	printf("El número factorial de %d es: %d\n",n,fac);
}
	else 
	{
		printf("Error no existe ese factorial\n");
	}

	printf("Presiona 1 si deseas realizar otra conversion\n");
	scanf("%i",&again);
}
	return 0;
}


