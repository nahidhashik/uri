#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);

    float chorro,salada,bacon,torrada,refegenerate;
int i;
    for(i=0; i<1; i++)
    {
        if(x==1)
        {
            chorro=4.00*y;
            printf("Total: R$ %.2lf\n",chorro);
        }

        else if(x==2)
        {
            salada=4.50*y;
            printf("Total: R$ %.2lf\n",salada);
        }
        else if(x==3)
        {
            bacon=5.00*y;
            printf("Total: R$ %.2lf\n",bacon);
        }

        else if(x==4)
        {
            torrada=2.00*y;
            printf("Total: R$ %.2lf\n",torrada);
        }

        else if(x==5)
        {
            refegenerate=1.50*y;
            printf("Total: R$ %.2lf\n",refegenerate);
        }

    }

    return 0;
}
