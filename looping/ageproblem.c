// program to read age of 15 person and count total Baby age, School age and Adult age.
#include<stdio.h>
int main()
{ int age, baby=0,schooling=0,adult=0, count=0;
while(count<15)
{
printf("Enter age of person [%d]: ", count+1);
scanf("%d",&age);
if(age>=0 && age <=5)
baby++;
else if(age>=6 && age<=17)
schooling++;
else adult++;
count ++;
}
printf("Baby age: %d\n ",baby);
printf("School age: %d\n",schooling);
printf("Adult age: %d\n",adult);
return 0;
}
