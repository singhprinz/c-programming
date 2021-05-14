#include <stdio.h>
int main()
{
 int a,b,c;
 float per,total;
 printf("enter three marks");
 scanf("%d%d%d",&a,&b,&c);
 total=a+b+c;
 per=total/300*100;
 printf("Total marks: %f\n and percentage : %f\n",total,per);
 if(per>=60)
 {
 printf("First division\n");
 }
 else if(per>=50)
 printf("second division");
 else if(per>=40)
 printf("third division");
 else
 printf("fail");
 return 0;


}
