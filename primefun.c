#include <stdio.h>
int prime(int n){
int count=0;
for(int i=1;i<=n;i++){
if(n%i==0){
count++;
}}
return count;
}

int main(){
int n;
printf("Enter the number");
scanf("%d",&n);
int c;
c=prime(n);
if(c==2){
printf("Prime number");
}
else{
printf("Not a prime number");
}
return 0;

}
