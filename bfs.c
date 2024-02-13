#include<stdio.h>
#include<stdlib.h>

int q[20],a[20][20],rear=-1,front=-1,vis[20];
int dequeue();
void enqueue();
void bfs(int s,int n);

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
	bfs(s,n);
	return(0);
}
void bfs(int s,int n)
{
	int i,p;
	enqueue(s);
	vis[s]=1;
	p=dequeue();
	if(p!=0)
	{
		printf("%d",p);
	}
	while(p!=0)
	{
		for(i=0;i<=n;i++)
		if((a[p][i]!=0)&&(vis[i]==0))
		{
			enqueue(i);
			vis[i]=1;
		}
		p=dequeue();
		if(p!=0)
		{
	     	printf("%d",p);
		}
    }
	 for(i=0;i<=n;i++)
	 {
		 if(vis[i]==0)
		 {
			 bfs(i,n);
		 }
	}
}
	void enqueue(int item)
	{
		if(rear==19)
		{
			printf("full");
		}
		else
		{
				
			if(rear==-1)
			{
				
				q[++rear]=item;
				front++;
				
			}
			else
			{
				
				q[++rear]=item;
				
			}
		}
	}
			
	int dequeue()
	 {
		 int k;
		 if((front>rear)||front==-1)
		 {
			return 0;
		 }
		 else
		 {
			 k=q[front++];
			 
			 return k;
		 }
	 }
			 
				
				

