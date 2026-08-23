#include <stdio.h>
int swap(int *ptr,int *ptr1){
int temp;
temp=*ptr;
*ptr=*ptr1;
*ptr1=temp;
printf("After swapping:%d %d",*ptr,*ptr1);
}
int main(){
int a,b;
printf("Enter the number:");
scanf("%d %d",&a,&b);
int *ptr=&a;
int *ptr1=&b;
swap(&a,&b);
printf("Before swapping:%d %d",*ptr,*ptr1);
return 0;
}
