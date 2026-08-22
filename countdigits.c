#include <stdio.h>
int main(){
int num,countdigits=0,sum=0,evendigits=0,odddigits=0,a,digit;
printf("Enter the num :");
scanf("%d",&num);
int temp=num;
while(temp>0){
countdigits++;
temp=temp/10;
}
printf("Countdigits :%d",countdigits);
temp=num;
while(temp>0){
a=temp%10;
if(a%2==0){
evendigits++;
}

else{
odddigits++;
}
temp=temp/10;}
printf("Odddigits:%d",odddigits);
printf("Evendigits:%d",evendigits);

temp=num;
//int digit;
while(temp>0){
digit=num%10;
sum+=digit;
temp=temp/10;
}
printf("Sum :%d",sum);
return 0;
}
