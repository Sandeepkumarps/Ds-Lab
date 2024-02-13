#include<stdio.h>
#include<stdlib.h>

int rear=-1,front=-1,arr[100],n;
void Enqueue();
void Dequeue();
void Display();

int main()
{
		int ch;
	printf("Enter the size of array");
	scanf("%d",&n);
	
	while(1)
	{
		printf("\n menu");
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Display");
		printf("\n 4.Exit");
		
		printf("Enter your choice");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				  Enqueue();
				  break;
			  case 2:
				  Dequeue();
				  break;
			  case 3:
			     Display();
			     break;
			  case 4:
					exit(0);
					break;
			  default:
			  printf("Invalid");
			  break;
		  }
	  }
  }
  void Enqueue()
  {
	  int x;
	  printf("Enter the element:");
	  scanf("%d",&x);
	  if(rear==n-1)
	  {
		  printf("full");
	  }
	  else
	  {
		   rear++;
		  arr[rear]=x;
		 
	  }
  }
  void Dequeue()
  {
	  if(front==rear)
	  {
		  printf("Emmpty");
	  }
	  else
	  {
		  front++;
		  printf("%d",arr[front]);
	  }
  }
  void Display()
  {
	  int i;
	  if(front==rear)
	  {
		  printf("Empty");
	  }
	  else
	  {
		  for( i=front+1;i<=rear;i++)
		  {
			  printf("%d\n",arr[i]);
		  }
	  }
  }
  
		  
		  
		  
