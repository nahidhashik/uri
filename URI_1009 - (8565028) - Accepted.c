#include<stdio.h>

int main()
{
    char kok;
    float sallery,considdaring;
    scanf("%s%f%f",&kok,&sallery,&considdaring);
    printf("TOTAL = R$ %.2f\n",sallery+considdaring*0.15);
    return 0;
}
