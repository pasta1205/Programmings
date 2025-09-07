#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char value) 
{
    if (top >= MAX_SIZE - 1) 
    {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack[++top] = value;
}

char pop() 
{
    if (top < 0) 
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}

int isMatchingPair(char opening, char closing) 
{
    if (opening == '(' && closing == ')') return 1;
    if (opening == '{' && closing == '}') return 1;
    if (opening == '[' && closing == ']') return 1;
    return 0;
}

int isValidParentheses(char* expression) 
{
    int i;

    for (i = 0; expression[i] != '\0'; i++) 
    {
        if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
            push(expression[i]);
        else if (expression[i] == ')' || expression[i] == '}' || expression[i] == ']') 
	{
            if (top == -1 || !isMatchingPair(pop(), expression[i]))
                return 0;
        }
    }
    return (top == -1);
}

int main() 
{
    char expression[MAX_SIZE];

    printf("Enter an expression with parentheses: ");
    scanf(" %[^\n]", expression);

    if (isValidParentheses(expression)) {
        printf("The expression has valid parentheses.\n");
    } else {
        printf("The expression has invalid parentheses.\n");
    }

    return 0;
}
