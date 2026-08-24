#include <stdio.h>
int gcd(int a,int b){
int gcd,temp;
while(b!=0){
temp=b;
b=a%b;
a=temp;}   
gcd=a;
printf("GCD:%d",gcd);
}
int main(){
int num,num1;
printf("Enter the num,num1:");
scanf("%d %d",&num,&num1);
gcd(num,num1);
return 0;
}
