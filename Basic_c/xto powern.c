#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main()
{
int x,n, result;
printf("Enter the value of base:");
scanf("%d",&x);
printf("Enter the value of power:");
scanf("%d",&n);
result=pow((double)x,n);
printf("%d to the power of %d ", x,n,result);
return 0 ;
}

