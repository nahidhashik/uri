#include<stdio.h>


int main()
{
    int x;
    scanf("%d",&x);

    int i,y=0;

    if(x>=1 && x<=1000)
    {
        for(i=0; i<x; i++)
        {
            y=y+1;

            if(y%2==1)
            {
                printf("%d\n",y);
            }
        }


    }


    return 0;
}