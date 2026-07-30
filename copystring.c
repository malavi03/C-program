//Write a C program to copy one employee name into another string without using strcpy().

#include <stdio.h>
int main(){
int i;
char e1[10],e2[10];
printf("Enter the employee name1 : ");
fgets(e1,10,stdin);
for(i=0;e1[i]!='\0';i++){
e2[i]=e1[i];
}e2[i]!='\0';
printf("copied element : %d",e2);
return 0;
}
