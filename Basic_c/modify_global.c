#include<stdio.h>
int x=100; //declaration with initialization
void modify_x(int val)
{
    x=val;
}
int main()
{
  printf("1) Value of x : %d\n",x);
  //modify the value of x
  x=200;
  printf("2) Value of x : %d\n",x);
  modify_x(300);
  printf("3) value of x : %d \n",x);
  return 0;
}
