#include <stdio.h>
int main(){
int totaldays,year,month,week,day;
printf("\n Enter the totaldays");
scanf("%d",&totaldays);
 year = totaldays/365;
totaldays=totaldays %365;
 month = totaldays/30;
totaldays=totaldays%30;
 week = totaldays/7;
totaldays=totaldays%7;
printf("\nYear: %d",year);
printf("\nMonth: %d",month);
printf("\nWeek: %d",week);
printf("\nDays: %d",day);
return 0;
}
