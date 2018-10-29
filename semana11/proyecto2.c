/*Creado por Elizabeth Mercado*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//void funcion();
//void datos(float left,float right,float up, float down, int n);

//se crea otra funcion donde se van a realizar todas las operaciones del programa
void funcion(){
	float e,w=1;
	int N,n=0,i,j,plus;
	float left,right,up,down,help,t;
	char num[25];


	FILE *first;
	FILE *results;
	FILE *in;	

//leer del archivo la temperatura de los bordes,numero de puntos a usar en la aproximación,
first=fopen("datos.txt","r");
fscanf(first,"%f %f %f %f %f %i",&left,&right,&up,&down,&e,&n);
fclose(first);

//T es la matriz

double **T = (double**)malloc(n*sizeof(int*));
for(i=1;i<=n;i++){
	T[i]=(double*)malloc(n*sizeof(int));
}	


in=fopen("inicial.txt","w");
for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i=1)
			T[i][j]=left;
			else if(i=n)
			T[i][j]=right;
			else if(j=1)
			T[i][j]=up;
			else if(j=n)
			T[i][j]=down;
			else
			T[i][j]=0;
			fprintf(in,"%lf",T[i][j]);
			}
		fprintf(in,"\n");
		}
fclose(in);
N=n*n;


while(fabs(w)>=e){//fabs sirve para el error minimo	
	if(plus%25==0){
		sprintf(num,"%i.ods",n);
		results=fopen("resultados.txt","w");
		}

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

	for(i=1;i<=n-1;i++)
        {
                        for(j=1;j<=n-1;j++)
                        {
				if(plus%25==0){
					fprintf(results,"%f",T[i][j]);
					}
			}
			if(plus%25==0){
                                   fprintf(results,"\n");
				}
			}		
		plus++;
		if(plus%25==0){
		N++;
		}
	fclose(results);
	}

free(T);
}
