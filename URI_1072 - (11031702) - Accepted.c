#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    int i,c=0,x=0,num;


    for(i=0; i<n; i++)
    {
        scanf("%d",&num);

        if(num>=10 && num<=20)
        {
            c++;

        }
        else x++;

    }

printf("%d in\n",c);

printf("%d out\n",x);


return 0;

}