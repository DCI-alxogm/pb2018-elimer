/*Creado por Elizabeth Mercado*/

#include<stdio.h>
#include<stdlib.h>



void funcion();
//void datos(float left,float right,float up, float down, int n);

//se crea otra funcion donde se van a realizar todas las operaciones del programa
void funcion(){
	float e,w;
	int N,n=0,i,j;
	float left,right,up,down,help,t;

	FILE *first;
	FILE *results;
	FILE *in;	

//leer del archivo la temperatura de los bordes,numero de puntos a usar en la aproximación,
first=fopen("datos.txt","r");
fscanf(first,"%f %f %f %f %f %i",&left,&right,&up,&down,&e,&n);

fclose(first);



double **T= (double**)malloc(n*sizeof(float*));
for(i=0;i<n;i++){
	T[i]=(double*)malloc(n*sizeof(float));
	}	


in=fopen("inicial.txt","w");
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
	fprintf(in,"%lf",T[i][j]);
}
fclose(in);
w=1;
N=n*n;
//datos(left,right,up,down,n,T);
while(w>e){
	
results=fopen("resultados.txt","w");


	for(i=1;i<=n-1;i++)
	{
			for(j=1;j<=n-1;j++)
			{ //se ponen dos ciclos anidados ya que son dos vectores.
				help=T[i][j];
			//condicion para que se pueda realzar el programa
				T[i][j]=((T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4);
				t=(T[i][j]-help)/help;
				if(t<w){
					w=t;
				}
		
//fprintf(results," %lf\n",T[i][j]);//

		}	
	}
fprintf(results,"%lf",T[i][j]);

	
fclose(results);
}

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

