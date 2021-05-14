#include <stdio.h>
int main()
{
 float amount,rate,time,si;
 printf("Enter the principle amount,rate and time;");
 scanf("%f%f%f",&amount,&rate,&time);
 si=(amount*rate*time)/100;
 printf("\nSimple Inerest = %f",si);

 return 0;
}
