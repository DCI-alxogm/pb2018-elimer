/*Creado por Elizabeth Mercado*/ 
//ejemplo calloc

#include<stdio.h>
#include<stdlib.h>

int main(){
	int num,i,*ptr,sum=0;

	printf("Introduce el número de elementos: ");
	scanf("%d",&num);
	ptr=(int*)calloc(num,sizeof(int));

	if(ptr==NULL)
	{
		printf("Error! memoria no reservada");
		exit(0);
	}
	printf("Introduce los elements del arreglo: ");
	for(i=0;i<num;++i)
	{		
		scanf("%d", ptr + i);
		sum +=*(ptr + i);
	}
	printf("Sum=%d", sum);
	free(ptr);
	return 0;
}
