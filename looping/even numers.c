// program to print even numbers from 1 to N using while loop
#include<stdio.h>
int main()
{
int n,number=1;
printf("Enter the value of N:");
scanf("%d",&n);
printf("Odd Numbers from 1 to %d: \n",n);
while(number<=n)
{
if(number%2 == 0)
printf("%d",number);
number++;
}
return 0;
}
