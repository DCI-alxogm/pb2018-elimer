#include<stdio.h>
#include<math.h>

int main () {

int n=1000,i,j;
float G=39.478417,h,masap,masasol;
double x0,y0,z0,vx0,vy0,vz0,r;
double x[n],y[n],z[n],vx[n],vy[n],vz[n];

FILE *datos;
FILE *resultados;

datos=fopen("datosprueba.txt","r");
fscanf(datos, "%lf %lf %lf %lf %lf %lf %f",&x0,&y0,&z0,&vx0,&vy0,&vz0,&h);

printf("Prueba datos iniciales  %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x0,y0,z0,vx0,vy0,vz0,h);
fclose(datos);

x[0]=x0;
y[0]=y0;
z[0]=z0;
vx[0]=vx0*365.242;
vy[0]=vy0*365.242;
vz[0]=vz0*365.242;

resultados=fopen("resultados2.txt","w");
for(i=1;i<n;i++){
	x[i]=x[i-1]+vx[i-1]*h;
	y[i]=y[i-1]+vy[i-1]*h;
	z[i]=z[i-1]+vz[i-1]*h;
	r=sqrt(pow(x[i-1],2.0)+pow(y[i-1],2.0)+pow(z[i-1],2.0));
	vx[i]=vx[i-1]-h*((G*1.0*x[i-1])/pow(r,3.0));
	vy[i]=vy[i-1]-h*((G*1.0*y[i-1])/pow(r,3.0));
	vz[i]=vz[i-1]-h*((G*1.0*z[i-1])/pow(r,3.0));
	fprintf(resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[i],y[i],z[i],vx[i],vy[i],vz[i]); 
}
fclose(resultados);

return 0;
}

