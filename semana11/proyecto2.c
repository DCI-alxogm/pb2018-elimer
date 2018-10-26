/*Creado por Elizabeth Mercado*/

#include<stdio.h>
#include<stdlib.h>

//int main(){
void funcion();
void datos(float left,float right,float up, float down, int n,float T**);

//se crea otra funcion donde se van a reañizar todas las operaciones del programa
void funcion(){
	float e,w;
	int N,n=0,i,j;
	float left,right,up,down;
	float x[N],y[N],T[i][j];
	FILE first*, results*;
	N=n*n;	

//leer del archivo la temperatura de los bordes,numero de puntos a usar en la aproximación,
first=fopen("datos.txt","r");
fscanf(" %f %f %f %f %f %i ",&left,&right,&up,&down,&e,&n);
fclose(first);

double *T= (double*)malloc(n*sizeof(double));
for(i=0;i<n;i++){
T[i]=(double**)malloc(n*sizeof(double));
}

datos(left,right,up,down,n,T);


results=fopen("resultados.txt","w");
for(i=0;i<N;i++){
	while(w<e){
	T[i][j]=(((T[i+1],[j]+T[i-1],[j]+T[i],y[i+1]+T[i],[j-1]))/4);
	w=((T[i][j]-T[i-1][j-1])/T[i-1][j-1]);
	fprintf("%f %f %f",x[i],y[j],T[i][j]);//
}
}
fclose(results);
free(T);
//return 0;
}
//Segunda funcion donde se meteran y leeran los datos iniciales dados en el archivo  de texto y sirve para determinar la temperatura solo en las orillas de la placa
void datos(float left,float right,float up, float down, int n,float T**);{
int i,j;
for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if(i=0)
		T[i][j]=left;
		else if(i=n)
		T[i][j]=right;
		else if(j=0)
		T[i][j]=up;
		else if(j=n)
		T[i][j]=down;
		else
		T[i][j]=0;
	}
}

