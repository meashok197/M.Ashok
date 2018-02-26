#include <stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("\n enter a number");
scanf("%d",&a);
b=(a%10);
c=(10-b);
d=a+c;
printf("\n the nearest multiple of 10 is %d",d);
getch();
}
