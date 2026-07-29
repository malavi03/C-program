//Write a C program to compare two usernames without using strcmp() and determine whether they are identical.

#include <stdio.h>
int main(){
int flag=1,i=0;
char s1[5],s2[5];
printf("enter the string 1:");
fgets(s1,5,stdin);
printf("enter the string 2:");
fgets(s2,5,stdin);
for(i=0;s1[i]!='\0';i++){
if(s1[i]=='\n'){
s1[i]='\0';
break;
}}
for(i=0;s2[i]!='\0';i++){
if(s2[i]=='\n'){
s2[i]='\0';
break;     
}}
for(i=0;s1[i]!='\0'||s2[i]!='\0';i++){
if(s1[i]!=s2[i]){
flag=0;
break;
}
}
if(flag){
printf("Identical");
}
else{
printf("Not identical");
}
return 0;
}
