#include <stdio.h>
int main()
{
    int a,b,result;
    
    printf("Enter the first number (a):");
    
    scanf("%d",&a);

    printf("Enter the second number (b):");

    scanf("%d",&b);

    result= (a>b) ? a:b;

    printf("Greatest number is:%d\n", result);
}
