// Given an array A of size N, print the reverse of it.
#include <stdio.h>
#include<stdlib.h>
int main()
{
   int t; 
   scanf("%d", &t);
   // t = 1;
   while(t--)
   {
      // No of elements in array or size
      int n; // n = 4
      scanf("%d",&n);
      int arr[n]; // array declaration - size 4
      for(int i=0; i<n; i++)
      scanf("%d",&arr[i]); /// arr = 1 2 3 4 
      for(int i=n-1;i>=0;i--)
      printf("%d \n", arr[i]);
      

   }
   return 0;

}