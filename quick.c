#include<stdio.h>

void quickSort(int arr[],int low ,int high)
{
	int i,j,pivot,swap;
	if(low<high)
	{
		pivot=low;
		i=low;
		j=high;
		
		while(i<j)
		{
			while(arr[i]<=arr[j]&&i<low)
			{
				i++;
			}
			while(arr[j]>arr[pivot])
			{
				j--;
			}
			if(i<j)
			{
				swap=arr[i];
				arr[i]=arr[j];
				arr[j]=swap;
			}
		}
		swap=arr[pivot];
		arr[pivot]=arr[j];
		arr[j]=swap;
		
		quickSort(arr,low,j-1);
		quickSort(arr,j+1,high);
	}
}
		
	
	int main()
	{
	int i,n,arr[100];
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	printf("Enter the elements to the array\n");
	for(i=0;i<n;i++)
	{
		
	 scanf("%d",&arr[i]);
    }
    
    quickSort(arr,0,n-1);
    
    printf("Sorted array\n");
    for(i=0;i<n;i++)
    {
		printf("%d",arr[i]);
	}
	return(0);
}
