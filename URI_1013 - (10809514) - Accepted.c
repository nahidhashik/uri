
#include<stdio.h>
#include<math.h>


int main()
{

    int a,b,c,X,Y;
    scanf("%d%d%d",&a,&b,&c);

    X=(a+b+abs(a-b))/2;

    Y=(X+c+abs(c-X))/2;

    printf("%d eh o maior\n",Y);
    return 0;
}
