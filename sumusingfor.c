#include <stdio.h>
int main(){
int n,sum=0;
printf("Enter the number : ");
scanf("%d",&n);
if(n>0){
for(int i=1;i<=n;i++){
printf("%d ",i);
sum+=i;
}}
else{
printf("Enter the valid number");}
printf("sum = %d",sum);

return 0;
}
