#include<stdio.h>
#include<stdlib.h>

struct bin_tree
{
	int data;
	struct bin_tree *right ,*left;
};
	typedef struct bin_tree node;
	
	void insert(node **tree,int val)
	{
		node *temp=NULL;
		if(!(*tree))
		{
		temp=(node*)malloc(sizeof(node));
		temp->left=temp->right=NULL;
		temp->data=val;
		*tree=temp;
		return ;
       	}
		if(val<(*tree)->data)
		{
			insert(&(*tree)->left,val);
		}
		else if(val>(*tree)->data)
		{
			insert(&(*tree)->right,val);
		}
	}
	void print_Preorder(node *tree)
	{
		if(tree)
		{
		printf("%d\t ",tree->data);
		print_Preorder(tree->left);
		print_Preorder(tree->right);
	    }
    }
    
    void print_Inorder(node *tree)
	{
		if(tree)
		{
		
		print_Inorder(tree->left);
		printf("%d\t ",tree->data);
		print_Inorder(tree->right);
	    }
    }
    
    void print_Postorder(node *tree)
	{
		if(tree)
		{
		
		print_Postorder(tree->left);
		print_Postorder(tree->right);
		printf("%d \t",tree->data);
	    }
    }
	 
	node * search(node **tree, int val) 
	{
		if(*tree!=NULL||(val==(*tree)->data))
		{
			return *tree;
		}
		if(val<(*tree)->data)
		{
			return search(&((*tree)->left),val);
		}
		else 
		{
			return search(&((*tree)->right),val);
		}
	
     }	
	 int main()
	 {
		 node *root=NULL;
		 node *tmp;
		 
		 int i,size,val,key;
		 
		 printf("Enter the number of root:");
		 scanf("%d",&size);
		 
		 printf("Enter the elements:\n");
		 for(i=0;i<size;i++)
		 {
			 scanf("%d",&val);
			 insert(&root,val);
		 }
		 
		 printf("PreOrder display\n");
		 print_Preorder(root);
		 printf("\n");
		 
		 printf("InOrder display\n");
		 print_Inorder(root);
		 printf("\n");
		 
		 printf("PostOrder display\n");
		 print_Postorder(root);
		 printf("\n");
	 
	 printf("enter the element to be serached:");
	 scanf("%d",&key);
	 tmp=search(&root,key);
	 
	 if(tmp)
	 {
		 printf("Serached node %d is found ",tmp->data);
	 }
	 else
	 {
	 printf("Not found");
     }
     return(0);
}




