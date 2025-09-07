#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
char stack[MAX];
int top = -1;

void push(char item)
{
	if (top >= MAX-1)
		printf("Stack Overflow");
	else
		stack[++top] = item;
}

char pop()
{
	if (top == -1)
	{
		printf("Stack Underflow");
		return -1;
	}
	else
		return stack[top--];
}

int precedence(char op)
{
	switch(op)
	{
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;
		default:
			return 0;
	}
}

void ItoP(char infix[], char postfix[])
{
	int i, j=0;
	char item, x;
	push('(');
	strcat(infix,")");

	for(i=0; infix[i] != '\0'; i++)
	{
		item = infix[i];
		if(isdigit(item) || isalpha(item))
			postfix[j++] = item;

		else if(item == '(')
			push(item);
		else if(item == ')')
		{
			while((x=pop()) != '(')
				postfix[j++] = x;
		}

		else
		{
			while(precedence(stack[top]) >= precedence(item))
				postfix[j++] = pop();
			push(item);
		}
		postfix[j] = '\0';
	}
}

int main()
{
	char infix[MAX], postfix[MAX];
	printf("Enter the Infix Expression: ");
	scanf(" %[^\n]", infix);
	ItoP(infix, postfix);
	printf("Postfix Expression: %s",postfix);
	return 0;
}