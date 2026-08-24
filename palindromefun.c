#include <stdio.h>
int palindromefun(int n1){
int digit,rev=0;
int original=n1;
while(n1!=0){
digit=n1%10;
rev=(rev*10)+digit;
n1=n1/10;}
if(original==rev){
printf("Palindrome");
}
else{
printf("Not Palindrome");
}
}
int main(){
int n;
printf("Enter the num:");
scanf("%d",&n);
int n1=n;
palindromefun(n1);

return 0;
}
