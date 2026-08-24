#include <stdio.h>
int main()
{
int a[100], n, i, j, temp;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter elements:\n");
for(i = 0; i < n; i++)
scanf("%d", &a[i]);
printf("\nAscending order:\n");
for(i = 0; i < n - 1; i++)
{
for(j = 0; j < n - 1 - i; j++)
{
if(a[j] > a[j + 1])
{
temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;
}
}
printf("Pass %d: ", i + 1);
for(j = 0; j < n; j++)
printf("%d ", a[j]);
printf("\n");
}
printf("\nDescending order:\n");
for(i = 0; i < n - 1; i++)
{
for(j = 0; j < n - 1 - i; j++)
{
if(a[j] < a[j + 1])
{
temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;
}
}
printf("Pass %d: ", i + 1);
for(j = 0; j < n; j++)
printf("%d ", a[j]);
printf("\n");
}
return 0;
}
