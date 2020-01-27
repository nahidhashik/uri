#include<stdio.h>

int main()
{
    float avg,fin,var=0;

    int i=0,x;
    while(1)
    {


        while(1)
        {

            if(i==2)break;
            scanf("%f",&avg);

            if(avg>=0.0&&avg<=10.0)
            {
                var=var+avg;
                i++;
                if(i<=3);

            }
            else
                printf("nota invalida\n");
        }
        fin=var/2.0;

        printf("media = %.2f\n",fin);

        i=0;
        var=0;

        while(1)
        {
            scanf("%d",&x);
            printf("novo calculo (1-sim 2-nao)\n");
            if(x==1||x==2)break;
        }
        if(x==1)continue;
        else break;
    }
    return 0;
}
