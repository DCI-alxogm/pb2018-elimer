#include<stdio.h>
#include<math.h>

int main(){
float G,h,masap,Pi;
Pi=3.1416;
G=4*(pow(Pi,2));
h=0.001;
masap=0.000003;
int n,i;
double x[n],y[n],z[n],vx[n],vy[n],vz[n],r;
FILE *datos;
FILE *resultados;
datos=fopen("datos.txt","r");
fscanf(datos,"%lf %lf %lf %lf %lf %lf",&x,&y,&z,&vx,&vy,&vz);
fclose(datos);

for(i=0;i<n;i++){
	x[i]=0.;
	y[i]=0.;
	z[i]=0.;
	vx[i]=0.;
	vy[i]=0.;
	vz[i]=0.;
}
resultados=fopen("resultados.txt","w");
for(i=0;i<n;i++){
fprintf(resultados," %lf %lf %lf %lf %lf %lf/n",x[i],y[i],z[i],vx[i],vy[i],vz[i]);
}
fclose(resultados);

return 0;
}
