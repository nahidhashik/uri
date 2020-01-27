#include<stdio.h>

int main()
{
    int test,x,y,temp,c=0;
    scanf("%d",&test);
    int i,j;
    for(i=0; i<test; i++)
    {
        scanf("%d%d",&x,&y);

        if(x>y)
        {
            temp=x;
            x=y;
            y=temp;

        }
        if(x%2==0)x--;
        x+=2;
        for(j=x; j<y; j+=2)
        {
            c+=j;
        }
        printf("%d\n",c);
        c=0;
    }


    return 0;
}