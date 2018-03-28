#include <stdio.h>




int main(void) {

int n,arr[10],i;

scanf("%d",&n);

for(i=1;i<=n;i++)

{

scanf("%d",&arr[i]);

if(arr[i]!=i)

{

printf("%d",i);

break;

}

}

return 0;

}

