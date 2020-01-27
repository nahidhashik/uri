#include<stdio.h>

int main()
{
    int Alcool=0,Gasolina=0,Diesel=0,x=0;

    while(x!=4)
    {
        scanf("%d",&x);
        if(x==1)
        {
            Alcool+=1;
        }
        else if(x==2)
        {
            Gasolina+=1;
        }
        else if(x==3)
        {
            Diesel+=1;
        }

    }
    printf("MUITO OBRIGADO\n");

    printf("Alcool: %d\n",Alcool);

    printf("Gasolina: %d\n",Gasolina );

    printf("Diesel: %d\n",Diesel);

    return 0;
}