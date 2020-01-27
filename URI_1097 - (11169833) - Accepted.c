#include<stdio.h>

int main()
{
    int i,j;

    for(i=1; i<=1; i++)
    {
        for(j=7; j>=5; j-=1)
        {
            printf("I=%d J=%d\n",i,j);
        }
    }

    for(i=3; i<=3; i++)
    {
        for(j=9; j>=7; j-=1)
        {
            printf("I=%d J=%d\n",i,j);
        }
    }

    for(i=5; i<=5; i++)
    {
        for(j=11; j>=9; j-=1)
        {
            printf("I=%d J=%d\n",i,j);
        }
    }

    for(i=7; i<=7; i++)
    {
        for(j=13; j>=11; j-=1)
        {
            printf("I=%d J=%d\n",i,j);
        }
    }

    for(i=9; i<=9; i++)
    {
        for(j=15; j>=13; j-=1)
        {
            printf("I=%d J=%d\n",i,j);
        }
    }
    return 0;
}