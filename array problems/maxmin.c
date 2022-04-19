/*Given an array A of size N of integers.
to find the minimum and maximum elements in the array.*/
#include<stdio.h>
int main()
{
    int n, min ,max;
    scanf("%d",&n);
    int x,i;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x<min)
        {
            min=x;
        }
        else if(x>max)
        {
            max=x;
        }
    }
    printf("Max = %d and Min = %d",max,min);
    return 0;
}