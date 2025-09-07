#include <stdio.h>
#include <string.h>

#define MAX 100

void reverseString(char str[]) {
    int length = strlen(str);
    char stack[MAX];
    int top = -1;

    for (int i = 0; i < length; i++) {
        stack[++top] = str[i];
    }

    for (int i = 0; i < length; i++) {
        str[i] = stack[top--];
    }
}

int main() {
    char str[50];
    printf("Enter the String:");
    scanf(" %[^\n]",str);
    reverseString(str);

    printf("Reversed string: %s\n", str);
    return 0;
}