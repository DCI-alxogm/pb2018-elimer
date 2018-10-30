/*Creado por Elizabeth Mercado, segundo proyecto del curso, octubre 2018, placa con los bordes a una temperaura inicial y el centro de ella sin temperatura inicial*/

#include<stdio.h>
#include<stdlib.h>


//void funcion();

void funcion(){
	float e,w=1;
	int N=0,n,i,j,a;
	float left,right,up,down,t;
	
	//se abren los archivos que se van leer y escribir en el programa
	FILE *first;
	FILE *results;
	FILE *in;	


//leer del archivo la temperatura de los bordes,numero de puntos a usar en la aproximación,
	first=fopen("datos.txt","r");
	//left es el lado izquierdo de la placa, right es el lado edrecho,up es el lado de arriba y down es la parte de abajo
	fscanf(first,"%f %f %f %f %f %i",&left,&right,&up,&down,&e,&n);//se escanean los datos dados en un archivo que son las temperaturas de los bordes de la placa 

	fclose(first);//se cierra el archivo de lectura 
	//T es la matriz
	double **T = (double**)malloc(n*sizeof(float*));//Creacion de la matriz de dos dimenciones y la asignacion de memoria dinamica para el tamaño de la matriz

	for(i=0;i<=n;i++){
	   T[i]=(double*)malloc(n*sizeof(float));// formato de la matriz T
	}	

	//printf("Entra la funcion");
	in=fopen("inicial.txt","w");
	
	for(i=0;i<n;i++){
			for(j=0;j<n;j++){ 	//creacion de dos ciclos anidados para poder realizar la matriz y obtener los valores de la placa inicial 

				if(i==0){
				T[i][j]=left;	
				//printf("%i %i",i,j);
				}else if(i==(n-1)){
				T[i][j]=right;
				//printf("%i %i",i,j);
				}else if(j==0){
				T[i][j]=up;
				//printf("%i %i",i,j);
				}else if(j==(n-1)){
				T[i][j]=down;
				//printf("%i %i",i,j);
				}else{
				T[i][j]=0;
				}	
		fprintf(in,"%3.3lf \t",T[i][j]); //impresion de resultados de la placa inicial 
			}
		fprintf(in,"\n"); //salto de linea para estructura de la matriz 
		}
fclose(in);//se cierra el archivo de escritura para la placa inicial 

for(a=0;a<12;a++){ //ciclo para poder 
char name[10]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; //aqui se asignan los nombres de los archivos que se van a crear 
name[1]=name[1]+a;
results=fopen(name,"w");//se abre el archivo de escritura para los diferentes archivos de resultados de las iteraciones

	for(i=1;i<=n-1;i++)//ciclo para el vector i (x)
			for(j=1;j<=n-1;j++){ //ciclo anidado para la creacion de las placas de las diferentes iteraciones

				T[i][j]=((T[i-1][j]+T[i+1][j]+T[i][j-1]+T[i][j+1])/4);//formula de la ecuacion del metodo de Gauss-Seidel de metodo numericos
					
				fprintf(results,"%3.3lf\t",T[i][j]);//se guardan los resultados en los archivos creados anteriormente 
				}
			fprintf(results,"\n");//saltos de linea
			fprintf(results,"\n");
			}
	

	/*//while(fabs(w)>=e){//fabs sirve para dar el valor absoluto
		//if(plus%20==0){
			//sprintf(num,"i.ods",N);
			
			//}

		for(i=1;i<=n-1;i++){
				for(j=1;j<=n-1;j++){ //se ponen dos ciclos anidados ya que son dos vectores.
				//formula para poder calcular la temperatura de las placas
					//dos=T[i][j];
					T[i][j]=((T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4);
					//t=(T[i][j]-dos)/dos;//segunda formula 
					//if(t<w){
					//w=t;
					
					fprintf(results,"%3.3lf",T[i][j]);
				}
			fprintf(results,"\n");
			}
		//for(i=0;i<n;i++){
				//for(j=0;j<n;j++){ 
					//if(plus%20==0){	
						//
						//}
					//}		
					//if(plus%20==0){
					
					//}	

				//}
	//plus++;
	//if(plus%20==0){
		//N++;
		//}*/
	fclose(results);//cerrar los archivos
	}	
free(T);//se libera el espacio de la memoria dinamica 

}//se cierra el programa 
