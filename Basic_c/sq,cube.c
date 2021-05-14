#include<stdio.h>
int main()
{
int count,n;
printf("ENter the value of N:");
scanf("%d",&n);
count=1;
start:
printf("num: %4d, Square: %4d, Cube: %4d\n",count,(count*count),(count*count*count));
count++;
if(count<=n)
goto start;
return 0;
}

