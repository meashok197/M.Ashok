#include<stdio.h>
#include<conio.h>
void printArray(int arr[], int size)
{
int i;
for(i = 0; i < size; i++)
printf("%d ", arr[i]);
}
int gcd(int a,int b)
{
if(b==0)
return a;
else
return gcd(b, a%b);
}
int main()
{
int arr[] = {1, 2, 3, 4, 5, 6, 7};
leftRotate(arr, 2, 7);
print Array(arr, 7);
getchar();
getch();
}
