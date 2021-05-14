#include <stdio.h>
int main()
{
 int a,b,c,largest;
 printf("Enter the three numbers :");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b && a>c)
 largest=a;
 else
 if(b>a && b>c)
 largest=b;
 else
 largest=c;
 printf("Largest number is= %d",largest);
 return 0;
}
