#include<stdio.h>
int main()
{
int month,days;
printf("Enter month:");
scanf("%d",&month);
switch(month)
{
case 4:
case 6:
case 9:
case 11:
    days=30; break;
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    days=31 ; break;
case 2:
    days=28;
    break;
default:
days=0;
break;
}
if(days)
printf("No. of days in %d month is %d\n",month,days);
else
printf("invalid\n");
return 0;
}

