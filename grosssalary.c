#include <stdio.h>
int main()
{
 char name[30];
 float basic,hra,da,pf,gross;
 printf("Enter name:");
 gets(name);
 printf("Enter basic salary: ");
 scanf("%f",&basic);
 printf("Enter HRA: ");
 scanf("%f",&hra);
 printf("Enter DA:");
 scanf("%f",&da);
 pf=(basic*12)/100;;
 gross=basic+da+hra+pf;
 printf("\n Name:%s \nBaic: %f \nHRA: %f \nDA: %f \nPF: %f \n ****Gross Salary: %f **** ", name,basic,hra,da,pf,gross);
 return 0;


}
