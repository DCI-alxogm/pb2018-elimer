#include<stdio.h>
#include<math.h>

int main(){
//Se introducen las variables
float G=39.4784176,h,masap,masasol ;
int n=1000,i,j;
double x0,y0,z0,vx0,vy0,vz0;
double x[n],y[n],z[n],vx[n],vy[n],vz[n],r;
FILE *datos;
FILE *resultados;

printf("Selecciona el planeta que quieras elegir: Mercurio(0),Venus(1),Tierra(2),Marte(3), Jupiter(4), Saturno(5), Urano(6),Neptuno(7)\n");
scanf("%i",&j);
//Se abre un if para poder elegir cual planeta se quiere elegir
if(j==0){
datos=fopen("mercurio.txt","r");
fscanf(datos,"%lf %lf %lf %lf %lf %lf %f %f %f",&x0,&y0,&z0,&vx0,&vy0,&vz0,&h,&masap,&masasol);


printf("Prueba datos iniciales  %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x0,y0,z0,vx0,vy0,vz0,h,masap,masasol);
fclose(datos);
//Se dan los datos iniciales 
x[0]=x0;
y[0]=y0;
z[0]=z0;
vx[0]=vx0;
vy[0]=vy0;
vz[0]=vz0;



resultados=fopen("resultadosmercurio.txt","w");
//Se introducen las ecuaciones con las variables indicadas.
for(i=1;i<n;i++)
{
    
    x[i]=x[i-1]+ vx[i-1]*h;
    y[i]=y[i-1]+ vy[i-1]*h;
    z[i]=z[i-1]+ vz[i-1]*h;
    r=sqrt(pow(x[i-1],2)+pow(y[i-1],2)+pow(z[i-1],2));
    vx[i]=vx[i-1]- h*((G*1*(x[i-1]))/pow(r,3));
    vy[i]=vy[i-1]-h*((G*1*(y[i-1]))/pow(r,3));
    vz[i]=vz[i-1]- h*((G*1*(z[i-1]))/pow(r,3));




//Se imprimen los resultados en otro archivo de texto.
    fprintf(resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x[i],y[i],z[i],vx[i],vy[i],vz[i],h);
   // printf("%i\n",i);

}

fclose(resultados);
}
if(j==1){
datos=fopen("venus.txt","r");
fscanf(datos,"%lf %lf %lf %lf %lf %lf %f",&x0,&y0,&z0,&vx0,&vy0,&vz0,&h,&masap,&masasol);


printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x0,y0,z0,vx0,vy0,vz0,h,masap,masasol);
fclose(datos);

x[0]=x0;
y[0]=y0;
z[0]=z0;
vx[0]=vx0;
vy[0]=vy0;
vz[0]=vz0;



resultados=fopen("resultadosvenus.txt","w");

for(i=1;i<n;i++)
{
    
    x[i]=x[i-1]+ vx[i-1]*h;
    y[i]=y[i-1]+ vy[i-1]*h;
    z[i]=z[i-1]+ vz[i-1]*h;
    r=sqrt(pow(x[i-1],2)+pow(y[i-1],2)+pow(z[i-1],2));
    vx[i]=vx[i-1]-h*((G*x[i-1])/pow(r,3));
    vy[i]=vy[i-1]-h*((G*y[i-1])/pow(r,3));
    vz[i]=vz[i-1]-h*((G*z[i-1])/pow(r,3));





    fprintf(resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x[i],y[i],z[i],vx[i],vy[i],vz[i]);
   // printf("%i\n",i);

}

fclose(resultados);
}
if(j==2){
datos=fopen("tierra.txt","r"); 
	fscanf(datos,"%lf %lf %lf %lf %lf %lf %f ",&x0,&y0,&z0,&vx0,&vy0,&vz0,&h,&masap,&masasol);
	printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\t  \n",x0,y0,z0,vx0,vy0,vz0,h,masap,masasol);
	fclose(datos);
	
	x[0]=x0;
	y[0]=y0;
	z[0]=z0;
	vx[0]=vx0;
	vy[0]=vy0;
	vz[0]=vz0;
	resultados=fopen("resultadostierra.txt","w"); 
		for(i=1;i<n;i++) 
	{
	  
    	   
	    x[i]=x[i-1]+vx[i-1]*h; 
	    y[i]=y[i-1]+vy[i-1]*h;
	    z[i]=z[i-1]+vz[i-1]*h;
  	    r=sqrt(pow(x[i-1],2)+pow(y[i-1],2)+pow(z[i-1],2));/*Se calcula el radio con el que se trabajara*/	  
	    vx[i]=vx[i-1]-h*((G*x[i-1])/pow(r,3));
	    vy[i]=vy[i-1]-h*((G*y[i-1])/pow(r,3));
	    vz[i]=vz[i-1]-h*((G*z[i-1])/pow(r,3));

	    fprintf(resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[i],y[i],z[i],vx[i],vy[i],vz[i]);/*Se imprimen los resultados para poder graficar*/
	}
fclose(resultados);
}
if(j==3){
datos=fopen("marte.txt","r");
fscanf(datos,"%lf %lf %lf %lf %lf %lf %f",&x0,&y0,&z0,&vx0,&vy0,&vz0,&h,&masap,&masasol);


printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x0,y0,z0,vx0,vy0,vz0,h,masap,masasol);
fclose(datos);

x[0]=x0;
y[0]=y0;
z[0]=z0;
vx[0]=vx0;
vy[0]=vy0;
vz[0]=vz0;



resultados=fopen("resultadosmarte.txt","w");

for(i=1;i<n;i++)
{
    
    x[i]=x[i-1]+ vx[i-1]*h;
    y[i]=y[i-1]+ vy[i-1]*h;
    z[i]=z[i-1]+ vz[i-1]*h;
    r=sqrt(pow(x[i-1],2)+pow(y[i-1],2)+pow(z[i-1],2));
    vx[i]=vx[i-1]- h*((G*1*(x[i-1]))/pow(r,3));
    vy[i]=vy[i-1]- h*((G*1*(y[i-1]))/pow(r,3));
    vz[i]=vz[i-1]- h*((G*1*(z[i-1]))/pow(r,3));





    fprintf(resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x[i],y[i],z[i],vx[i],vy[i],vz[i],h);
   // printf("%i\n",i);

}

fclose(resultados);
}
if(j==4){
datos=fopen("jupiter.txt","r");
fscanf(datos,"%lf %lf %lf %lf %lf %lf %f",&x0,&y0,&z0,&vx0,&vy0,&vz0,&h,&masap,&masasol);


printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x0,y0,z0,vx0,vy0,vz0,h,masap,masasol);
fclose(datos);

x[0]=x0;
y[0]=y0;
z[0]=z0;
vx[0]=vx0;
vy[0]=vy0;
vz[0]=vz0;



resultados=fopen("resultadosjupiter.txt","w");

for(i=1;i<n;i++)
{
    
    x[i]=x[i-1]+ vx[i-1]*h;
    y[i]=y[i-1]+ vy[i-1]*h;
    z[i]=z[i-1]+ vz[i-1]*h;
    r=sqrt(pow(x[i-1],2)+pow(y[i-1],2)+pow(z[i-1],2));
    vx[i]=vx[i-1]- h*((G*1*(x[i-1]))/pow(r,3));
    vy[i]=vy[i-1]- h*((G*1*(y[i-1]))/pow(r,3));
    vz[i]=vz[i-1]- h*((G*1*(z[i-1]))/pow(r,3));





    fprintf(resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x[i],y[i],z[i],vx[i],vy[i],vz[i],h);
   // printf("%i\n",i);

}

fclose(resultados);
}
if(j==5){
datos=fopen("saturno.txt","r");
fscanf(datos,"%lf %lf %lf %lf %lf %lf %f",&x0,&y0,&z0,&vx0,&vy0,&vz0,&h,&masap,&masasol);


printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x0,y0,z0,vx0,vy0,vz0,h,masap,masasol);
fclose(datos);

x[0]=x0;
y[0]=y0;
z[0]=z0;
vx[0]=vx0;
vy[0]=vy0;
vz[0]=vz0;



resultados=fopen("resultadossaturno.txt","w");

for(i=1;i<n;i++)
{
    
    x[i]=x[i-1]+ vx[i-1]*h;
    y[i]=y[i-1]+ vy[i-1]*h;
    z[i]=z[i-1]+ vz[i-1]*h;
    r=sqrt(pow(x[i-1],2)+pow(y[i-1],2)+pow(z[i-1],2));
    vx[i]=vx[i-1]- h*((G*1*(x[i-1]))/pow(r,3));
    vy[i]=vy[i-1]- h*((G*1*(y[i-1]))/pow(r,3));
    vz[i]=vz[i-1]- h*((G*1*(z[i-1]))/pow(r,3));





    fprintf(resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x[i],y[i],z[i],vx[i],vy[i],vz[i],h);
   // printf("%i\n",i);

}

fclose(resultados);
}
if(j==6){
datos=fopen("urano.txt","r");
fscanf(datos,"%lf %lf %lf %lf %lf %lf %f",&x0,&y0,&z0,&vx0,&vy0,&vz0,&h,&masap,&masasol);


printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x0,y0,z0,vx0,vy0,vz0,h,masap,masasol);
fclose(datos);

x[0]=x0;
y[0]=y0;
z[0]=z0;
vx[0]=vx0;
vy[0]=vy0;
vz[0]=vz0;



resultados=fopen("resultadosurano.txt","w");

for(i=1;i<n;i++)
{
    
    x[i]=x[i-1]+ vx[i-1]*h;
    y[i]=y[i-1]+ vy[i-1]*h;
    z[i]=z[i-1]+ vz[i-1]*h;
    r=sqrt(pow(x[i-1],2)+pow(y[i-1],2)+pow(z[i-1],2));
    vx[i]=vx[i-1]- h*((G*1*(x[i-1]))/pow(r,3));
    vy[i]=vy[i-1]- h*((G*1*(y[i-1]))/pow(r,3));
    vz[i]=vz[i-1]- h*((G*1*(z[i-1]))/pow(r,3));





    fprintf(resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x[i],y[i],z[i],vx[i],vy[i],vz[i],h);
   // printf("%i\n",i);

}

fclose(resultados);
}
if(j==7){
datos=fopen("neptuno.txt","r");
fscanf(datos,"%lf %lf %lf %lf %lf %lf %f",&x0,&y0,&z0,&vx0,&vy0,&vz0,&h,&masap,&masasol);


printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x0,y0,z0,vx0,vy0,vz0,h,masap,masasol);
fclose(datos);

x[0]=x0;
y[0]=y0;
z[0]=z0;
vx[0]=vx0;
vy[0]=vy0;
vz[0]=vz0;



resultados=fopen("resultadosneptuno.txt","w");

for(i=1;i<n;i++)
{
    
    x[i]=x[i-1]+ vx[i-1]*h;
    y[i]=y[i-1]+ vy[i-1]*h;
    z[i]=z[i-1]+ vz[i-1]*h;
    r=sqrt(pow(x[i-1],2)+pow(y[i-1],2)+pow(z[i-1],2));
    vx[i]=vx[i-1]- h*((G*1*(x[i-1]))/pow(r,3));
    vy[i]=vy[i-1]- h*((G*1*(y[i-1]))/pow(r,3));
    vz[i]=vz[i-1]- h*((G*1*(z[i-1]))/pow(r,3));





    fprintf(resultados," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\n",x[i],y[i],z[i],vx[i],vy[i],vz[i],h);
   // printf("%i\n",i);

}

fclose(resultados);
}

//Se cierra el programa. 
return 0;
}
