#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};

struct node *front, *rear;

void inserte()
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the element you want to insert:");
	scanf("%d",&temp->info);
	temp->next = NULL;
	if(rear == NULL)
		front = rear = temp;
	else
	{
		rear->next = temp;
		rear = temp;
		printf("%d inserted successfully.\n",temp->info);
	}
}

void deleteb()
{
	struct node *temp;
	if(front == NULL)
		printf("Queue Linked List Empty.\n");
	else
	{
		temp = front;
		printf("%d deleted successfully.\n",front->info);
		front = temp->next;
		free(temp);
	}
}

void traverse()
{
	struct node *temp;
	if(front == NULL)
		printf("Queue Linked List Empty.\n");
	else
	{
		temp = front;
		while(temp != NULL)
		{
			printf("%d\t",temp->info);
			temp = temp->next;
		}
		printf("\n");
	}
}

void main()
{
	int choice;
	do
	{
		printf("\n---Queue Linked List Menu---\n");
		printf("1. Insert\n");
		printf("2. Pop\n");
		printf("3. Traverse\n");
		printf("4. Exit\n\n");
		printf("Enter Your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: inserte(); break;
			case 2: deleteb(); break;
			case 3: traverse(); break;
			case 4: printf("Thank You!!\n"); break;
			default: printf("Invalid Choice!! Try Again!!\n"); break;
		}
	}
	while(choice != 4);
}
