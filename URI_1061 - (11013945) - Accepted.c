#include<stdio.h>


int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2,ds1,ds2,day,hour,min,sec,n;

    scanf("%*s %d",&d1);

    scanf("%d %*s",&h1);

    scanf("%d %*s",&m1);

    scanf("%d ",&s1);

    scanf("%*s %d",&d2);

    scanf("%d %*s",&h2);

    scanf("%d %*s",&m2);

    scanf("%d ",&s2);


    ds1=s1+(m1*60)+(h1*(60*60))+(d1*(24*60*60));

    ds2=s2+(m2*60)+(h2*(60*60))+(d2*(24*60*60));

    n=ds2-ds1;

    day=n/86400;

    n=n%86400;

    hour=n/3600;

    n=n%3600;

    min=n/60;

    sec=n%60;

    printf("%d dia(s)\n",day);

    printf("%d hora(s)\n",hour);

    printf("%d minuto(s)\n",min);

    printf("%d segundo(s)\n",sec);


    return 0;
}
