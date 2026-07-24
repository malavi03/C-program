#include <stdio.h>
int main(){
int a,b,c;
printf("Enter the value of a,b,c ");
scanf("%d %d %d ",&a,&b,&c);
if((a+b>c) && (a+c>b) && (b+c>a)){
printf("The sides of triangle is valid form");
}
else{
printf("The triangle is not valid form");
}
return 0;
}
