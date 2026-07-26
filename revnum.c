#include <stdio.h>
int main(){
int rev=0,digit,n,temp;
printf("Enter the number");
scanf("%d",&n);
//temp=n;
while(n!=0){
digit=n%10;
rev=(rev*10)+digit;
n=n/10;
}
printf("Reverse number : %d",rev);
return 0;
}
