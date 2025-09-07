/*---PASTA---*/
//Circular Queue Operations in C
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 8

int queue[MAX_SIZE];
int front = -1, rear = -1;

void insert(int item) 
{
    if (front == (rear + 1) % MAX_SIZE)
        printf("Queue Overflow! Cannot insert element.\n");
    else 
    {
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
        }
        else if(rear == MAX_SIZE-1)
        {
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
        queue[rear] = item;
        printf("Element %d inserted successfully.\n", item);
    }
}

void delete() {
    if (front == -1 && rear == -1) {
        printf("Queue Underflow! Cannot delete element.\n");
    } 
    else 
    {
	    printf("Element %d deleted successfully.\n", queue[front]);
        if (front == rear) 
        {
            front = rear = -1;
        } 
        else if(front == MAX_SIZE-1) 
        {
            front = 0;
        }
        else
        {
            front = front + 1;
        }
    }
}

void traverse() 
{
    int i;
    if (front == -1 && rear == -1)
        printf("Queue is empty.\n");
    else 
    {
	    printf("Queue elements:\n");
	    if(front <= rear)
		    for(i= front; i<= rear; i++)
			    printf("%d\t",queue[i]);
	    else
	    {
		    for(i=front; i<MAX_SIZE; i++)
			    printf("%d\t",queue[i]);

		    for(i=0; i<= rear; i++)
			    printf("%d\t",queue[i]);
	    }

        printf("\nFront:%d\t Rear:%d\n",front,rear);
    }
}

int main() 
{
    int choice, item;

    do
    {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter the element to insert: ");
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
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    while(choice != 4);

    return 0;
}
