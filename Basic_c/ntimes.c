#include<stdio.h>
int main()
{
int count;
char name[50];
printf("Enter the name:");
scanf("%s",name);
count=1;
start:
printf("%s\n",name);
count++;
if(count<=10)
goto start;
return 0;
}

