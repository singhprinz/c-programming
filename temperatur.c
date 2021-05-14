#include <stdio.h>
int main()
{
float far,cel;
int choice;
printf("\n1: Convert temperature from fahrenheit to calcius.");
printf("\n2: Convert temperature from celcius to fahrenheit.");
printf("Enter your choice(1,2):");
scanf("%d",&choice);
if(choice==1)
{
printf("\n Enter temperature in Fahrenheit:");
scanf("%f",&far);
cel=(far-32)/1.8;
printf("Temperatur in celcius: %2f",cel);
}
else if(choice==2)
{printf("\n Enter temperature in celcius:");
scanf("%f ",&cel);
far=(cel*1.8)+32;
printf("Temperature in Fahrenheit: %2f",far);

}
else
{
printf("\ninvalid choice !!!");
}
return 0 ;
}

