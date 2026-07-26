#include <stdio.h>

int main()
{
    int x, y;
 printf("Enter x coordinate: ");
 scanf("%d", &x);
 printf("Enter y coordinate: ");
 scanf("%d", &y);
 if (x > 0 && y > 0)
 printf("The point lies in the First Quadrant.");
 else if (x < 0 && y > 0)
 printf("The point lies in the Second Quadrant.");
 else if (x < 0 && y < 0)
 printf("The point lies in the Third Quadrant.");
 else if (x > 0 && y < 0)
 printf("The point lies in the Fourth Quadrant.");
 else if (x == 0 && y == 0)
 printf("The point is at the Origin.");
 else if (x == 0)
 printf("The point lies on the Y-axis.");
 else
 printf("The point lies on the X-axis.");

    return 0;
}
