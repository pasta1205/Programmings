#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};

struct node *create(struct node *start)
{
    struct node *temp, *nw;
    int total, i;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->next = NULL;
    start = temp;
    printf("Enter the total no. node you want to create:");
    scanf("%d",&total);
    printf("Enter the info part of node 1:");
    scanf("%d",&temp->info);
    for(i=1; i<total; i++)
    {
        nw = (struct node*)malloc(sizeof(struct node));
        nw->next = NULL;
        printf("Enter the info part of node %d:",i+1);
        scanf("%d",&nw->info);
        temp->next = nw;
        temp = nw;
    }
    printf("\n");
    return start;
}

struct node *merge(struct node *p, struct node *q)
{
    struct node *start, *s=NULL;
    if(p == NULL) return q;
    if(q == NULL) return p;

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
    start = s;
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
    return start;
}

void traverse(struct node *start)
{
    struct node *temp;
    if(start == NULL)
        printf("Linked List is Empty");
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
    struct node *l=NULL, *m=NULL, *p=NULL, *q=NULL;
    printf("Enter the elements of Linked List 1:\n");
    l = create(p);
    printf("Enter the elements of Linked List 2:\n");
    m = create(q);
    printf("Merged Linked List:\n");
    traverse(merge(l,m));
}