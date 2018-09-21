/*Creado por Elizabeth Mercado*/

#include<stdio.h>
#include<math.h>

int main(){
int i,j,p,N,k;
float h,deltax,suma,fa;
float a,b;
float x[N], fx[N],intx[N];

FILE *integral;
FILE *Resultados;
integral=fopen("solucion.txt","r");
fscanf(integral,"%i %f %f %i %i",&p,&a,&b,&N,&k);
printf("%i %f %f %i %i \n",p, a, b, N, k);
fclose(integral);

for(i=0;i<N;i++){
	x[i]=0.;
	fx[i]=0.;
	intx[i]=0.;
}
for(i=0;i<N;i++){
	x[i]=0.;
	fx[i]=0.;
	intx[i]=0.;
}

deltax=(b-a)/N;
for(i=0;i<N;i++){
x[i]=a + (i*deltax);
fx[i]=pow(x[i],p);
}
	fa=pow(a,p);
	for(i=0;i<N;i++){
	h=(x[i]-a)/k;
	suma=0;
	for(j=1;j<k;j++){
	suma=suma + pow(x[i]+ h*j,p);
	}
	intx[i]=((fx[i] +fa)/2.0)+suma;
	
	
}
Resultados=fopen("Resultados.txt","w");
fprintf(Resultados,"x\t f(x)\t I(x)\n");

for(i=0;i<N;i++){
	fprintf(Resultados," %f %f %f",x[i], fx[i],intx[i]);

}

fclose(Resultados);

return 0;
}
