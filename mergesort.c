#include <stdio.h>
int main()
{
int a[50], b[50], c[100];
int n1, n2, i, j, k, temp;
printf("Enter size of first array: ");
scanf("%d", &n1);
printf("Enter first array:\n");
for(i = 0; i < n1; i++)
scanf("%d", &a[i]);
printf("Enter size of second array: ");
scanf("%d", &n2);
printf("Enter second array:\n");
for(i = 0; i < n2; i++)
scanf("%d", &b[i]);
k = 0;
for(i = 0; i < n1; i++)
c[k++] = a[i];
for(i = 0; i < n2; i++)
c[k++] = b[i];
printf("\nMerged array: ");
for(i = 0; i < k; i++)
printf("%d ", c[i]);
for(i = 0; i < k - 1; i++)
{
for(j = 0; j < k - 1 - i; j++)
{
if(c[j] > c[j + 1])
{
temp = c[j];
c[j] = c[j + 1];
c[j + 1] = temp;
}
}
}
printf("\nSorted array: ");
for(i = 0; i < k; i++)
printf("%d ", c[i]);
return 0;
}
