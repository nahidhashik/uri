#	include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);
    int i,c=0;

    if(5<n<20000)
    {
        for(i=1; i<=n; i++)
        {
            if(i%2==0)
            {
                c=i*i;
                printf("%d^2 = %d\n",i,c);

            }

        }


    }

    return 0;
}
