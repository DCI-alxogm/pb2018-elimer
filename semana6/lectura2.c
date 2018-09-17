#include<stdio.h>
#include<math.h>

int main(){
	FILE *archivo;
	int n=10;
	int edad[n],sexo[n],semestre[n],calificacion[n];
	int m=0,h=0,sex=0;
	int s[9];
	int i,j;
	float prom=0;

	archivo=fopen("info.txt","w");
	
	for(i=1;i<=10;i++){
	printf("Escribe 1 si eres mujer y 0 si eres hombre\n");
	printf("Escribe la informacion del estudiante %i: edad,sexo,semestre,calificación\n",i);
	scanf("%i %i %i %i",&edad[i],&sexo[i],&semestre[i],&calificacion[i]);
	
	fscanf(archivo,"%f %f %f %f\n",&edad[i], &sexo[i], &semestre[i], &calificacion[i]);
	fclose(archivo);

	if(sexo[i]==1)
		m++;
	
	else
		h++;
	

	for(j=1;j<=9;j++)
		if(semestre[i]==j) s[j]+=1;
	


		prom=(prom+calificacion[i]);
	}
prom=prom/n;
printf("Mujeres=%i,hombres=%i\n",m,h);
for(j=1;j<=9;j++){
printf("Estudiantes de semestre: 1=%i, 2=%i, 3=%i, 4=%i, 5=%i, 6=%i, 7=%i, 8=%i\n",j);
}
printf("El promedio de alumnos= %f\n",prom);

return 0;
}
