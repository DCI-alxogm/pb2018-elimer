/*Creado el 3 de Septiembre del 2018*/

#include<stdio.h>

int main()
{
	float temp_C,temp_K;
	float inicial,final,delta;
	int  n,i,o;
	int op=1,count=0;

	
 printf("Escribe un valor para la temperatura inicia");
          scanf("%f",&inicial);
printf("escribe un valor para la tempratura final");
scanf("%f", &final);

while(op==1){	
               count ++;     //count= count+1;     

	delta=(final-inicial)/n;

	for(i=0;i<n;i++){
		temp_K=temp_C+273.15;
		printf("%f %f\n",temp_C,temp_K);
		temp_C=temp_C+delta;      //  temp_C+=delta;
}

	printf("Presiona 1 si quieres realizar otra conversion\n");
	scanf("%i",&op);
	if (count>5){
printf("Error:número de intentos excedido");
return 1;
}
}
return 0;
}
