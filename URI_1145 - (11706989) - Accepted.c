#include<stdio.h>

int main()
{

int x,y,a,b=0,c;
scanf("%d%d",&x,&y);
int i;

for(i=1;i<=y;i++)
{
    b++;
    if(b==x)printf("%d",i);
        else printf("%d ",i);

    if(b==x)
    {
        b=0;
        printf("\n");
    }
}

    return 0;
}
