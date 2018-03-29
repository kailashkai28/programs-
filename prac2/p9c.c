//Check if an array is sorted or not
#include<stdio.h>
#define s 5
int array(int arr[s],int n);
int main()
{	int arr[s];
	printf("Enter the elements:");
	for(int i=0;i<s;i++)
	{	scanf("%d",&arr[i]);
	}
	int n = sizeof(arr)/sizeof(arr[0]);
	if (array(arr, n))
		printf("Yes\n");
	else
	        printf("No\n");
	return 0;
}
int array(int arr[s],int n)
{	if (n==1||n==0)
		return 1;
	if (arr[n-1]<arr[n-2])
	        return 0;
	return array(arr,n-1);
}

