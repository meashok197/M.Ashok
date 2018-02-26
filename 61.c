#include<stdio.h>

void main()

{

int n,i;

char str[30];

printf("enter the number");

scanf("%d",&n);

printf("enter the string");

scanf("%s",&str);

for(i=0;i<n;i++)

{

printf("%c",str[i]);

}

}
