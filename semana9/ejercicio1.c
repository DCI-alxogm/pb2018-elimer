/*Creado el 8 de octubre por Elizabeth Mercado*/

#include<stdio.h>
#include<stdlib.h>

int main(){
FILE *datos;
int i,*ptr,num,o;
char var[255];

printf("El programa siguiente calcula el numero mayor que existe en un archivo");
printf("Escribe el numero de datos que existen en tu archivo: ");
scanf("%i",&num);
ptr= (int*)malloc(num*sizeof(int)); //memoria reservada


datos=fopen("num_maximo.txt","r");
o=1;
while (o==1){
fgets(var,255,(FILE*)datos);

fclose(datos);
printf("El numero mayor en el archivo es: %f\n",);

return 0;
}


