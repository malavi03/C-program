//Write a C program to check whether an entered word is a palindrome. Example: "LEVEL".
#include<stdio.h>
#include <string.h>
int main(){
char s[20];
int i,palindrome=1;
printf("Enter the string");
fgets(s,20,stdin);
int len=strlen(s);
 if (s[len - 1] == '\n')
    {
        s[len - 1] = '\0';
        len--;
    }
for(i=0;i<len/2;i++){
if(s[i]!=s[len-1-i]){
palindrome =0;
break;
}
}
if (palindrome){
printf("Palindrome");
}
else{
printf("Not palindrome");
}
return 0;
}
