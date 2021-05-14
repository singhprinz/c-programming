#include <stdio.h>
int findHcf(int a,int b)
{
int temp;
if(a==0 || b==0)
return 0;
while(b!=0)
{
temp = a%b;
a=b;
b=temp;
}
return a;
}
int main()
{
int a,b,hcf;
printf("Enter the two numbers :");
scanf("%d%d",&a,&b);
hcf=findHcf(a,b);
printf("HCF (Hiighest Common Factor) of %d,%d is : %d \n ",a,b,hcf);
return 0;
}
