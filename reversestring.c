//Write a C program to reverse a password string and display the reversed version.

#include <stdio.h>
int main(){
char s[20];
int length=0,i;
printf("enter the passs");
fgets(s,20,stdin);
while(s[length]!='\0' && s[length]!='\n'){
length++;
}
printf("Reversed pass");
for(i=length-1;i>=0;i--){
printf("%c",s[i]);
}
return 0;
}
