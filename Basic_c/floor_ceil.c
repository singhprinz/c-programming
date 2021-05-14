#include <stdio.h>
#include <math.h>
int main()
{
 float val,fval,cval;
 printf("Enter a float value: ");
 scanf("%f",&val);
fval= floor(val);
cval=ceil(val);
 printf("floor value: %f \n ceil value: %f \n ",fval,cval);
 return 0;
}
