// program to calculate sum of first N natural numbers.
#include<stdio.h>
int main()
{
int n,i,sum;
printf("Enter the value of N: ");
scanf("%d",&n);
sum=0;
for(i=1;i<=n; i++)
sum+= i;
printf("Sum is : %d\n",sum);
return 0;
}

