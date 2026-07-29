//Write a C program to replace every occurrence of a given character with another character in a sentence.
#include <stdio.h>
int main(){
int i; 
char s[32],oldchar,newchar;
printf("Enter the string");
fgets(s,32,stdin);
printf("Enter the oldchar\n");
scanf(" %c",&oldchar);
printf("Enter the newchar\n");
scanf(" %c",&newchar);
for(i=0;s[i]!='\0';i++){
if(s[i]==oldchar){
s[i]=newchar;
}
}
printf("Modified sentence : %s",s);
return 0;
}
