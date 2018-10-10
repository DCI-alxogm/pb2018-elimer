/*Creado el 8 de octubre por Elizabeth Mercado*/

#include<stdio.h>
#include<stdlib.h>

int main(){
FILE *datos;
int i,num,o;
float var1,var2,var3;
num = 0;

printf("El programa siguiente calcula el numero mayor que existe en un archivo");
printf("Escribe el numero de datos que existen en tu archivo: ");
scanf("%d",&num);
float *ptr= (float*)malloc(num*sizeof(float));

datos=fopen("num_maximo.txt","r");
for (i=0;i<num;i++){ //ciclo for para todos los if
	fscanf(datos,"%f\n",&ptr[i]);

if (i==1){  //if para los numeros 0 y 1
	var1=ptr[i-1];
	var2=ptr[i];
if(var2<=var1)
	var3=var1;
else 
	var3=var2;
}
if(i>1) //if para todos los demas datos
	var2=ptr[i];
if(var3<var2)
	var3=var2;
else
	var3=var3;
}
fclose(datos);

printf("El numero mayor en el archivo es: %f\n",var3);
free(ptr);
return 0;
}


