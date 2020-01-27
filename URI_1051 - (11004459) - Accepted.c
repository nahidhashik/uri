#include<stdio.h>


int main()
{
    float tax;

    scanf("%f",&tax);

    if(tax>=0.00 && tax<=2000.00)printf("Isento\n");


    else if(tax>2000.00 && tax<=3000.00)
    {
        tax=tax-2000.00;
        tax=(tax*8)/100.00;

        printf("R$ %.2f\n",tax);

    }

    else if(tax>3000.00 && tax<=4500.00)
    {
        tax=tax-3000.00;

        tax=(tax*18)/100.00;


        printf("R$ %.2f\n",tax+80);

    }

    else if(tax>4500.00)
    {
        tax=tax-4500.00;
        tax=(tax*28)/100.00;

        printf("R$ %.2f\n",tax+80+270);
    }
    return 0;
}