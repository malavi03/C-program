#include <stdio.h>
int main(){
int length,breadth;
printf("Enter the length of rectangle : ");
scanf("%d",&length);
printf("Enter the breadth of rectangle : ");
scanf("%d",&breadth);
int area = length * breadth;
printf("Area of the rectangle : %d\n",area);
int perimeter = 2*(length + breadth);
printf("Perimeter of the rectangle : %d\n",perimeter);
return 0;
}
