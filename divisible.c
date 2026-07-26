#include<stdio.h>
int main(){
int num;
printf("Enter the num");
scanf("%d",&num);
if(num%5==0 && num%11==0){
printf("%d the num is divisible by 5 and 11 ",num);}
else{
printf("%d the num is not divisible by 5 nd 11 ",num);}
return 0;}
