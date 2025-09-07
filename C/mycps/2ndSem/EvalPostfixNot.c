#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top >= MAX_SIZE - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
    }
    return stack[top--];
}

int evaluatePostfix(char* expression) 
{
    int i, operand1, operand2, result;

    for (i = 0; expression[i] != '\0'; i++) 
    {
        if (isdigit(expression[i]))
            push(expression[i] - 48);
        else 
	     {
            operand2 = pop();
            operand1 = pop();
            switch (expression[i]) 
	        {
                case '+': result = operand1 + operand2; break;
                case '-': result = operand1 - operand2; break;
                case '*': result = operand1 * operand2; break;
                case '/': result = operand1 / operand2; break;
                default: 
                    printf("Invalid operator\n");
            }
            push(result);
        }
    }
    return result;
}

int main() 
{
    char expression[MAX_SIZE];

    printf("Enter a postfix expression: ");
    scanf(" %[^\n]", expression);

    int result = evaluatePostfix(expression);
    printf("Result: %d\n", result);

    return 0;
}
