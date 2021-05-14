#include<stdio.h>
int main()
{
int number;
printf("Enter the number :");
scanf("%d",&number);
switch(number%2)
{
case 0:
printf("%d is an EVEN number",number); break;
case 1:
printf("%d is an ODD number",number); break;

}
return 0;
}

