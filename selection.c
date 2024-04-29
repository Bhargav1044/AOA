#include <stdio.h>
int main()
{
int a[100], n, i, j, position, swap;
printf("\n\nEnter number of elements:");
scanf("%d", &n);
printf("\nEnter %d Numbers:", n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
for(i = 0; i < n - 1; i++)
{
 position=i;
for(j = i + 1; j < n; j++)
{
if(a[position] > a[j])
position=j;
}
if(position != i)
{
swap=a[i];
a[i]=a[position];
a[position]=swap;
} }
printf("\nSorted Array using selection sort:");
for(i = 0; i < n; i++)
printf("%d\n\n", a[i]);
return 0;
}
