#include <stdio.h>
int fib(int n1,int n2){
int n3=0,n4;
printf("Enter the num4 :");
scanf("%d",&n4);
for(int i=0;i<n4;i++){
n3=n1+n2;
printf("%d ",n3);
n1=n2;
n2=n3;
}}
int main(){
int n1=0,n2=1;
fib(n1,n2);
return 0;
}
