/*Creado el 15 de octubre del 2018 por Elizabeth Mercado*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	printf("El nombre del archivo que estas ejecutando es: %s\n",argv[0]);
	char *nombre_archivo;
	float xi,xf,yi,yf,zi,zf,h;
	float x[num],y[num],z[num];
	int i,num;
	FILE *fp;

	printf("Escribe el numero de datos que quieres que se genere: \n");
	scanf("%i",num);
	if(argc==4){
		nombre_archivo=argv[1];
		num=atoi(argv[2]);
		h=atof(argv[3]);
		
		printf("El nombre del archivo a abrir es: %s\n",nombre_archivo);
		printf("Escribe los valores de xi,yi,zi: \n");
		scanf("%f",&xi);
		printf("Escribe los valores de xf,yf,zf: \n");
		scanf("%f",&xf);
		yi=xi;
		yf=xf;
		zi=xi;
		zf=xf;
		fp=fopen(nombre_archivo,"w+");
		fprintf(fp,"x: %f, \t y: %f, \t  z: %f, \t  N: %i",xi,yi,zi,num);
		//Aqui se pondria todo lo demas que se quiere hacer y/o escribir un archivo..
	for(i=0,i=num,i++){
		xi=x[i];
		xf;
	}
		fclose(fp);
	}
	else if(argc>4){
	printf("Diste mas argumentos de los necesarios \n");
	}
	else {
	printf("Se requieren 3 argumentos: nombre_archivo, num, h \n");
	}
	return 0;
	}

