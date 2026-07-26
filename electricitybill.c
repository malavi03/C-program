#include<stdio.h>
int main(){
int unit;
float bill;
printf ("Enter the unit consumed");
scanf("%d",&unit); 

if(unit<=100){
bill=unit*1.5;
}
else if(unit <=200){
bill = 100*1.5 +(unit-100)*2.5;
}
else if(unit <= 300){
bill = 	100*1.5 + 200*2.5 + (unit-200)*4.0;
}
else{
bill = 100*1.5 + 100*2.5 + 100*4.0 + (unit-300)*6.0;
}
printf("Electricity Bill : %2f",bill);
return 0;
}
