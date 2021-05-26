// program to read an integer and print its multiplication table
#include<stdio.h>
int main()
{
int num,i=1;
printf("Enter an integer number: ");
scanf("%d",&num);
while(i<=10)
{
printf("%d\n",(num*i));
i++;
}
return 0;
}
