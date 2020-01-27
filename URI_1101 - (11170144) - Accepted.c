#include<stdio.h>

int main()
{
    int i,m,n,temp,c=0,j,sum=0;
    for(i=0; i<3; i++)
    {
        scanf("%d%d",&m,&n);
        if(m>n)
        {
            temp=m;
            m=n;
            n=temp;
        }
        for(j=m; j<=n; j++)
        {
            c+=j;
            sum+=j;
            printf("%d",j);
            printf(" ");
            c=0;
        }
        printf("Sum=%d\n",sum);
        sum=0;

    }

    return 0;
}
