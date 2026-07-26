#include<stdio.h>
int main(){
int n,num;
printf("Enter the multiplication integer : ");
scanf("%d",&n);
for(int i=0;i<=20;i++){
num=n*i;
printf("%d * %d = %d\n",i,n,num);
}
return 0;
}
