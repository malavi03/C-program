//Write a C program to accept a student's full name and display it exactly as entered.

#include <stdio.h>
int main(){
char str[20];
//scanf("%s",str);
//printf("%s",str);
fgets(str,20,stdin);
fputs(str,stdout);
return 0;
}
