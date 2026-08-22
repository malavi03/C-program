#include <stdio.h>
int main(){
char option;
printf("Enter the option:");
scanf("%c",&option);
switch(option){
case 'A':
printf("Excellent");
break;
case 'B':
printf("Good");
break;
case 'C':
printf("Moderate");
break;
case 'D':
printf("Poor");
break;
default:
printf("Fail");
}
return 0;
}
