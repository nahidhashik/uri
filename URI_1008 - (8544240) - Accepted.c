#include<stdio.h>

int main()
{
    int number,salery;
    float hour;
    scanf("%d%d%f",&number,&salery,&hour);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",number,salery*hour);
    return 0;
}
