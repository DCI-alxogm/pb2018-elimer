/*Creado el 10 de Septiembre del 2018 por Elizabeth Mercado*/

#include<stdio.h>

int main(){
	int edad,sexo,semestre,prom,calificacion;
	int m,h;
	int uno=1,dos=2,tres=3,cuatro=4,cinco=5,seis=6,siete=7,ocho=8;
	int i;
	int n=10;
	float estudiantes[n];
	
	printf("Escribe la edad de 10 estudiantes\n");
	for(i=0;i<10;i++){
		edad<0;
		scanf("%i",&edad);
	}
        printf("Escribe 1 si eres mujer y 0 si eres hombre\n");
	for (i=0;i<n;i++){
	sexo=(m=1,h=0);

        scanf("%i",&sexo);
	}
	printf("Escribe el semestre al que perteneces\n");
	for (i=0;i<n;i++){
		semestre=(uno,dos,tres,cuatro,cinco,seis,siete,ocho);
		scanf("%i",&semestre);
	}
printf("Escribe la calificacion del estudiante\n");
for (i=0;i<n;i++){
scanf("%f",calificacion);
}
for (i=0;i<n;i++){
	if(sexo==1){
		m;
	}
	else{
		h;
	}
}
for (i=0;i<n;i++){
	if(semestre==1){
uno;
	}
	else if(semestre==2){
		dos;
	}
	else if(semestre==3){
		tres;
	}
	else if(semestre==4){
		cuatro;
	}
	else if(semestre==5){
		cinco;
	}
	else if(semestre==6){
		seis;
	}
	else if(semestre==7){
		siete;
	}
	else if(semestre=8){
		ocho;
	}
}
	for (i=0;i<n;i++){
		prom+=calificacion;
	}
prom=prom/10;
printf("Mujeres=%i,hombres=%i\n",m,h);
printf("Estudiantes de semestre: 1=%i, 2=%i, 3=%i, 4=%i, 5=%i, 6=%i, 7=%i, 8=%i\n",uno,dos,tres,cuatro,cinco,seis,siete,ocho);
printf("El promedio de alumnos= %i\n",prom);

return 0;
}
	
	
