/*---PASTA---*/
//Reverse a String using Stack in C
#include <stdio.h>
#include <string.h>

#define MAX 100

void reverseString(char str[]) 
{
    int length = strlen(str);
    char stack[MAX];
    int top = -1;

    for (int i = 0; i < length; i++) 
    {
        stack[++top] = str[i];
    }

    for (int i = 0; i < length; i++) 
    {
        str[i] = stack[top--];
    }
}

int main() 
{
    char str[50];
    printf("Enter a string to reverse: ");
    scanf(" %[^\n]", str);
    //printf("Original string: %s\n", str);

    reverseString(str);

    printf("Reversed string: %s\n\n", str);
    return 0;
}