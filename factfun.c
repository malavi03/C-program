#include <stdio.h>
int factorial(int num){
int fact=1;
for(int i=1;i<=num;i++){  
fact*=i;
}printf("%d",fact);
}
int main(){
int num;
scanf("%d",&num);
factorial(num);
return 0;
}
