// program to print table of numbers from 1 to 20
#include<stdio.h>
int main()
{
 int i,j,num;
 for (i=1; i<=20; i++)
 {
 num= i;
 for(j=1; j<=10; j++)
 {
 printf("%3d\t",(num*j));
 }
 printf("\n");
 }
 return 0;
}
