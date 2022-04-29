/*Given an unsorted array arr[] of size N having both 
negative and positive integers.
The task is place all negative element at the end of array 
without changing the order of positive element and negative element*/
#include<stdio.h>

int read(int a[],int n){
	for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
	}
	return 0;
}
int pos(int a[], int n){
	for(int i=0;i<n;++i){
		if(a[i]>=0){
			printf("%d \n",a[i]);
		}
	}
	return 0;
}
int neg(int a[],int n){
	for(int i=0;i<n;++i){
		if(a[i]<0){
			printf("%d \n",a[i]);
		}
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	read(a,n);
	pos(a,n);
	neg(a,n);
	return 0;
}