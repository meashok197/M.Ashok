#include<conio.h>
#include<stdio.h>
void rotateByOne(int a[], int n)
{
  int i, temp;
  temp = a[0];
  for (i = 0; i < n-1; i++)
     a[i] = a[i+1];
  arr[i] = temp;
}
 
// repeat above function d times to rotate array
void rotateArray(int a[], int n, int d)
{
  int i;
  for (i = 0; i < d; i++)
    rotateByOne(a, n);
getch();
}
