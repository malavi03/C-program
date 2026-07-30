#include <stdio.h>
int main (){
char s[10],ch;
int i,found=0;
printf("Enter of string :");
fgets(s,10,stdin);
printf("Enter the charr to search : ");
scanf("%c\n",&ch);
for(i=0;s[i]!='\0';i++){
if(s[i]==ch){
found=1;
break;
}
}
if(found){
printf("Character '%c' exists ",ch);
}
else{
printf("Character '%c' not exists ",ch);
}
return 0;
} 
