#include <stdio.h>

int main() {
    float basicsalary, da, hra, grosssalary;
    printf("Enter basic salary: ");
    scanf("%f", &basicsalary);
    da = basicsalary * 0.50;
    hra = basicsalary * 0.20;
    grosssalary = basicsalary + da + hra;
    printf("Basic Salary : %.2f\n", basicsalary);
    printf("DA : %.2f\n", da);
    printf("HRA : %.2f\n", hra);
   printf("Gross Salary : %.2f\n", grosssalary);
    return 0;
}

