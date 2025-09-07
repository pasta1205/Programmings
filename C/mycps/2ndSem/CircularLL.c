#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
struct node *start = NULL;

void create()
{
	int total,i;
	struct node *temp,*nw;
	printf("Enter total no. of nodes you want to create:");
	scanf("%d",&total);
	temp = (struct node*)malloc(sizeof(struct node));
	start = temp;
	printf("Enter the info part of node 1:");
	scanf("%d",&temp->info);
	temp->next = start;

	for(i=1; i<total; i++)
	{
		nw = (struct node*)malloc(sizeof(struct node));
		printf("Enter the info part of node %d:",i+1);
		scanf("%d",&nw->info);
		temp->next = nw;
		nw->next = start;
		temp = nw;
	}
	printf("All node created successfully.\n");
}

void traverse()
{
	struct node *temp;
	if(start == NULL)
		printf("Linked List doesn't exist.\n");
	else
	{
		temp = start;
		do
		{
			printf("%d\n",temp->info);
			temp = temp->next;
		}
		while(temp!=start);
		printf("\n");
	}
}

void insertb()
{
	struct node *temp, *nw;
	nw = (struct node*)malloc(sizeof(struct node));
	printf("Enter the info part of the new node:");
	scanf("%d",&nw->info);
	temp = start;
	while(temp->next != start)
		temp = temp->next;
	temp->next = nw;
	nw->next = start;
	start = nw;
	printf("%d inserted successfully.\n",nw->info);
}

void inserte()
{
	struct node *temp, *nw;
	nw = (struct node*)malloc(sizeof(struct node));
	printf("Enter the info part of the new node:");
	scanf("%d",&nw->info);
	temp = start;
	while(temp->next != start)
		temp = temp->next;
	temp->next = nw;
	nw->next = start;
	printf("%d inserted successfully.\n",nw->info);
}

void insertal()
{
	int pos, count=1;
	printf("\nEnter the Position at which you want to insert:");
	scanf("%d",&pos);
	struct node *temp, *ptr, *nw;
	temp = start;
	nw = (struct node*)malloc(sizeof(struct node));
	printf("Enter the info part of new node:");
	scanf("%d",&nw->info);
	while(temp->next != start && count<pos)
	{
		ptr = temp;
		temp = ptr->next;
		count++;
	}
	ptr->next = nw;
	nw->next = temp;
	printf("%d Inserted at the desired position.\n",nw->info);
}

void insertagi()
{
	int item;
	struct node *temp, *ptr, *nw;
	printf("Enter the item after which you want to insert:");
	scanf("%d",&item);
	temp = start;
	nw = (struct node*)malloc(sizeof(struct node));
	printf("Enter the info part of new node:");
	scanf("%d",&nw->info);
	while(temp->info != item)
	{
		ptr = start;
		temp = temp->next;
	}
	if(temp->info == item)
	{
		ptr = temp;
		temp = temp->next;
		ptr->next = nw;
		nw->next = temp;
		printf("%d inserted after the given item.\n",nw->info);
	}
	else
		printf("Item not found.\n");
}

void deleteb()
{
	struct node *temp, *ptr;
	if(start == NULL)
		printf("Linked list empty.\n");
	else
	{
	ptr = temp = start;
	while(temp->next != start)
		temp = temp->next;
	start = start->next;
	temp->next = start;
	printf("%d deleted successfully.\n",ptr->info);
	free(ptr);
	}
}

void deletee()
{
	struct node *temp,*ptr;
	if(start == NULL)
		printf("Linked list empty.\n");
	else
	{
		ptr = temp = start;
		while(temp->next != start)
		{
			ptr = temp;
			temp = temp->next;
		}
		ptr->next = start;
		printf("%d deleted successfully.\n",temp->info);
		free(temp);
	}
}

void deleteal()
{
	int pos, count=1;
	struct node *temp, *prev;
	temp = start;
	printf("Enter the position at which you want to delete:");
	scanf("%d",&pos);
	if(start == NULL)
		printf("Linked list empty.\n");
	else
	{
		while(temp->next != start && count<pos)
		{
			prev = temp;
			temp = temp->next;
			count++;
		}
		if(temp == NULL)
			printf("Position not exist.\n");
		else
		{
			prev->next = temp->next;
			printf("Element is deleted from the desired position.\n");
			free(temp);
		}
	}
}

void deletegi()
{
	int item;
	struct node *temp, *prev;
	if(start == NULL)
		printf("Linked List empty.\n");
	else
	{
		temp = start;
		printf("Enter the item you want to delete:");
		scanf("%d",&item);
		while(temp->info != item)
		{
			prev = temp;
			temp = temp->next;
		}
		if(temp->info == item)
		{
			prev->next = temp->next;
			printf("%d is deleted.\n",temp->info);
			free(temp);
		}
		else
			printf("Item not foud.\n");
	}
}

void main()
{
	int choice;
	do
	{
		printf("\n---Circular Linked List Menu---\n");
		printf("1. Create\n");
		printf("2. Traverse\n");
		printf("3. Insert at Beginning\n");
		printf("4. Insert at End\n");
		printf("5. Insert at Any Location\n");
		printf("6. Insert after Given Item\n");
		printf("7. Delete at Beginning\n");
		printf("8. Delete at End\n");
		printf("9. Delete at Any Location\n");
		printf("10. Delete the Given Item\n");
		printf("11. Exit\n");
		printf("\nEnter Your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: create(); break;
			case 2: traverse(); break;
			case 3: insertb(); break;
			case 4: inserte(); break;
			case 5: insertal(); break;
			case 6: insertagi(); break;
			case 7: deleteb(); break;
			case 8: deletee(); break;
			case 9: deleteal(); break;
			case 10: deletegi(); break;
			case 11: printf("Thank You!!\n"); break;
			default: printf("Invalid Choice!!\n"); break;
		}
	}
	while(choice != 11);
}
