/*Creado por Elizabeth Mercado*/

#include<stdio.h>

int main(){
	int var =20; /*declaramos la variable*/
	int *ip;	/*declaracion del apuntador*/
	ip=&var;	/*asigna la dirección de la variable "var" al apuntador ip*/

	printf("La direccion de la variable var es %x\n", (int) &var);
	printf("La dirección guardada en el apuntador ip es: %x\n", (int) ip);
	printf("El valor de *ip: %d\n", *ip);
	return 0;
}
