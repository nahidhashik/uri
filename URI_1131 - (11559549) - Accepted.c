
#include<stdio.h>

int main()
{
    int i=0,g=0,d=0,m=0,t,a,b;
    
    while(1)
    {
        scanf("%d%d",&a,&b);
        
        printf("Novo grenal (1-sim 2-nao)\n");
        
        m++;
        
        if(a>b)i++;
        
        else if(a<b)g++;
        
        else d++;
        
        scanf("%d",&t);
        
        if(t==1)continue;
        
        else break;

    }
    printf("%d grenais\n",m);
    
    printf("Inter:%d\n",i);
    
    printf("Gremio:%d\n",g);
    
    printf("Empates:%d\n",d);
    

    if(i>g)printf("Inter venceu mais\n");
    
    else printf("Gremio venceu mais\n");
    
    return 0;
}