#include <stdio.h>
int main(){
int i;
char s[20]="malavi";
int count =0;
for(i=0;s[i]!='\0';i++){
count++;
}
printf("Count of the string : %d",count);
return 0;
}
