#include<stdio.h>

int main()
{
int spenttime,averagetime;
scanf("%d%d",&spenttime,&averagetime);
float needfuel;
needfuel=(spenttime*averagetime)/12.0;

printf("%.3f\n",needfuel);

return 0;

}
