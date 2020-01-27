#include<stdio.h>

int main()
{
    int m,n;
    scanf("%d",&m);
    ///n=m*2;
    int i,a,b,c,d;
    for(i=1;i<=m;i++)
    {
        a=i*i;
        b=i*i*i;
        printf("%d %d %d\n",i,a,b);
        c=a+1;
        d=b+1;
        printf("%d %d %d\n",i,c,d);
    
    }
    return 0;
}
