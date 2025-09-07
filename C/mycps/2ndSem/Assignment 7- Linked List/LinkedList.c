/*---PASTA---*/
//Single Linked List Operations in C
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
	struct node *temp, *nextnode;
	printf("Enter the no. of nodes:");
	scanf("%d", &total);
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the info part of node 1:");
	scanf("%d", &temp->info);
	temp->next =NULL;
	start = temp;

	for(i=1; i<total; i++)
	{
		nextnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter the info part of node %d:",i+1);
		scanf("%d", &nextnode-> info);
		temp->next = nextnode;
		nextnode->next = NULL;
		temp = nextnode;
	}
}

void insertb()
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	if(temp == NULL)
		printf("Memory full.\n");
	else
	{
		printf("Enter the info part of new node at beginning:");
		scanf("%d",&temp->info);
		temp->next = start;
		start = temp;
		printf("Element Inserted at the beginning.\n");
	}
}

void inserte()
{
	struct node *temp, *ptr;
	temp = start;
	ptr = (struct node*)malloc(sizeof(struct node));
	if(ptr == NULL)
		printf("Memory full.\n");
	else
	{
		printf("Enter the info part of new node:");
                scanf("%d",&ptr->info);
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = ptr;
		printf("Element Inserted at the End.\n");
	}
}

void insertal()
{
	int pos, count=1;
	printf("\nEnter the Position at which you want to insert:");
	scanf("%d",&pos);
	struct node *temp, *ptr, *newnode;
	temp = start;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode == NULL)
		printf("Memory full.\n");
	else
	{
		printf("Enter the info part of new node:");
        scanf("%d",&newnode->info);
		while(temp->next != NULL && count<pos)
		{
			ptr = temp;
			temp = temp->next;
			count++;
		}
		ptr->next = newnode;
		newnode->next = temp;
		printf("%d Inserted at the desired position.\n",newnode->info);
	}
}

void deleteb()
{
	struct node *temp;
	if(start == NULL)
		printf("Linked List Empty.\n");
	else
	{
		temp = start;
		start = temp->next;
		printf("%d deleted from the beginning.\n",temp->info);
		free(temp);
	}
}

void deletee()
{
	struct node *temp,*prev;
	if(start == NULL)
		printf("Linked List Empty.\n");
	else
	{
		temp = start;
		while(temp->next != NULL)
		{
			prev = temp;
			temp = temp->next;
		}
		prev->next = NULL;
		printf("%d deleted from the end.\n",temp->info);
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
		printf("Linked List Empty.\n");
	else
	{
		while(temp != NULL && count<pos)
		{
			prev = temp;
			temp = temp->next;
			count++;
		}

		if(temp == NULL)
			printf("Position Not Exist.\n");
		else
		{
			prev->next = temp->next;
			printf("Element is deleted from the desired position.\n");
			free(temp);
		}
	}
}

void sort()
{
	int item;
	struct node *temp, *min, *ptr;
	if(start == NULL)
		printf("Linked List Empty.\n");
	else
	{
		temp = start;
		while(temp->next != NULL)
		{
			min = temp;
			ptr = temp->next;
			while(ptr != NULL)
			{
				if(min->info > ptr->info)
					min = ptr;
				ptr = ptr->next;
			}
			if(min != temp)
			{
				item = min->info;
				min->info = temp->info;
				temp->info = item;
			}
			temp = temp->next;
		}
		printf("Linked List Sorted Successfully.\n");
	}
}

int search(int n)
{
	struct node *temp;
	temp = start;
	while(temp->next != NULL)
	{
		if(temp->info == n)
			return 1;
		else
			temp = temp->next;
	}
}

void reverse()
{
	struct node *curr, *prev, *ptr;
	curr = start;
	if(curr->next == NULL)
		return;
	prev = curr->next;
	curr->next = NULL;
	while(prev->next != NULL)
	{
		ptr = prev->next;
		prev->next = curr;
		curr = prev;
		prev = ptr;
	}
	prev->next = curr;
	start = prev;
	printf("Linked List Reversed Successfully.\n");
}

void traverse()
{
	struct node *temp;
	if(start == NULL)
		printf("Linked List is Empty!!");
	else
	{
		printf("Elements are:\n");
		temp = start;
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
	int choice,n;
	do
	{
	printf("\n---Linked List---\n");
	printf("01. Create\n");
	printf("02. Insert at Beginning\n");
	printf("03. Insert at End\n");
	printf("04. Insert at any position\n");
	printf("05. Delete at Beginning\n");
	printf("06. Delete at End\n");
	printf("07. Delete at any position\n");
	printf("08. Sort\n");
	printf("09. Search\n");
	printf("10. Reverse\n");
	printf("11. Display\n");
	printf("12. Exit\n");
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
			sort();
			break;
		case 9:
			printf("Enter the Element You want to Search:");
			scanf("%d",&n);
			if(search(n))
				printf("Element found.\n");
			else
				printf("Element not found.\n");
			break;
		case 10:
			reverse();
			break;
		case 11:
			traverse();
			break;
		case 12:
			printf("Thank You!!\n");
			break;
		default:
			printf("Invalid Input!!\n");
			break;
	}
	}
	while(choice!=12);
}
