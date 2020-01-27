#include<stdio.h>

int main()
{
    int arra[101];

    int i,large,position;

    for(i=1; i<=100; i++)
    {

        scanf("%d",&arra[i]);

    }
    large=arra[0];


    for(i=1; i<=100; i++)
    {
        if(arra[i]>large)
        {
            large=arra[i];
            position=i;
        }

    }
    printf("%d\n%d\n",large,position);
    return 0;
}