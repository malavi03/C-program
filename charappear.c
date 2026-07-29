//Write a C program to count how many times a particular character appears in a paragraph.
#include <stdio.h>
int main(){
int i,count=0;
char s[34],ch;
printf("Enter the string");
fgets(s,34,stdin);
printf("Entr the char");
scanf("%c",&ch);
for(i=0;s[i]!='\0';i++){
if(s[i]==ch){
count++;
}
}
printf("%c occurs %d times",ch,count);
return 0;
}
