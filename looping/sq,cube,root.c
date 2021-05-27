// program to print square ,cube and aquare root of all numbers from 1 to N.
#include<stdio.h>
#include<math.h>
int main()
{
int i,n;
printf("Enter the value of N: ");
scanf("%d",&n);
printf("No    Square    Cube   Square Root \n",n);
for(i=1; i<=n; i++)
{
printf("%d \t %1d \t %1d \t %.2f\n",i,(i*i),(i*i*i),sqrt((double)i));
}
return 0;
}

