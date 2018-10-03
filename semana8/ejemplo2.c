/*Creado por Elizabeth Mercado*/

#include<stdio.h>

int main (){
	int MAX=3;
	int var[]={10,100,200};
	int i,*ptr;
	/*Asignamos la dirección del arreglo al apuntador*/
	ptr=&var;
	
	for(i=0;i<MAX; i++){
	printf("La dirección de la variable var[%d]=%x\n",i,ptr);
	printf("Valor de la variable var[%d]=%d\n",i,*ptr);
	/*nos movemos en la siguiente posición de la memoria*/
	ptr++;
   }
return 0;
}
