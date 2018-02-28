#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b,x,y;
clrscr();
printf("\n enter the numbers ");
scanf("%d%d",&a,&b);
x=a*b;
for(i=0;i<(x/2);i++)
{
y=i*i;
}
if(y==x)
printf("\nyes ");
else
printf("\n NO ");
}
