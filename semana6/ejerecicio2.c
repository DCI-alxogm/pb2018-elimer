/*Creado el 10 de Septiembre del 2018 por Elizabeth Mercado*/

#include<stdio.h>

int main(){
	FILE *archivo;
	FILE *resultado;
	int n;

	archivo=fopen("info.txt","r");
	fscanf(archivo,"%i",&n);
	int edad[n],sexo[n],semestre[n],calificacion[n];
	int m=0,h=0,sex=0;
	int s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0;
	int i;
	float prom=0;
	
	for(i=1;i<=10;i++){
	

	printf("Escribe la informacion del estudiante: Edad,sexo,semestre,calificación %i \n", i);
	scanf("%i %i %i %i",&edad[i],&sexo[i],&semestre[i],&calificacion[i]);
		

	if(sexo[i]==1)
		m++;
	
	else
		h++;
	


	if(semestre[i]==1)
		s1++;
	
	else if(semestre[i]==2)
		s2++;
	
	else if(semestre[i]==3)
		s3++;
	
	else if(semestre[i]==4)
		s4++;
	
	else if(semestre[i]==5)
		s5++;
	
	else if(semestre[i]==6)
		s6++;
	
	else if(semestre[i]==7)
		s7++;
	
	else if(semestre[i]==8)
		s8++;

	 prom=(prom+calificacion[i]);

	 fscanf(archivo,"%f %f %f %f\n",&semestre[i], &edad[i], &sexo[i], &calificacion[i]);
        fclose(archivo);

	
	}
		
	prom=prom/n;

	resultado=fopen("resultado.txt", "w");
        fprintf(resultado,"Se introdujeron %i alumnos. De los obtenidos:\n %f son hombres\n %f son mujeres\n",h,m);
	fprintf(resultado,"Mujeres=%i,hombres=%i\n",m,h);
	fprintf(resultado,"Estudiantes de semestre: 1=%i, 2=%i, 3=%i, 4=%i, 5=%i, 6=%i, 7=%i, 8=%i\n",s1,s2,s3,s4,s5,s6,s7,s8);
	fprintf(resultado,"El promedio de alumnos= %f\n",prom);

	fclose(resultado);

return 0;
}
	
