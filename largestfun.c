#include <stdio.h>
int largest(int a,int b){
if(a>b){
return a;
}
else{
return b;
}}
int main(){
int a=34,b=40,c;
c=largest(a,b);
printf("%d",c);
return 0;
}
