#include <stdio.h>




int main() 

{

int n,remainder,prod=1;

scanf("%d",&n);

while(n!=0)

{

remainder=n%10;

prod=prod*remainder;

n=n/10;

}

printf("\n%d",prod);

return 0;

}
