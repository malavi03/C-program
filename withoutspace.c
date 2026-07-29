//Write a C program to remove all spaces from a product serial number entered by the user.

#include <stdio.h>
int main(){
int i,j=0;
char s[10];
fgets(s,10,stdin);
for(i=0;s[i]!=0;i++){
if(s[i]!=' '){
s[j]=s[i];
j++;
}
}s[j]='\0';
printf("Serial number : %s",s);
return 0;
}
