#include<stdio.h>
#include<stdlib.h>
struct node
{
	float coeff;
	int expo;
	struct node *next;
};

struct node *insert(struct node *start, float coeff, int expo)
{
	struct node *nw, *temp;
	nw = (struct node*)malloc(sizeof(struct node));
	nw->coeff = coeff;
	nw->expo = expo;
	if(start == NULL || start->expo < expo)
	{
		nw->next = start; 
		start = nw;
	}
	else
	{
		temp = start;
		while(temp->next != NULL && temp->next->expo > expo)
			temp = temp->next;
		nw->next = temp->next;
		temp->next = nw;
	}
	return start;
}

struct node *create(struct node *start)
{
	int n, i, expo;
	float coeff;
	start = NULL;
	printf("Enter the no. of node:");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter the coeff & expo for the term %d:",i+1);
		scanf("%f",&coeff);
		scanf("%d",&expo);
		start = insert(start, coeff, expo);		
	}
	return start;
}

void display(struct node *ptr)
{
    struct node *temp = ptr;
    while (temp != NULL)
    {
        printf("%.1f x^%d", temp->coeff, temp->expo);
        if (temp->next != NULL && temp->next->coeff >= 0)
            printf(" + ");
        else if (temp->next != NULL)
            printf(" ");
        temp = temp->next;
    }
    printf("\n");
}

void main()
{
	struct node *start = NULL;
	start = create(start);
	printf("Polynomial:\n");
	display(start);
}
