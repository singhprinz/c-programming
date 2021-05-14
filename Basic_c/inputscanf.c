#include<stdio.h>
int main()
{
int count=0,num, arr[100],i=0;
while(num!=-1)
{
printf("Enter an integer number (-1 to exit):");
count+=scanf("%d",&num);
arr[i++]=num;
}
printf("\nTotal Inputs (including 0) are : %d\n", count);
printf("Entered numbers are :\n");
for(i=0; i<count; i++)
{
printf("%d\n",arr[i]);
}
printf("\n");
return 0;
}
