#include <stdio.h>
int main()
{
    int a,i,c=0,x,z;
    scanf("%d", &x);
    do{
        scanf("%d", &z);
    }
    while(x>=z);
    for(a=x,i=0; i<z; a++)
    {
        i+=a;
        c++;
    }
    printf("%d\n", c);
    return 0;
}