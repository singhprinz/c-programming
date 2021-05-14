#include<stdio.h>
int main()
{ int cp,sp,amount;
printf("Enter the cost price and selling price");
scanf("%d %d",&cp,&sp);
if(sp>cp)
{amount=sp-cp;
printf("Profit=%d",amount);
}
else if(cp>sp)
{
amount=cp-sp;;
printf("Loss=%d",amount);
}
else
printf("No profit or loss");

 return 0;
}
