#include <stdio.h>
#include <math.h>
int main(){
int x,y,x1,y1,distance;
printf("Enter the point of x,y");
scanf("%d %d",&x,&y);
printf("Enter the point of x1,y1");
scanf("%d %d",&x1,&y1);
distance = sqrt(pow(x1-x,2)+pow(y1-y,2));
printf("Euclidean distance :%d",distance);
return 0;
}

