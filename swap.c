#include <stdio.h>
int main(){
int a,b,temp;
printf("Enter a value");
scanf("%d",&a);
printf("Enter b value");
scanf("%d",&b);
printf("Before swapping: %d %d \n",a,b);
temp=a;
a=b;
b=temp;
printf("After swapping: %d %d \n",a,b);
return 0;
}
