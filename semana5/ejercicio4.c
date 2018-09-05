/*Creado el 5 de Septiembre del 2018*/
#include<stdio.h>
int factorial(int n)
{
	if(n==1) 
		return 1;
	else return n*factorial(n-1);
}
int main()
{
	int numero;
	int n, ent, fac; 
	printf("Escribe un número para calcular su factorial: ");
	scanf("%d",&numero);

	while(numero>=1)
	{
		n=n*ent;
		ent--;
	}
	printf("El número factorial de %d es: %d",fac,n);
}
	return 0;
}


