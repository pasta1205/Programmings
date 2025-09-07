/*---PASTA---*/
// Stack Operations using Linked List in C
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
struct node *top = NULL;

void push()
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	if(temp == NULL)
		printf("Memory full.\n");
	else
	{
		printf("Enter the element you want to push:");
		scanf("%d",&temp->info);
		temp->next = NULL;
		if(top == NULL)
			top = temp;
		else
		{
			temp->next = top;
			top = temp;
		}
		printf("Element pushed successfully.\n");
	}
}

void pop()
{
	struct node *temp;
	if(top == NULL)
		printf("Stack Linked List doesn't exist.\n");
	else
	{
		temp = top;
		top = temp->next;
		printf("%d deleted successfully.\n",temp->info);
		free(temp);
	}
}

void traverse()
{
	struct node *temp;
	if(top == NULL)
		printf("Stack Linked List Empty.\n");
	else
	{
		temp = top;
		while(temp != NULL)
		{
			printf("%d\t",temp->info);
			temp = temp->next;
		}
	}
}

void main()
{
	int choice;
	do
	{
		printf("\n---Stack Linked List Menu---\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Traverse\n");
		printf("4. Exit\n\n");
		printf("Enter Your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: traverse(); break;
			case 4: printf("Thank You!!\n"); break;
			default: printf("Invalid choice!! Try Again!!\n"); break;
		}
	}
	while(choice != 4);
}
