/*Creado el 8 de octubre por Elizabeth Mercado*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
FILE *datos;
int i,num;
float suma;
num = 0;
suma = 0;
printf("Escribe el numero de datos que existen en tu archivo: ");
scanf("%d",&num);
float *ptr= (float*)malloc(num*sizeof(float));

datos=fopen("promedio.txt","r");
for (i=0;i<num;i++){
	fscanf(datos,"%f\n",&ptr[i]);
	}

fclose(datos);
for (i=0;i<num;i++){
	suma += ptr[i];
}
	suma=suma/num;

printf("El promedio es: %f\n",suma);
free(ptr);
return 0;
}


