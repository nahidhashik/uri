#include<stdio.h>

int main()
{
    int n,i;

    scanf("%d",&n);

    float sum=0,avg,a,b,c;

    for (i=0; i<n; i++)
    {
        scanf("%f%f%f",&a,&b,&c);

        sum=a*2+b*3+c*5;
        avg=sum/10.0;
        printf("%.1f\n",avg);


    }
    sum=0;
    return 0;
}
