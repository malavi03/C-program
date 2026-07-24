#include <stdio.h>
int main(){
int totalsecond,hour,minute,seconds;
printf("Enter the totalsecond ");
scanf("%d",&totalsecond);
hour=totalsecond%3600;
totalsecond=totalsecond%3600;
minute=totalsecond/60;
seconds=totalsecond%60;
printf("Hours:%d",hour);
printf("Minute:%d",minute);
printf("Seconds:%d",seconds);
return 0;
}
