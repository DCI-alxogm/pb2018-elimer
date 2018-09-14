/*Creado el 10 de Septiembre del 2018 por Elizabeth Mercado*/

#include<stdio.h>

int main()
{
	int i;
	int N=10;
	float numeros[N];


	for (i=0;i<N;i++){
		numeros[i]=0.;
	}
	for (i=0;i<N;i++){
		scanf("%f",&numeros[i]);
	}
	for (i=0;i>N;i++){
		printf("%f\n",numeros[i]);
	}
return 0;
}

