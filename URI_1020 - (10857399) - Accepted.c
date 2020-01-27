#include<stdio.h>
#include<math.h>

int main()
{
int input,years,months,days,mass,din;

scanf("%d",&input);

if(input>=365)
{
years=input/365;
months=(input-years*365)/30;
days=input-(years*365+months*30);

}
else if(input<365)
{
years=0;
months=input/30;
days=input-(months*30);

}
else if(input<30)
{
years=0;
months=0;
days=input;
}
printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",years,months,days);

return 0;
}
