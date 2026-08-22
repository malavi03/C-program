#include <stdio.h>
int main(){
int a,b,num1,num2,gcd,lcm,temp;
printf("Enter the a and b:");
scanf("%d %d",&a,&b);
num1=a;
num2=b;
while(b!=0){
temp=b;
b=a%b;
a=temp;
}
gcd=a;
lcm=(num1*num2)/gcd;
printf("GCD :%d",gcd);
printf("LCM :%d",lcm);
return 0;
}
