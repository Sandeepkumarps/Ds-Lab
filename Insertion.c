#include<stdio.h>
void inSertion(int a[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j<=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	
}

int main()
{
	int n,i,a[100];
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
		scanf("%d",&a[i]);
	}
	inSertion(a,n);
	
	printf("Sorted array \n");
	 for(i=0;i<n;i++)
    {
		printf("%d  ",a[i]);
		
	}
	return(0);
}
