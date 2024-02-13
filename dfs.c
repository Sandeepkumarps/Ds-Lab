#include<stdio.h>
#include<stdlib.h>

int stack[20],a[20][20],top=-1,vis[20];
int pop();
void push();
void dfs(int s,int n);


int main()
{
	int i,j,n,s;
	printf("Enter the number of vertex:");
	scanf("%d",&n);
	
	printf("Enter the elements:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Adjacency matrix\n");
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("enter the source vertex:\n");
	scanf("%d",&s);
	dfs(s,n);
	return(0);
	
}
void dfs(int s,int n)
{
	int i,p;
	push(s);
	vis[s]=1;
	p=pop();
	if(p!=0)
	{
		printf("%d",p);
	}
	while(p!=0)
	{
		for(i=1;i<=n;i++)
		
		if((a[p][i]!=0)&&(vis[i]==0))
		{
			push(i);
			vis[i]=1;
			}
		
		p=pop();
		if(p!=0)
		{
	     	printf("%d",p);
		}
    }
	 for(i=1;i<=n;i++)
	 {
		 if(vis[i]==0)
		 {
			 dfs(i,n);
		 }
	}
}
	void push(int item)
	{
		if(top==19)
		{
			printf("full");
        }
    	else
    	{
			stack[++top]=item;
				
			}
		
		}
	
			
	int pop()
	 {
		 int k;
		 if(top==-1)
		 {
			return(0);
		 }
		 else
		 {
			 k=stack[top--];
			 
			 return(k);
		 }
	 }
