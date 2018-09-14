#include <stdio.h>
#include <math.h>
int main()
{
int b,c;
int m,n,o,p,q;
int again;
again=1;
while(again==1)
{
printf("Presiona 1 para convertir de binarios a decimales y 2 para viceversa\n");
scanf("%i",&n); 
q=1;
o=0;
p=0;
switch (n){
case 1:
printf("Escribe un numero binario \n");
c=0;
while((c==0) || (c==1)){
scanf("%i",&c);
if((c==0)||(c==1)){ 				
q=1;
}
else{
q=0;
}
o=o+m*q*pow(2,p); 
p++;
}
printf("Tu numero decimal es: %i \n",o);
break;
case 2:
printf("Escribe tu numero decimal\n");
scanf("%i",&m);
while(m!=0){
n=m%2;
m=m/2;
if(n==0){
printf("0");
}
else{
printf("1");
}
}
break;
}

printf("Si quieres realizar otra conversion escribe 1\n");
scanf("%i",&again);
}
return 0;
}
