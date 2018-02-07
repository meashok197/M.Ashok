#include<stdio.h>
#include<coonio.h>
void main()
{
int i,num,p;
clrscr();
printf("\n enter the number:");
scanf("%d",&num);
for(i=1;i<6;i++)
p=i*num;
printf("\n the multiple of the given number is %d",p);
getch();
}
