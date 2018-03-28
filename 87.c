#include<stdio.h>


#include<conio.h>

int gcd(int a,int b)

{

if(a==0||b==0)


return 0;

if(a==b)

return a;

if(a>b)

{

return gcd(a-b,b);

}

return gcd(a,a-b);

}

void main()

{

int a,b;

clrscr();

scanf("%d%d",&a,&b);

printf("GCD of %d and %d is %d",a,b,gcd(a,b));

getch();

}



