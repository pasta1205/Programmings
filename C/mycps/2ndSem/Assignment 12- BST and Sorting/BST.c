/*---PASTA---*/
//Binary Search Tree Operations in C
#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *lchild;
	int info;
	struct node *rchild;
};
struct node *root = NULL;

void insert()
{
	struct node *temp, *ptr, *par;
	int item;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter element to insert:");
	scanf("%d",&item);
	if(temp == NULL)
		printf("Memory not allocated.\n");
	else
	{
		temp->info=item;
		temp->lchild=NULL;
		temp->rchild=NULL;
		if(root == NULL)
			root = temp;
		else
		{
			ptr = root;
			while(ptr != NULL)
			{
				par = ptr;
				if(item < ptr->info)
					ptr = ptr->lchild;
				else if(item > ptr->info)
					ptr = ptr->rchild;
				else
				{
					printf("Duplicate element is not allowed.\n");
					break;
				}
			}

			if(ptr == NULL)
			{
				if(item < par->info)
					par->lchild = temp;
				else
					par->rchild = temp;
			}
		}
	}

}

void preorder(struct node *temp)
{
	if(temp != NULL)
	{
		printf("%d\t",temp->info);
		preorder(temp->lchild);
		preorder(temp->rchild);
	}
}

void postorder(struct node *temp)
{
	if(temp != NULL)
	{
	postorder(temp->lchild);
			postorder(temp->rchild);
			printf("%d\t",temp->info);
	}
}

void inorder(struct node *temp)
{
	if(temp != NULL)
	{
		inorder(temp->lchild);
		printf("%d\t",temp->info);
		inorder(temp->rchild);
	}
}

void traverse()
{
	int choice;
	printf("\n---Traversal Menu---\n");
	printf("1. Preorder Traversal\n");
	printf("2. Postorder Traversal\n");
	printf("3. Inorder Traversal\n");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("BST in Preorder Traversal:\n");
			preorder(root);
			break;
		case 2:
			printf("BST in Postorder Traversal:\n");
			postorder(root);
			break;
		case 3:
			printf("BST in Inorder Traversal:\n");
			inorder(root);
			break;
		default:
			printf("Invalid Choice!! Try Again!!\n");
	}
}

void case_a(struct node *par, struct node *ptr)
{
	printf("%d is deleted successfully.\n",ptr->info);
	if(par == NULL)
	{
		root = NULL;
		free(ptr);
	}
	else
	{
		if(ptr->info < par->info)
			par->lchild = NULL;
		else
			par->rchild = NULL;
		free(ptr);
	}
}

void case_b(struct node *par, struct node *ptr)
{
	struct node *child;
	if(ptr->lchild != NULL)
		child = ptr->lchild;
	else
		child = ptr->rchild;
	printf("%d node deleted successfully.\n",ptr->info);
	if(par == NULL)
	{
		root = child;
		free(ptr);
	}
	else
	{
		if(ptr == par->lchild)
			par->lchild = child;
		else
			par->rchild = child;
		free(ptr);
	}
}

void case_c(struct node *par, struct node *ptr)
{
	struct node *pptr, *ppar;
	pptr = ptr->rchild;
	ppar = ptr;
	while(pptr->lchild != NULL)
	{
		ppar = pptr;
		pptr = pptr->lchild;
	}
	ptr->info = pptr->info;
	if(pptr->rchild != NULL)
		case_b(ppar,pptr);
	else
		case_a(ppar,pptr);
}

void delete()
{
	struct node *ptr, *par;
	int item;
	if(root == NULL)
		printf("Tree is Empty.\n");
	else
	{
		ptr=root;
		par=NULL;
		printf("\nEnter the node value to delete:");
		scanf("%d",&item);
		while(ptr != NULL)
		{
			if(ptr->info == item)
				break;
			par = ptr;
			if(item < ptr->info)
				ptr = ptr->lchild;
			else
				ptr = ptr->rchild;
		}

		if(ptr == NULL)
			printf("Node not found!!\n");
		else
		{
			printf("%d deleted successfully.\n",ptr->info);
			if(ptr->lchild != NULL && ptr->rchild != NULL)
				case_c(par,ptr);
			else if((ptr->lchild == NULL) && (ptr->rchild == NULL))
				case_a(par,ptr);
			else
				case_b(par,ptr);
		}
	}
}

void search()
{
	int item;
	struct node *temp;
	if(root == NULL)
		printf("Tree is empty.\n");
	else
	{
		printf("Enter the value to search:");
		scanf("%d",&item);
		temp = root;
		while(temp != NULL)
		{
			if(temp->info == item)
			{
				printf("Node found.\n");
				break;
			}
			else if(item < temp->info)
				temp = temp->lchild;
			else
				temp = temp->rchild;
		}
		if(temp == NULL)
			printf("Node not found.\n");
	}
}

void smallest()
{
	struct node *temp;
	if(root == NULL)
		printf("Tree is empty.\n");
	else
	{
		temp = root;
		while(temp->lchild != NULL)
			temp = temp->lchild;
		printf("Smallest element of the tree is %d.\n",temp->info);
	}
}

void largest()
{
	struct node *temp;
	if(root == NULL)
		printf("Tree is empty.\n");
	else
	{
		temp = root;
		while (temp->rchild != NULL)
			temp = temp->rchild;
		printf("Largest element of the tree is %d.\n",temp->info);
	}
}

void main()
{
	int choice;
	do
	{
		printf("\n---Binary Search Tree---\n");
		printf("1. Insert\n");
		printf("2. Traverse\n");
		printf("3. Delete\n");
		printf("4. Search\n");
		printf("5. Smallest\n");
		printf("6. Largest\n");
		printf("7. Exit\n");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				traverse();
				break;
			case 3:
				delete();
				break;
			case 4:
				search();
				break;
			case 5:
				smallest();
				break;
			case 6:
				largest();
				break;
			case 7:
				printf("Thank You!!\n");
				break;
			default:
				printf("Invalid Choice!! Try Again!!\n");
		}
	}
	while(choice != 7);
}
