
#include<stdio.h>

int binarySearch(int arr[],int l,int r,int key)
 {

	 if(l<r)
	 {
		int  m=l+(r-l)/2;
		 if(arr[m]==key)
		 {
			 return m;
		 }
		 else if(arr[m]>key)
		 {
			 return binarySearch(arr,l,m-1,key);
		 }
		 else
		 {
		   return binarySearch(arr,m+1,r,key);
	     }
	  
    }
     return(-1);
}
		 
int main()
{
	int n,i,arr[100],key;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	printf("Enter the elmenets to the array\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be serached:");
	scanf("%d",&key);
	
	int result=binarySearch(arr,0,n-1,key);
	
   if(result==-1)
   {
	   	   printf("Not found");
   }
   else
   {
       printf("%d is found at the position %d",key,i+1);

   }
   return (0);
}
