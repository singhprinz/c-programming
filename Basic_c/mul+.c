#include <stdio.h>
int main()
{
int a,b;
int mul,i;
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter the second number :");
scanf("%d",&b);
mul= 0;
for(i=1;i<=b;i++)
{
mul += a;
}
printf("Multiplication of %d and %d is : %d \n ",a,b,mul);
return 0;
}
