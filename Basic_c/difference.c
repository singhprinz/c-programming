#include <stdio.h>
int main()
{
int a,b,diff;
printf("Enter the two numbers");
scanf("%d%d",&a,&b);
if(a>b)
diff=a-b;
else
diff=b-a;
printf("\n Difference bet. %d and %d \nis = %d",a,b,diff);
return 0;

}
