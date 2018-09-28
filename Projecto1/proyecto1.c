#include<stdio.h>
#include<math.h>

int main(){
float G,h,Pi,masap ;
Pi=3.1416;
G=4*(pow(Pi,2));
masap=0.000003;
int n,i;
n=10000;
double x0,y0,z0,vx0,vy0,vz0;
double x[n],y[n],z[n],vx[n],vy[n],vz[n],r;

FILE *datos;
FILE *resultados;
datos=fopen("datos.txt","r");
fscanf(datos,"%lf %lf %lf %lf %lf %lf %f",&x0,&y0,&z0,&vx0,&vy0,&vz0,&h);

printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x0,y0,z0,vx0,vy0,vz0,h);
fclose(datos);

x[0]=x0;
y[0]=y0;
z[0]=z0;
vx[0]=vx0;
vy[0]=vy0;
vz[0]=vz0;



resultados=fopen("resultados.txt","w");
for(i=1;i<n;i++)
{
    r=sqrt(pow(x[i-1],2)+pow(y[i-1],2)+pow(z[i-1],2));
    x[i]=x[i-1]+vx[i-1]*h;
    y[i]=y[i-1]+vy[i-1]*h;
    z[i]=z[i-1]+vz[i-1]*h;
    vx[i]=vx[i-1]-h*((G*1*x[i-1])/pow(r,3));
    vy[i]=vy[i-1]-h*((G*1*y[i-1])/pow(r,3));
    vz[i]=vz[i-1]-h*((G*1*z[i-1])/pow(r,3));





    fprintf(resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[i],y[i],z[i],vx[i],vy[i],vz[i],h);
   // printf("%i\n",i);

}

fclose(resultados);


return 0;
}
