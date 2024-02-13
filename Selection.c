#include<stdio.h>
int main()
{
	int i,j,swap,min,a[100],n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements to array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		 }
		 if(min!=i)
		 {
			 swap=a[i];
			 a[i]=a[min];
			 a[min]=swap;
		 }
	 }
		 printf("Sorted array:\n");
		 for(i=0;i<n;i++)
	    {
		printf("%d",a[i]);
		printf("\n");
	    }
	    return(0);
	}
		 
			 
		
