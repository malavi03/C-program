#include<stdio.h>
int main(){
int n,temp,digit,sum;
printf("Enter the number : ");
scanf("%d",&n);
temp=n;
while(n!=0){
digit = n%10;
sum=sum+digit*digit*digit;
n=n/10;
}
if(temp==sum){
printf("Armstrong number");
}
else{
printf("Not armstrong number");
}
return 0;
}
