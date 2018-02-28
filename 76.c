#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d=0;
printf("\n enter a number");
scanf("%d",&a);
for(i=2;i<=a;i++)
{
if(a%i==0)
{
d=1;
break;
}}
if(d==1)
printf("\n it is a not a composite number");
else
printf("\n it is a composite number");
getch();
}
