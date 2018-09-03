/*Creado el 3 de Septtiembre del 2018*/

#include<stdio.h>

int main()
{
	float temp_C,temp_K;
	float inicial,final,delta;
	int n=10,i;
	int op=1,count=0,start;
	delta=(final-inicial)/n;
	start=1;
		while(start==1){
while(op==1){
                count ++;     //count= count+1;
	
	for(i=0;i<n;i++){
		temp_K=temp_C+273.15;
		printf("%f %f\n",temp_C,temp_K);
		temp_C=temp_C+delta;      //  temp_C+=delta;
	}

	printf("Presiona 1 si quieres realizar otra conversion\n");
	scanf("%i",&start);
		}
printf("Errror:número de intentos excedido");
return 1;
}
return 0;
}
