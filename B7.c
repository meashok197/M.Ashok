#include <stdio.h>

int main(void) {
	char a[10];
	int i,j,temp;
	scanf("%s",a);
	for(i=0,j=1;a[i]!='\0';i=i+2,j=j+2)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("%s",a);
	return 0;
}
