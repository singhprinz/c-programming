#include<stdio.h>
int main()
{ float l,b,area,per;
 printf("Enter the length and breadth\n");
 scanf("%f %f",&l,&b);
 area= l*b;
 per=2*(l+b);
 printf("Area =%0.02f and \n perimeter =%0.02f",area,per);
 return 0;
}
