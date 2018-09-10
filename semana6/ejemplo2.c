/*Creado el 10 de septiembre del 2018 por Elizabeth Mercado*/

#include<stdio.h>

int main()
{
	int i;
	int N=10;
	float numeros[N];

	for (i=0;i<N;i++){
		scanf("%f",&numeros[i]);
		numeros[i]*=2;
		printf("%f",numeros[i]);
	}
	return 0;
}

