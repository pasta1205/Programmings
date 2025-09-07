/*---PASTA---*/
//Queue Operations in C
#include <stdio.h>
#include <stdlib.h>

#define MAX 8

int queue[MAX];
int front = -1, rear = -1;

void insert(int item) {
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else 
    {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = item;
        printf("Inserted: %d\n", item);
    }
}

void delete() {
    if (front == -1 || front > rear)
        printf("Queue Underflow\n");
    else {
        printf("Deleted: %d\n", queue[front]);
        if (front == rear)
            front = rear = -1;
        else
            front++;
    }
}

void traverse() {
    if (front == -1)
        printf("Queue is empty\n");
    else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\nFront: %d Rear: %d\n", front, rear);
    }
}

int main() {
    int choice, item;
    do {
        printf("\n--- Queue Operations ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter item: ");
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
                printf("Exiting\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);
    return 0;
}