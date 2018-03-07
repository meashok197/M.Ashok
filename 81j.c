#include<conio.h>
#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter your ninja  quantity");
scanf(%d",&a);
printf("enter your opponent ninja quantity");
scanf(%d",&b);
if(a<b)
{
c=b-a;
printf("the difference between the ninjas is %d",c);
}
else{
printf("you are anti indian");
}
getch();
}
