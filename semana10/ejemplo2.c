/*Creado el 15 de octubre del 2018 por Elizabeth Mercado*/

#include<stdio.h>

int main(int argc, char *argv[]){
	printf("El programa que estas ejecutando es %s\n",argv[0]);
	char *nombre_archivo;
	FILE *fp;
	if(argc==2){
	nombre_archivo=argv[1];
	printf("El nombre del archivo a abrir es : %s\n",nombre_archivo);
	fp=fopen(nombre_archivo,"w+");
		//Aqui se pone todo lo que quieres hacer..
	fclose(fp);
	}
	else if(argc>2){
	printf("Mas argumentos de los necesarios\n");
	}
	else{
	printf("SE requiere de al menos 1 argumento\n");
	}
	return 0;
	}

