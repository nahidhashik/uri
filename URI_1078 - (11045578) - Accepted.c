#include<stdio.h>


int main()
{
    int n,sum=0,i;

    scanf("%d",&n);

    for(i=1; i<=10; i++)
    {

        sum=n*i;
        printf("%d x %d = %d\n",i,n,sum);
        sum=0;
    }

    return 0;
}
