#include <stdio.h>
int main(){
int value,km,m,cm,kg,g,option;
printf("Enter the value:");
scanf("%d",&value);
printf("Enter the option: 1.km to m\n 2.m to km\n 3.m to cm\n 4.cm to m\n 5.kg to g\n 6.g to kg");
scanf("%d",&option);
switch(option){
case 1:
printf("Convert km to m:");
m=value*1000;
printf("Meter :%d",m);
break;
case 2:
printf("Convert m to km:");
km=value/100;
printf("Kilometer :%d",km);
break;
case 3:
printf("Convert m to cm:");
cm=value*1000;
printf("Centimeter :%d",cm);
break;
case 4:
printf("Convert cm to m:");
m=value/100;
printf("Meter :%d",m);
break;
case 5:
printf("Convert kg to g:");
g=value*1000;
printf("Gram:%d",g);
break;
case 6:
printf("Convert g to kg:");
kg=value/100;
printf("Kilogram:%d",kg);
break;
default:
printf("Invalid option");
}
return 0;
}
