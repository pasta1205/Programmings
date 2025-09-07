#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int Queue[MAX], f=-1, r=-1;

void insert(int item)
{
	if(r == MAX-1)
		printf("Overflow!!\n");

	else
	{
		if(f == -1)
		{
			f=0;
			r=0;
		}
		else
			r++;
	
		Queue[r] = item;
		printf("Element is successfully inserted.\n");
	}
}

void delete()
{
	int ele;
	if(f==-1)
		printf("Underflow\n");
	else
	{
		ele = Queue[f];
		printf("%d Deleted Successfully.\n", ele);
	}

	if(f==r)
		f = r = -1;
	else
		f++;
}

void traverse()
{
	int i;
	if(f == -1)
		printf("The Queue is Empty!!\n");
	else
	{
		printf("The Queue Elements are:\n");
		for(i=f; i<=r; i++)
			printf("%d\t", Queue[i]);
		printf("\n");
	}
}

void main()
{
	int choice, item;
	do
	{
		printf("Choose the Queue Operation:\n");
		printf("1: Insert\n");
		printf("2: Delete\n");
		printf("3: Display\n");
		printf("4: Exit\n");
		printf("Enter Your Choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("Enter the element you want to insert: ");
				scanf("%d", &item);
				insert(item);
				break;

			case 2:
				delete();
				break;

			case 3:
				traverse();
				break;

			case 4:
				printf("Thank You!!\n");
				break;

			default:
				printf("Invalid Input!!\n");
		}
	}
	while(choice != 4);
}