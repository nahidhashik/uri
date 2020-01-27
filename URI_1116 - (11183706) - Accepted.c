#include<stdio.h>

int main()
{
    int  test,i;

    float x,y;

    scanf("%d",&test);

    for(i=0; i<test; i++)
    {
        scanf("%f%f",&x,&y);

        if(y==0)printf("divisao impossivel\n");

        else printf("%.1f\n",x/y);

    }

    return 0;
}
