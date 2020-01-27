#include<stdio.h>

int main()
{
    float A,B,C;
    scanf("%f%f%f",&A,&B,&C);
    if(A+B>C&&B+C>A&&C+A>B){
    printf("Perimetro = %.1f\n",A+B+C);
    }else{
    printf("Area = %.1f\n",0.5*(A+B)*C);
    }
    return 0;
}
