#include<stdio.h>

int main()
{
    int test,amount,totallani,C=0,R=0,S=0;

    double totallcp,totallrp,totallsp;
    char ani;
    scanf("%d",&test);

    int i;
    for(i=0; i<test; i++)
    {
        scanf("%d %c",&amount,&ani);
        if(ani=='C')
        {
            C+=amount;
        }

        else if(ani=='R')
        {
            R+=amount;
        }
        else if(ani=='S')
        {
            S+=amount;
        }



    }
    totallani=C+R+S;

    totallcp=(C*100.00)/ totallani;

    totallrp=(R*100.00)/totallani;

    totallsp=(S*100.00)/totallani;

    printf("Total: %d cobaias\n",totallani);

    printf("Total de coelhos: %d\n",C);

    printf("Total de ratos: %d\n",R);

    printf("Total de sapos: %d\n",S);

    printf("Percentual de coelhos: %.2lf %%\n",totallcp);

    printf("Percentual de ratos: %.2lf %%\n",totallrp);

    printf("Percentual de sapos: %.2lf %%\n",totallsp);


    return 0;
}
