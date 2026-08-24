#include <stdio.h>
int main()
{
int a[100], n, i;
int sum = 0, largest, smallest;
float average;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter elements:\n");
for(i = 0; i < n; i++)
{
scanf("%d", &a[i]);
sum = sum + a[i];
}
largest = a[0];
smallest = a[0];
for(i = 1; i < n; i++)
{
if(a[i] > largest)
largest = a[i];
if(a[i] < smallest)
smallest = a[i];
}
average = (float)sum / n;
printf("Array elements: ");
for(i = 0; i < n; i++)
printf("%d ", a[i]);
printf("\nSum = %d", sum);
printf("\nAverage = %.2f", average);
printf("\nLargest = %d", largest);
printf("\nSmallest = %d", smallest);
return 0;
}
