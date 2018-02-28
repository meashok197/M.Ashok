#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,num;
printf("\n enter a number");
scanf("%D",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
printf("\n %d",i);
}
}
getch();
}
