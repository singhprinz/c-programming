// program to find factorial of a number
#include<stdio.h>
int main()
{
int num,i;
long int fact;
printf("Enter an integer number:");
scanf("%d",&num);
fact=1;
for(i=num; i>=1;  i--)
fact=fact*i;
printf("\n Factorial of %d is = %1d",num,fact);
return 0;
}

