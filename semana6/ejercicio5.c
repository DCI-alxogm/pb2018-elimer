/*Creado el 10 de septiembre del 2018*/

#include<stdio.h>

int main()
{
	int i,j,n;
	printf("Dime el numero de elementos para trabajar\n");
	scanf("%i",&n);
	float numeros[n]; 

	for(j=0;j<n;j++);{
	numeros[j]*=2;
	printf("%f\n",numeros[j]);
}
return 0;
}

