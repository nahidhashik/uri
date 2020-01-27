#include<stdio.h>

int main()
{
    int m,n;

    int i;

    while(1)
    {
        scanf("%d%d",&m,&n);
        if(m==n)break;
        if(m>n)
        {
            printf("Decrescente\n");
        }
        else printf("Crescente\n");
    }
    return 0;
}
