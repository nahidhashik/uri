#include<stdio.h>
#include<math.h>

int main()
{
    float a,increase,totall;

    char ch='%';

    int per;

    scanf("%f",&a);

    if(a>=0.00&&a<=400.00)
    {
        increase=((15.00/100.00)*a);


        totall=increase+a;

        per=15;

        printf("Novo salario: %0.2f\n",totall);
        printf("Reajuste ganho: %0.2f\n",increase);
        printf("Em percentual: %d %c\n",per,ch);


    }

    else if(a>=400.01&&a<=800.00)
    {
        increase=((12.00/100.00)*a);


        totall=increase+a;

        per=12;

        printf("Novo salario: %0.2f\n",totall);
        printf("Reajuste ganho: %0.2f\n",increase);
        printf("Em percentual: %d %c\n",per,ch);


    }
    if(a>=800.01&&a<=1200.00)
    {
        increase=((10.00/100.00)*a);


        totall=increase+a;

        per=10;
        printf("Novo salario: %0.2f\n",totall);
        printf("Reajuste ganho: %0.2f\n",increase);
        printf("Em percentual: %d %c\n",per,ch);




    }
    if(a>=1200.01&&a<=2000.00)
    {
        increase=((7.00/100.00)*a);


        totall=increase+a;

        per=7;

        printf("Novo salario: %0.2f\n",totall);
        printf("Reajuste ganho: %0.2f\n",increase);
        printf("Em percentual: %d %c\n",per,ch);




    }

    else if(a>=2000.00)
    {
        increase=((4.00/100.00)*a);


        totall=increase+a;
        per=4;

        printf("Novo salario: %0.2f\n",totall);
        printf("Reajuste ganho: %0.2f\n",increase);
        printf("Em percentual: %d %c\n",per,ch);




    }


    return 0;
}
