#include<stdio.h>
#include<math.h>

int main()
{
int inputfile,h,s,m;
scanf("%d",&inputfile);
if(inputfile>=3600)
{
h=inputfile/3600;

m=(inputfile-(h*3600))/60;

s=(inputfile-(h*3600)-(m*60));

printf("%d:%d:%d\n",h,m,s);
}
else if(inputfile<3600)
{
h=0;
m=inputfile/60;
s=(inputfile-(m*60));


printf("%d:%d:%d\n",h,m,s);

}

return 0;

}
