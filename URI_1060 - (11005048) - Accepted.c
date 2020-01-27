#include<stdio.h>

int main()
{
    int p[6],i,c=0,n=6;

    for(i=0; i<n; i++)
        scanf("%d",&p[i]);

    ///c=0;
    for(i=0; i<n; i++)
    {
        if(p[i]>0)
        {
            c++;
        }
    }
    printf("%d valores positivos\n",c);

    return 0;
}
