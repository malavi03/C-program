//Write a C program to count the number of words in a sentence entered by a user.
#include <stdio.h>
int main(){
int i,words=0;
char s[30];
printf("Enter the sentence");
fgets(s,30,stdin);
for(i=0;s[i]!='\0';i++){
if(i==0 && s[i]!=' ' && s[i]!='\n' || (s[i]!=' ' && s[i]!='\n' && s[i-1]==' ')){
words++;
}}
printf("Number of the words : %d ",words);
return 0;
}
