#include <stdio.h>

int main()
{
int a[100], n, i, j, temp;
int key, low, high, mid;
int comparisons = 0, found = 0;

printf("Enter number of elements: ");
scanf("%d", &n);

printf("Enter elements:\n");

for(i = 0; i < n; i++)
scanf("%d", &a[i]);

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
}

printf("Sorted array: ");

for(i = 0; i < n; i++)
printf("%d ", a[i]);

printf("\nEnter element to search: ");
scanf("%d", &key);

low = 0;
high = n - 1;

while(low <= high)
{
mid = (low + high) / 2;
comparisons++;

if(a[mid] == key)
{
printf("Element found at position %d\n", mid + 1);
found = 1;
break;
}
else if(key < a[mid])
high = mid - 1;
else
low = mid + 1;
}

if(found == 0)
printf("Element not found\n");

printf("Number of comparisons = %d", comparisons);

return 0;
}
