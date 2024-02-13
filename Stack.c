#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int top=-1, arr[SIZE];
void push();
void  pop();
void display();
int main()
{
	int n,ch;
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
				  push();
				  break;
			  case 2:
				  pop();
				  break;
			  case 3:
			     display();
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
  void push()
  {
	  int x;
	  printf("Enter the element to be insert");
	  scanf("%d",&x);
	  
	  if(top==SIZE-1)
	  {
		  printf("Full");
	  }
	  else
	  {
		  arr[top]=x;
		  top++;
	  }
  }
  void pop()
  {
	 
	  if(top==-1)
	  {
		  printf("Empty");
	  }
	  else
	  {
		 printf("%d",arr[top]);
		  top--;
	  }
  }
  void display()
  {
	  int i;
	  if(top==-1)
	  {
		  printf("Empty");
	  }
	  else
	  {
		  printf("Elements in the stack:\n");
	  for(i=top;i<=0;i--)
	  {
		  
		printf("%d",arr[i]);
	  }
     }
}
