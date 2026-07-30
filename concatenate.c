//Write a C program to concatenate a first name and last name without using strcat().

#include <stdio.h>
int main(){
int i,j;
char s[5],s1[5];
printf("Enter the first string : ");
fgets(s,5,stdin);
printf("Enter the second string : ");
fgets(s1,5,stdin);
for(i=0;s[i]!=0;i++){
if(s[i]=='\n'){
s[i]='\0';
break;
}}
s[i]=' ';
i++;
for(j=0;s1[j]!='\0';j++){
if(s1[j]!='\n'){
s[i]=s1[j];
i++;
}}
s1[i]='\0';
printf("name : %s",s);
return 0;
}
