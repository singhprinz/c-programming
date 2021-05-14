#include <stdio.h>
int a=10;  //global variable
void fun(void);
int main()
{
  int a=20; /*local to main */
  int b=30;  /*local to main*/
  printf("In main() a=%d , b=%d\n",a,b);
  fun();
  printf("In main() after calling fun() ~ b=%d \n ",b);
  return 0;
}
void fun(void)
{
int b=40; /*local to fun*/
printf("In fun() a=%d\n",a);
printf("In fun() b=%d\n ",b);

}
