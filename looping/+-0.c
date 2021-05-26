// program to check whether number is positive, negative or zero until user doesn't want to exit
#include<stdio.h>
int main()
{
 int num;
 char choice;
 do{
      printf("Enter an integer number :");
      scanf("%d",&num);
      if(num==0)
      printf("Number is zero.");
      else if (num>0)
      printf("Number is positive.");
      else
      printf("Number is negative.");
      printf("\n\n Want to check again ( press Y/y for 'yes') :");
      fflush(stdin);
      scanf("%c",&choice);
      }
      while(choice=='Y' || choice=='y');
      printf("\hehehe:!!");
      return 0;


}

