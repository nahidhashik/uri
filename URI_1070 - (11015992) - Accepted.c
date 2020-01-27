#include<stdio.h>


int main()
{
    int x;
    scanf("%d",&x);

    int i,y=0;

    if(x>=1 && x<=1000)
    {
        for(i=0; i<=10; i++)
        {
            x=x+1;

            if(x%2==1)
            {
                printf("%d\n",x);
            }
        }


    }


    return 0;
}