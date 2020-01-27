#include<stdio.h>

int main()
{
    int n;
    
    scanf("%d",&n);
    
    int i,j,b=3,a=0,c=0;
    
    for(i=1;i<=n;i++)
    {
        
            a=i*i;
            c=i*i*i;
       
   printf("%d %d %d\n",i,a,c);
    }
    return 0;
}
