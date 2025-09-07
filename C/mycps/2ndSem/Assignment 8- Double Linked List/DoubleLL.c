/*---PASTA---*/
//Double Linked List Operations in C
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *prev;
	struct node *next;
};
struct node *start = NULL;

void create()
{
	struct node *nw, *temp;
	int total, i=1;
	printf("Enter total no. of nodes:");
	scanf("%d",&total);
	if(start == NULL)
	{
		temp = (struct node*)malloc(sizeof(struct node));
		printf("Enter the info part of %d node:",i);
		scanf("%d",&temp->info);
		temp->prev = NULL;
		temp->next = NULL;
		start = temp;
		for(i=2; i<=total; i++)
		{
			nw = (struct node*)malloc(sizeof(struct node));
			printf("Enter the info part of %d node:",i);
			scanf("%d",&nw->info);
			nw->prev = temp;
			nw->next = NULL;
			temp->next = nw;
			temp = nw;
		}
		printf("Linked List created successfully.\n");
	}
	else
		printf("Linked List exist.\n");
}

void insertb()
{
	struct node *nw;
	nw = (struct node*)malloc(sizeof(struct node));
	nw->next = NULL;
	nw->prev = NULL;
	printf("Enter the info part of the beginning node:");
	scanf("%d",&nw->info);

	if(start == NULL)
		start = nw;
	else
	{
		nw->next = start;
		start->prev = nw;
		start = nw;
		printf("Node inserted successfully at the beginning.\n");
	}
}

void inserte()
{
	struct node *temp, *nw;
	temp = start;
	nw = (struct node*)malloc(sizeof(struct node));
	printf("Enter the info part of the new node:");
        scanf("%d",&nw->info);
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = nw;
	nw->prev = temp;
	nw->next = NULL;
	printf("Node inserted successfully at the end.\n");
}

void insertal()
{
	struct node *temp, *nw, *ptr;
	int pos,count=1;
	printf("Enter The Location at which you want to insert:");
	scanf("%d",&pos);
	temp = start;
	nw = (struct node*)malloc(sizeof(struct node));
	printf("Enter the info part of the new node:");
	scanf("%d",&nw->info);
	while(temp->next != NULL && count != pos)
	{
		ptr = temp;
		temp = temp->next;
		count++;
	}
	if(temp == NULL)
		printf("Position doesn't exist.\n");
	else
	{
		ptr->next = nw;
		nw->prev = ptr;
		nw->next = temp;
		temp->prev = nw;
		printf("Node inserted successfully.\n");
	}
}

void deleteb()
{
	struct node *temp;
	temp = start;
	start = start->next;
	start->prev = NULL;
	printf("%d deleted successfully.\n",temp->info);
	free(temp);
}

void deletee()
{
	struct node *temp;
	temp = start;
	while(temp->next != NULL)
		temp = temp->next;
	temp->prev->next = NULL;
	printf("%d deleted successfully.\n",temp->info);
	free(temp);
}

void deleteal()
{
	struct node *temp, *ptr;
	int count=1, pos;
	printf("Enter the position at which you want to delete:");
	scanf("%d",&pos);
	temp = start;
	if(temp == NULL)
		printf("Linked List doesn't exist.\n");
	else
	{
		while(temp != NULL && count != pos)
		{
			ptr = temp;
			temp = temp->next;
			count++;
		}
		ptr->next = temp->next;
		temp->next->prev = ptr;
		printf("%d deleted successfully.\n", temp->info);
		free(temp);
	}
}

void deletegi()
{
	struct node *temp, *ptr;
	int item;
	printf("Enter the item you want to delete:");
	scanf("%d",&item);
	temp = start;
	while(temp != NULL && temp->info != item)
	{
                ptr = temp;
                temp = temp->next;
        }
        ptr->next = temp->next;
        temp->next->prev = ptr;
        printf("%d deleted successfully.\n", temp->info);
        free(temp);
}

void traverse()
{
	struct node *temp, *ptr;
	if(start == NULL)
		printf("Linked List doesn't exist.");
	else
	{
		temp = start;
		printf("Linked List in Forward Direction:\n");
		while(temp != NULL)
		{
			printf("%d\t", temp->info);
			ptr = temp;
			temp = temp->next;
		}
		printf("\n\nLinked List in Backward Direction:\n");
		while(ptr != NULL)
		{
			printf("%d\t",ptr->info);
			ptr = ptr->prev;
		}
	}
}

void main()
{
	int choice,n;
	do
	{
	printf("\n---Double Linked List---\n");
	printf("01. Create\n");
	printf("02. Insert at Beginning\n");
	printf("03. Insert at End\n");
	printf("04. Insert at any position\n");
	printf("05. Delete at Beginning\n");
	printf("06. Delete at End\n");
	printf("07. Delete at any position\n");
	printf("08. Delete the given item\n");
	printf("09. Display\n");
	printf("10. Exit\n");
	printf("\nEnter Your Choice:");
	scanf("%d",&choice);
	switch(choice)

	{
		case 1:
			create();
			printf("Linked List Created.\n");
			break;
		case 2:
			insertb();
			break;
		case 3:
			inserte();
			break;
		case 4:
			insertal();
			break;
		case 5:
			deleteb();
			break;
		case 6:
			deletee();
			break;
		case 7:
			deleteal();
			break;
		case 8:
			deletegi();
			break;
		case 9:
			traverse();
			break;
		case 10:
			printf("Thank You!!\n");
			break;
		default:
			printf("Invalid Input!!\n");
			break;
	}
	}
	while(choice!=10);
}
