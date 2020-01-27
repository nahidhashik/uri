#include<stdio.h>

int main()
{
    int cde1=12,unit1=1,cde2=16,unit2=2;
    float prc1=5.30,prc2=5.10;
  scanf("%d%d%f",&cde1,&unit1,&prc1);
  scanf("%d%d%f",&cde2,&unit2,&prc2);

    float x,y,z;
    x=unit1*prc1;
    y=unit2*prc2;

    z=x+y;
    printf("VALOR A PAGAR: R$ %.2f\n",z);
    return 0;
}