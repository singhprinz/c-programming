#include <stdio.h>
int main()
{
char a ='A';
int b=120;
float c=123.0f;
double d=1222.90;
char str[] ="hello";
printf("\n Size of a: %d",sizeof(a));
printf("\nSize of b : %d ", sizeof(b));
printf("\nSIze of c : %d ",sizeof(c));
printf("\nSize of d : %d ",sizeof(d));
printf("\nSize of str: %d",sizeof(str));
return 0;
}
