/ 26-09-2020
//Ralizado por Noe
#include <stdio.h>

int main()
{
    float Vs,IT;
    int R1,R2,R3,RT,I1,I2,I3;
    int i1,i2,i3;


    printf("Escribe el valor de la fuente Vs: ");
    scanf("%f",&Vs); //recibe valores tecleados

    printf("Escribe el valor de R1,R2 y R3, separados por comas: ");
    scanf("%d,%d,%d",&R1,&R2,&R3);


    printf("LA CORRIENTE I1 ES (%d AMP) es %f\n",I1,Vs/R1);
     printf("LA CORRIENTE I2 ES (%d AMP) es %f\n",I2,Vs/R2);
      printf("LA CORRIENTE I3 ES (%d AMP) es %f\n",I3,Vs/R3);
IT=i1+i2+i3;
     printf("Escribe el valor de i1,i2 y i3, separados por comas: ");
     scanf("%d,%d,%d",&i1,&i2,&i3);
      printf("LA CORRIENTE IT ES es %d+%d+%d=%d",i1,i2,i3);


    ;
return 0;
}
