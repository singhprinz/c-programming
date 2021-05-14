#include<stdio.h>
int main()
{ int distance;
float m,feet,inch,cm;
 printf("Enter the distance in km");
 scanf("%d",&distance);
 m = distance * 1000;
 feet = distance * 3280.84;
 inch = distance* 39370.1;
 cm = distance * 100000;
 printf("Meter =%0.2f\n Feet=%0.2f\n Inches=%0.2f\n Centimetre=%0.2f\n",m,feet,inch,cm);


 return 0;
}
