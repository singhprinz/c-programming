#include<stdio.h>
int main()
{
int count,n;
printf("Enter the value of N:");
scanf("%d",&n);
count=n;
end:
printf("%d\n",count);
count--;
if(count<=n)
goto end;
return 0;
}

