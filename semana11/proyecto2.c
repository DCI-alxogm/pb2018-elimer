/*Creado por Elizabeth Mercado*/

#include<stdio.h>
#include<stdlib.h>



void funcion();
//void datos(float left,float right,float up, float down, int n);

//se crea otra funcion donde se van a realizar todas las operaciones del programa
void funcion(){
	float e;
	int N,n=0,i,j,w;
	float left,right,up,down;
	
	FILE *first;
	FILE *results;
	

//leer del archivo la temperatura de los bordes,numero de puntos a usar en la aproximación,
first=fopen("datos.txt","r");
fscanf(first,"%f %f %f %f %f %i",&left,&right,&up,&down,&e,&n);

fclose(first);



double **T= (double*)malloc(n*sizeof(double*));
for(i=0;i<n;i++){
T[i]=(double*)malloc(n*sizeof(double));
}

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


//datos(left,right,up,down,n,T);
w=5;
N=n*n;	
results=fopen("resultados.txt","w");
for(i=1;i<=N;i++)
{
		for(j=1;j<=N;j++)
		{ //se ponen dos ciclos anidados ya que son dos vectores.
		while(w<e){ //condicion para que se pueda realzar el programa
		T[i][j]=((T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4);
		printf("Resultados\n",T[i][j]);
		
fprintf(results,"%i %i %lf\n",i,j,T[i][j]);//
}
}
}
fclose(results);
free(T);
}

//Segunda funcion donde se meteran y leeran los datos iniciales dados en el archivo  de texto y sirve para determinar la temperatura solo en las orillas de la placa
//void datos(float left,float right,float up, float down, int n){
//int i,j;
//float T[N][N];
/*for(i=0;i<n;i++){
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
}*/

