#include<stdio.h>
int main()
{
int a, b;
char ch;
printf("Choose operation to perform(+,-,*,/,%%)");
scanf("%c",&ch);
printf("Enter the  numbers");
scanf("%d",&a);
printf("Enter thr second number");
scanf("%d",&b);


switch(ch)
{
   case '+':
   printf("%d+%d=%d",a,b,a+b);
   break;
   case '-':
   printf("%d-%d=%d",a,b,a-b);
  break;
    case '*':
    printf("%d * %d =%d",a,b,a*b);
 break;
    case '/':
    printf("%d / %d =%d",a,b,a/b);
    break;
    case '%':
    printf("%d %% %d=%d",a,b,a%b);
break;
    default:
    printf("Invalid operation:\n");
}
return 0;
}

