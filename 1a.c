#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
   char str[100];
   int j=2,l=0,f=1;
   clrscr();
   puts("Enter any string\n");
   gets(str);
   for(i = 0; str[i] !='\0'; i++)
   {
      l = l + 1;
   }
   printf("The number of characters in the string are %d\n", l);

   {
      if(str[i] == ' ')
      {
    f = f + 1;
      }
   }
   printf("The number of words in the string are %d", f);
   getch();
}