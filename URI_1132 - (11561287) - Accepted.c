#include<stdio.h>

int main()
{
    int a,b,sum=0,temp,i;
    scanf("%d%d",&a,&b);
    if(a>b)
    {

        temp=a;
        a=b;
        b=temp;

    }

    for(i=a; i<=b; i++)
    {
        if(i%13!=0)
        {
            sum=sum+i;
        }
    }

    printf("%d\n",sum);
    return 0;
}