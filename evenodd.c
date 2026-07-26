#include <stdio.h>
int main(){
int i,n=10,sum=0;
for(i=0;i<=n;i++){
if(i%2==0){
sum=sum+i;
}}
printf("\n Sum of the n even number : %d",sum);

for(i=0;i<=n;i++){
if(i%2!=0){
sum=sum+i;
}}
printf("\n Sum of the n  odd number : %d",sum);

return 0;
}  
