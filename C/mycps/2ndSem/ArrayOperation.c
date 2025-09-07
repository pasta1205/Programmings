#include<stdio.h>
void display(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d\t",arr[i]);
    printf("\n");
}

void InsertElement(int arr[], int n, int ele, int pos)
{
    int i;
    for(i=n;  i>=pos-1; i--)
		arr[i+1] = arr[i];

	arr[pos-1] = ele;
}

void delete(int arr[], int n, int pos)
{
    int i;
    for(i=pos-1;  i<n; i++)		
		arr[i] = arr[i+1];
}

int Largest(int arr[],int n)
{
	int i;

	int large= arr[0];
	for(i=0; i<n; i++)
	{
		if(arr[i]>large)
			large=arr[i];
	}
    return large;
}

int Smallest(int arr[],int n)
{
	int i;

	int small= arr[0];
	for(i=0; i<n; i++)
	{
		if(arr[i]<small)
			small=arr[i];
	}
    return small;
}

int BinSearch(int arr[], int n, int s)
{
    int first=0,last=n-1,mid,f=0;
    while(first<=last)
    {
        mid = (first+last)/2;

        if(s==arr[mid])
        {
            f=1;
            break;
        }

        else if(s>arr[mid])
            first= mid+1;
        
        else
            last= mid-1;
    }
    if(f)
        printf("Element found!\n");
    else
        printf("Element not found\n");
}

void BubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) 
            { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n, i, arr[50], choice, ele, pos, largest, smallest, s;
    printf("Enter the size of the Array:");
    scanf("%d",&n);

    printf("Enter the elements of the Array:\n");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    while (1)
    {
        printf("\nChoose the Operation you want to perform:\n");
        printf(" 1: Insert An Element\n 2: Delete An Element\n 3: Find Largest Element\n 4: Find Smallest Element\n 5: Binary Search\n 6: Bubble Sort\n 7: Exit\n\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element you want to insert:");
            scanf("%d",&ele);
            printf("Enter the position:");
            scanf("%d",&pos);
            InsertElement(arr,n,ele,pos);
            display(arr,n);
            break;
        case 2:
            printf("Enter the Position at which, You want to delete the element:");
            scanf("%d",&pos);
            delete(arr,n,pos);
            display(arr,n-1);
            break;
        case 3:
            largest = Largest(arr,n);

            printf("The Largest Element of The Array is:%d\n",largest);
            break;
        case 4:
            smallest = Smallest(arr,n);

            printf("The Smallest Element of The Array is:%d\n",smallest);
            break;
        case 5:
            printf("Enter the element you want to search:");
            scanf("%d",&s);
            BinSearch(arr, n, s);
            break;
        case 6:
            BubbleSort(arr,n);
            display(arr,n);
            break;
        case 7:
            printf("Thank You!!");
            return 0;
        default:
            printf("Invalid Input!!");
            break;
        }
    }
    return 0;
}