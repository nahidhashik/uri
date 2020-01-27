#include<stdio.h>
#define pi 3.14159

int main()
{
float A,B,C;
scanf("%f%f%f",&A,&B,&C);

double triangle,carculo,trapizeo,quadrado,retangulo;

triangle=(0.5*A*C);

carculo=(pi*C*C);

trapizeo=0.5*C*(A+B);

quadrado=B*B;

retangulo=A*B;

printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",triangle,carculo,trapizeo,quadrado,retangulo);


return 0;

}
