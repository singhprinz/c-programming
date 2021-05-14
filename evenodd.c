#include <stdio.h>
int main()
{
 int num;
 printf("Enter an integer number: ");
 scanf("%d",&num);
 if(num%2==0)
 printf("%d is an  even no. ",num);
 else
 printf("%d is an odd no.",num);
 return 0;
}
