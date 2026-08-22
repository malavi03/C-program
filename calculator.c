#include <stdio.h>
int main(){
int a,b,choice;
printf("Enter the a and b :");
scanf("%d %d",&a,&b);
printf("Enter the choice :");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Addition :%d",a+b);
break;
case 2:
printf("Subtraction :%d",a-b);
break;
case 3:
printf("Multiplication :%d",a*b);
break;
case 4:
printf("Division :%d",a/b);
break;
case 5:
printf("Modolus :%d",a%b);
break;
default:
printf("Invalid operator");
}
return 0;
}
