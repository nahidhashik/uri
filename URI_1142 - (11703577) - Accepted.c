#include<stdio.h>

int main()
{
int n;

scanf("%d",&n);

int i,j,c=1,b=4;

for(i=0;i<n;i++)
{
    for(j=c;j<=b;j++)
    {
        if(j%4==0)
        printf("PUM\n");
        
        else
        printf("%d ",j);
        
    }
    c+=4;b+=4;
}
    return 0;
}
