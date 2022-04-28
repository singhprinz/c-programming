/*Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.*/
#include<stdio.h>
void sort012(int a[], int arr_size) 
    { 
        int lo = 0; 
        int hi = arr_size - 1; 
        int mid = 0, temp = 0; 
        while (mid <= hi) 
        { 
            switch (a[mid]) 
            { 
            case 0: 
            { 
                temp = a[lo]; 
                a[lo] = a[mid]; 
                a[mid] = temp; 
                lo++; 
                mid++; 
                break; 
            } 
            case 1: 
                mid++; 
                break; 
            case 2: 
            { 
                temp = a[mid]; 
                a[mid] = a[hi]; 
                a[hi] = temp; 
                hi--; 
                break; 
            } 
            } 
        } 
    }
int main()
{
int t;
scanf("%d",&t); // no. of test cases
while(t--)
{
int n;
scanf("%d",&n); // total number of inputs
int a[n];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);    // array elements
sort012(a,n);
for(int i=0;i<n;i++)
printf("%d",a[i]);
printf("\n");
}
return 0;
}