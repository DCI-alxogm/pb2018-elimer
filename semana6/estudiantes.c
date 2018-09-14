/*Creado el 10 de Septiembre del 2018 por Elizabeth Mercado*/

#include<stdio.h>
#include<math.h>

int main(){
	int n=10;
	int edad[n],sexo[n],semestre[n],calificacion[n];
	int m=0,h=0,sex=0;
	int s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0;
	int i;
	float prom=0;
	
	for(i=1;i<=10;i++){
	printf("Escribe la edad del estudiante %i \n", i);
	scanf("%i",&edad[i]);
	
        printf("Escribe 1 si eres mujer y 0 si eres hombre\n");
        scanf("%i",&sexo[i]);
	
	printf("Escribe el semestre al que perteneces\n");
	scanf("%i",&semestre[i]);
	
	printf("Escribe la calificacion del estudiante\n");
	scanf("%i", &calificacion[i]);
	
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
	}
prom=prom/n;
printf("Mujeres=%i,hombres=%i\n",m,h);
printf("Estudiantes de semestre: 1=%i, 2=%i, 3=%i, 4=%i, 5=%i, 6=%i, 7=%i, 8=%i\n",s1,s2,s3,s4,s5,s6,s7,s8);
printf("El promedio de alumnos= %f\n",prom);

return 0;
}
	
	
