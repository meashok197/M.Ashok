#include<stdio.h>





int main() {

int a[30], i,  smallest;

for (i = 0; i < 10; i++)

scanf("%d", &a[i]);

smallest = a[0];

for (i = 0; i < 10; i++) 

{

if (a[i] < smallest)

{

smallest = a[i];


}

}

printf(" %d", smallest);

return (0);

}


