//A student passes only if he/she scores at least 40 marks in every subject. Write a program to determine whether the student has passed or failed after accepting marks in five subjects.
#include <stdio.h>
int main(){
int sub1,sub2,sub3,sub4,sub5;
scanf("%d %d %d %d %d ",&sub1,&sub2,&sub3,&sub4,&sub5);
if(sub1>=40 && sub2>=40 && sub3>=40 && sub4>=40 && sub5>=40){
printf("Student has passed");
}
else{
printf("Student has failed");
}
return 0;
}
