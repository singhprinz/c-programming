#include<stdio.h>
int main()
{
int count,a,diff;
count=1;
a=1;
diff=10;
start:
printf("%d",a);
a=a+diff;
diff=diff+10;
count++;
if(count<=10)
goto start;
return 0;
}

