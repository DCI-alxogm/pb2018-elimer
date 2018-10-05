/*Creado por Elizabeth Mercado*/

#include<stdio.h>

int main(){
	int i,num[6],sum=0;
	printf("Introduce 6 números enteros:\n");
	for(i=0;i<6; ++i){
		//(num + i) es equivalente a &num[i]
		scanf("%d",(num + i));

		//*(num + i) es equivalente a num[i]
		sum += *(num + i);
	}
	printf("Suma=%d", sum);
	return 0;
}
