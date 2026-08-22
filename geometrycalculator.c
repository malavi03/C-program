#include <stdio.h>
#define PI 3.14
int main(){
int side=32,length=12,width=24,base=14,height=6;
int choice,area,r=3;
printf("Enter the choice:1.Area of square\n 2.Area of rectangle 3.Area of circle\n 4.Area of triangle");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Area of square:");
area=side*side;
printf("%d",area);
break;
case 2:
printf("Area of rectangle:");
area=length*width;
printf("%d",area);
break;
case 3:
printf("Area of circle:");
area=PI*r*r;
printf("%d",area);
break;
case 4:
printf("Area of triangle:");
area=1/2*base*height;
printf("%d",area);
break;
default:
printf("Invalid option!!");
}
return 0;
}
