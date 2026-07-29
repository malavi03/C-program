//UPPRT TO LOWERCASE
#include <stdio.h>
int main(){
int i;
char s[10];
printf("Enter the string :");
scanf("%s",s);
for(i=0;s[i]!='\0';i++){
if(s[i]>65 && s[i]<=(65+26)){ //if(s[i]>97 &&s[i]<=(97+26)){
s[i]=s[i]+32;                 //s[i]-=32;}}
}}
printf("%s",s);
return 0;
}

