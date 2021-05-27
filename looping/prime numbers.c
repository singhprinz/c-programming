// program to print all prime numbers from 1 to N.
#include<stdio.h>
int checkPrime(int num)
{
int i,flg=0;
for(i=2;i<(num-1); i++)
{
if(num%i==0)
{
flg=1; break;
}
}
if(flg) return 0;
else return 1;
}
int main()
{
int i,n;
printf("Enter the value of N: ");
scanf("%d",&n);
printf("All prime numbers are from 1 to %d : \n",n);
for(i=1; i<=n; i++)
{
if(checkPrime(i))
printf("%d",i);
}
return 0;
}

