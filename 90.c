#include <stdio.h>



int main(void) {

char s[10];

int i;
	scanf("%s",s);

for(i=0;s[i]!='\0';i++)

{

if(s[i]>='0' && s[i]<='9')

{

printf("%c",s[i]);

}

}

return 0;

}
