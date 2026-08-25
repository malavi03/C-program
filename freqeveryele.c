#include <stdio.h>
int main()
{
int a[100], n, i, j;
int count, visited[100] = {0};
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter elements:\n");
for(i = 0; i < n; i++)
scanf("%d", &a[i]);
printf("\nElement\tFrequency\n");
for(i = 0; i < n; i++)
{
if(visited[i] == 1)
continue;
count = 1;
for(j = i + 1; j < n; j++)
{
if(a[i] == a[j])
{
count++;
visited[j] = 1;
}
}
printf("%d\t%d\n", a[i], count);
}
return 0;
}
