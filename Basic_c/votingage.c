#include <stdio.h>
int main()
{
 int a;
 printf("Enter the age of a person:");
 scanf("%d",&a);
 if(a>=18)
 printf("Eligible for voting");
 else
 printf("Not eligible");
 return 0;
}
