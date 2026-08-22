#include <stdio.h>
int main(){
int balance =40000,withdraw,deposit;
printf("Enter the option :1.Deposit money\n 2.Withdraw money\n 3.Check balance\n 4.Exit");
int option;
scanf("%d",&option);
switch(option){
case 1:
printf("Deposit the money:");
scanf("%d",&deposit);
balance=balance-deposit;
printf("Deposit money :%d",balance);
break;
case 2:
printf("Withdraw money:");
scanf("%d",&withdraw);
balance=balance+withdraw;
printf("Withdraw money:%d",balance);
break;
case 3:
printf("Check balance :%d",balance);
break;
case 4:
printf("Exit");
break;
default:
printf("Invalid option");
}
return 0;
}
