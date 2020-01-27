#include<stdio.h>


int main()
{

    int r;
    scanf("%d",&r);
    double sphre;
    sphre=((4.0/3)*3.14159*r*r*r);
//    scanf("%f",&r);
    printf("VOLUME = %.3lf\n",sphre);
    return 0;
}

