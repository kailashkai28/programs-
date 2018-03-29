#include<stdio.h>
#define max 5
int main(){
	int a[max],n,count=0,count1=0,count2=0;
	printf("Enter the number of elements<6:");
	

	while (scanf("%d",&n)!=1) {
    	    printf("!!You did not enter a valid number!!");
    	    scanf("%*s");

	printf("\nEnter the number of elements<6:");
	while('\n'!=getchar())
	;
	
	}


	printf("\nEnter elements:");
	for(int i=0;i<n;i++)
	{	scanf("%d",&a[i]);

		if(a[i]==0)
			count++;
		else if(a[i]<0)
			count1++;
		else
			count2++;
	}
	printf("No. of zeroes:%d",count);
	printf("\nNo. of positive numbers:%d",count2);
	printf("\nNo. of negative numbers:%d",count1);


	return 0;
}

