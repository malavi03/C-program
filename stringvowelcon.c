//Write a C program to count the number of vowels and consonants in a customer's feedback message.
#include <stdio.h>
int main(){
int i;     
char s[20];
fgets(s,20,stdin);
//fputs(s,stdout);
int  vowels=0,consonants=0;
for(i=0;s[i]!='\0';i++){
    if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
        vowels++;
    }
    else if (s[i]>='a' && s[i]<='z'){
        consonants++;
    }
}
printf("Count of the vowels : %d",vowels);
printf("Count of the consonants : %d",consonants);
return 0;
}
