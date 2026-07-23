#include <stdio.h>
int main(){
float celsius,fahrenheit,kelvin;
printf("Enter the celsius : ");
scanf("%f",&celsius);
fahrenheit = (5/9*celsius)+32;
printf("Fahrenheit : %f ",fahrenheit);
kelvin = celsius+273.15;
printf("kelvin : %f ",kelvin);
return 0;
}
