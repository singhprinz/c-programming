#include<stdio.h>
int main()
{
   int feet,inch;
   printf("Enter the value of feet:");
   scanf("%d",&feet);
   //converting into inches
   inch=feet*12;
   printf("Total inches will be : %d\n",inch);
   return 0;
}
