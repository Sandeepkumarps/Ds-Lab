#include<stdio.h>
int main()
{
	int n,i,a[100],flag=0,key;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements in order\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to be searched:");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("%d is found at the postion %d",key,i+1);
	}
	else
	{
		printf("Not found");
	}
	return(0);
}

		
