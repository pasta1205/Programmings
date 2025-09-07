/*---PASTA---*/
// Stack Operations in C
#include <stdio.h>
#include <stdlib.h>

#define MAX 100
int stack[MAX];  
int top = -1;   

void push(int value);
void pop();
void peep();
void display();

int main() 
{
    int choice, value;

    do 
    {
        printf("\nStack Operations Menu:\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. Top Element\n");
        printf("4. Display\n");
	    printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peep();
                break;
            case 4:
		        display();
                break;
            case 5:
            printf("Thank You!!\n");
            break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);
    return 0;
}

void push(int value) 
{
    if (top == MAX - 1) 
        printf("Stack Overflow! Cannot push %d\n", value);
    else 
    {
        stack[++top] = value;
        printf("%d pushed into the stack.\n", value);
    }
}

void pop() 
{
    if (top == -1) {
        printf("Stack Underflow! No elements to pop.\n");
    } else {
        printf("%d popped from the stack.\n", stack[top]);
        top--;
    }
}

void peep()
{
	if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Top Element of the Stack: ");
	printf("%d\n",stack[top]);
    }	
}

void display() 
{
	int i;
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements:\n");
        for (i = top; i >= 0; i--)
            printf("%d\n", stack[i]);

        printf("\n");
    }
}
