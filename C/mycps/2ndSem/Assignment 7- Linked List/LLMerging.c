/*---PASTA---*/
//Linked List Merging in C
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};

struct node *create(struct node *start)
{
	int total,i;
	struct node *temp, *nextnode;
	printf("Enter the no. of nodes:");
	scanf("%d", &total);
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the info part of node 1:");
	scanf("%d", &temp->info);
	temp->next =NULL;
	start = temp;

	for(i=1; i<total; i++)
	{
		nextnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter the info part of node %d:",i+1);
		scanf("%d", &nextnode-> info);
		temp->next = nextnode;
		nextnode->next = NULL;
		temp = nextnode;
	}
	return start;
}

struct node *merge(struct node *p,struct node *q)
{
	struct node *start3 = NULL, *s = NULL;
	if(p==NULL) return q;
	if(q==NULL) return p;
	if(p != NULL && q != NULL)
	{
		if(p->info <= q->info)
		{
			s = p;
			p = p->next;
		}
		else
		{
			s = q;
			q = q->next;
		}
	}
	start3 = s;
	while(p && q)
	{
		if(p->info <= q->info)
		{
			s->next = p;
			s = p;
			p = p->next;
		}
		else
		{
			s->next = q;
			s = q;
			q = q->next;
		}
	}
	if(p == NULL) 
		s->next = q;
	if(q == NULL) 
		s->next = p;
	return start3;
}

void traverse(struct node *start)
{
	struct node *temp;
	if(start == NULL)
		printf("Linked List is Empty!!");
	else
	{
		temp = start;
		while(temp != NULL)
		{
			printf("%d\t",temp->info);
			temp = temp->next;
		}
		printf("\n");
	}
}

void main()
{
	struct node *p=NULL, *q=NULL, *l=NULL, *m=NULL;
	printf("Enter the elements of 1st Linked List:\n");
	l = create(p);
	printf("\n");
	printf("Enter the elements of 2nd Linked List:\n");
	m = create(q);
	printf("\n");
	printf("1st Linked List:\n");
	traverse(l);
	printf("2nd Linked List:\n");
	traverse(m);
	printf("Merged Linked List:\n");
	traverse(merge(l, m));
}
