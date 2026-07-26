#include <stdio.h>
int main(){
int a,b,c;
printf("Enter the values of a,b,c");
scanf("%d %d %d",&a,&b,&c);
if(a+c>b ||b+c>a ||a+b>c){
printf("The triangle is valid form");
if(a==b==c){
printf("Equilateral triangle");
}
else if(a==b || b==c || c==a){
printf("Isoceles triangle");
}
else{
printf("Scalene triangle");
}
}
return 0;
}
