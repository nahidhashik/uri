#include<stdio.h>

int main()
{
    float avg,fin,var=0;

    int i=0;

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
    return 0;
}