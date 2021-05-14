#include<stdio.h>
int main()
{
float basicsalary, employeefund, employerfund, employeeper=12.5, employerper=12.0;
printf("Enter basic pay:");
scanf("%f",&basicsalary);
employeefund=(basicsalary/100)*employeeper;
employerfund=(basicsalary/100)*employerper;
printf("Basic salary: %f\n",basicsalary);
printf("Employee contribution :%f\n",employeefund);
printf("Employer contribution :%f\n",employerfund);
return 0;
}
