#include <stdio.h>
int main()
{
int a[100], left[100], right[100];
int n, k, i;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter elements:\n");
for(i = 0; i < n; i++)
scanf("%d", &a[i]);
printf("Enter K: ");
scanf("%d", &k);
k = k % n;
for(i = 0; i < n; i++)
left[i] = a[(i + k) % n];
for(i = 0; i < n; i++)
right[(i + k) % n] = a[i];
printf("\nLeft rotation: ");
for(i = 0; i < n; i++)
printf("%d ", left[i]);
printf("\nRight rotation: ");
for(i = 0; i < n; i++)
printf("%d ", right[i]);
return 0;
}
